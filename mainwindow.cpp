#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFileDialog>
#include <opencv2/opencv.hpp>
#include <QImage>
#include <QMessageBox>
#include <queue>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actFile_Open_triggered()
{
    QString curPath = QDir::currentPath();
    QString initialDir = "D:/Code/pictures";
    QString pic = QFileDialog::getOpenFileName(this,"选择一张图片",initialDir,"Images(*.jpg *.png *.bmp *.tiff;)");
    QImage qimg;
    cv::Mat temp;
    if(pic.isEmpty()){
        return;
    }

    srcImg = cv::imread(pic.toStdString(),cv::IMREAD_UNCHANGED);
    if(srcImg.empty()){
        QMessageBox::warning(this, "错误", "图片打开失败！");
        return;
    }

    //destImg = srcImg.clone();

    if (srcImg.channels() == 3) {
        cv::cvtColor(srcImg, temp, cv::COLOR_BGR2RGB);
        cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
        qimg = QImage(temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    }else if (srcImg.channels() == 1) {
        temp = srcImg;
        grayImg = srcImg;
        qimg = QImage(temp.data, temp.cols, temp.rows, temp.step, QImage::Format_Grayscale8);
    }else {
        QMessageBox::warning(this, "不支持", "不支持的通道数");
        return;
    }
    ui->Lab_img->setPixmap(QPixmap::fromImage(qimg));
}


//线性对比度展宽
void MainWindow::on_Btn_lenar_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this, "错误", "请先打开图片");
        return;
    }

    destImg.create(grayImg.size(),grayImg.type());
    int a = ui->Edit_a->text().toInt();
    int b = ui->Edit_b->text().toInt();
    int ga = ui->Edit_ga->text().toInt();
    int gb = ui->Edit_gb->text().toInt();

    if(a < 0 || b > 255 || ga < 0 || gb > 255){
        QMessageBox::warning(this, "灰度范围有误", "灰度范围有误！");
        return;
    }

    for(int i = 0;i < grayImg.rows;i++){
        for(int j = 0;j < grayImg.cols;j++){
            int temp = grayImg.at<uchar>(i,j);
            if(temp < a){
                destImg.at<uchar>(i,j) = temp*(ga/a);
            }else if(temp < b){
                destImg.at<uchar>(i,j) = (temp - a)*(gb - ga)/(b - a) + ga;
            }else{
                destImg.at<uchar>(i,j) = (temp - b)*(255- gb)/(255 - b) + gb;
            }
        }
    }
    cv::imshow("Linear",destImg);
}

//动态范围调整
void MainWindow::on_Btn_dyanmic_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this, "错误", "请先打开图片");
        return;
    }

    destImg.create(grayImg.size(),grayImg.type());


    for(int i = 0;i < grayImg.rows;i++){
        for(int j = 0;j < grayImg.cols;j++){
            int cur = grayImg.at<uchar>(i,j);
            destImg.at<uchar>(i,j) = 100*log10((float)(1+cur));
        }
    }
    cv::imshow("Dyamic",destImg);
}

//直方图均衡
void MainWindow::on_Btn_histEQ_clicked()
{
    destImg.create(grayImg.size(),grayImg.type());
    cv::equalizeHist(grayImg,destImg);
    cv::imshow("histEQ",destImg);
}

//图像缩放
void MainWindow::on_Btn_resize_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this, "错误", "请先打开图片");
        return;
    }
    unsigned int width = ui->Edit_width->text().toInt();
    unsigned int height = ui->Edit_height->text().toInt();

    cv::resize(srcImg,destImg,cv::Size(width,height));
    cv::imshow("Resize",destImg);
}

//伪彩色增强
void MainWindow::on_Btn_preudo_color_enhance_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this, "错误", "请先打开图片");
        return;
    }
    destImg.create(grayImg.size(),CV_8UC3);

    //密度分层法
    if(ui->radioBtn_density->isChecked()){
        for(int i = 0;i < grayImg.rows; i++){
            for(int j = 0;j < grayImg.cols;j++){
                int cur = grayImg.at<uchar>(i,j);
                if(cur < 64){
                    destImg.at<cv::Vec3b>(i,j) = cv::Vec3b(255, 0, 0);
                }else if(cur < 192){
                    destImg.at<cv::Vec3b>(i,j) = cv::Vec3b(0,255,0);
                }else{
                    destImg.at<cv::Vec3b>(i,j) = cv::Vec3b(0, 0, 255);
                }
            }
        }
        cv::imshow("Density Level Slicing",destImg);

    //灰度变换法
    }else if(ui->radioBun_grey->isChecked()){
        for(int i = 0;i < grayImg.rows; i++){
            for(int j = 0;j < grayImg.cols;j++){
                int cur = grayImg.at<uchar>(i,j);
                if(cur < 64){
                    destImg.at<cv::Vec3b>(i,j)[0] = 255;
                    destImg.at<cv::Vec3b>(i,j)[1] = cur*4;
                    destImg.at<cv::Vec3b>(i,j)[2] = 0;
                }else if(cur < 127){
                    destImg.at<cv::Vec3b>(i,j)[0] = 4*(127-cur);
                    destImg.at<cv::Vec3b>(i,j)[1] = 255;
                    destImg.at<cv::Vec3b>(i,j)[2] = 0;
                }else if(cur < 192){
                    destImg.at<cv::Vec3b>(i,j)[0] = 0;
                    destImg.at<cv::Vec3b>(i,j)[1] = 255;
                    destImg.at<cv::Vec3b>(i,j)[2] = 4*(cur - 127);
                }else{
                    destImg.at<cv::Vec3b>(i,j)[0] = 0;
                    destImg.at<cv::Vec3b>(i,j)[1] = (255-cur)*4;
                    destImg.at<cv::Vec3b>(i,j)[2] = 255;
                }
            }
        }
        cv::imshow("Gray Level Transformation",destImg);
    }else{
        QMessageBox::warning(this, "错误", "选择一个增强方法");
        return;
    }
}

//滤波
void MainWindow::on_Btn_deNoisy_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this,"错误","请先打开一个图像");
        return;
    }

    int row = 5;
    int column = 5;
    if(!(ui->Edit_rows->text().isEmpty())){
        row = ui->Edit_rows->text().toInt();
    }
    if(!(ui->Edit_cols->text().isEmpty())){
        column = ui->Edit_cols->text().toInt();
    }

    destImg.create(grayImg.size(),grayImg.type());
    if(ui->radioBtn_Average->isChecked()){
        cv::blur(grayImg,destImg,cv::Size(row,column));
        cv::imshow("Average blur",destImg);
    }else if(ui->radioBtn_median->isChecked()){
        //中值滤波必须奇数，这样才能找到邻域的一个中心值！！
        if(row % 2 == 0){
            row++;
        }
        cv::medianBlur(grayImg,destImg,row);
        cv::imshow("Median blur",destImg);
    }else if(ui->radioBtn_Gauss->isChecked()){
        cv::GaussianBlur(grayImg,destImg,cv::Size(row,column),0,0);
        cv::imshow("Gauss blur",destImg);
    }else{
        QMessageBox::warning(this,"错误","选择一个滤波函数！");
        return;
    }
}


void MainWindow::on_Btn_sharping_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this,"错误","请先打开一个图像");
        return;
    }
    destImg.create(grayImg.size(),grayImg.type());
    cv::Mat grad_x,abs_grad_x;
    cv::Mat grad_y,abs_grad_y;
    cv::Mat kernal,grad_dst;
    if(ui->radioBtn_Sobel->isChecked()){
        //Sobel算子
        cv::Sobel(grayImg,grad_x,CV_16S,0,1,3,1,1);
        cv::convertScaleAbs(grad_x,abs_grad_x);
        cv::imshow("X-Sobel",abs_grad_x);

        cv::Sobel(grayImg,grad_y,CV_16S,1,0,3,1,1);
        cv::convertScaleAbs(grad_y,abs_grad_y);
        cv::imshow("Y-Sobel",abs_grad_y);

        cv::addWeighted(abs_grad_x,0.5,abs_grad_y,0.5,0,destImg);
        cv::imshow("Sobel",destImg);
    }else if(ui->radioBtn_Laplace->isChecked()){
        //Laplace算子
        cv::Laplacian(grayImg,grad_dst,CV_16S,3,1);
        cv::convertScaleAbs(grad_dst,destImg);
        cv::imshow("Laplace",destImg);

    }else if(ui->radioBtm_LaplaceDIY->isChecked()){
        //自定义Laplace
        kernal = (cv::Mat_<float>(3,3) << 0,-1,0,-1,5,-1,0,-1,0);
        cv::filter2D(grayImg,destImg,CV_8UC1,kernal);
        cv::imshow("Laplace_DIY",destImg);
    }else{
        QMessageBox::warning(this,"错误","选择锐化算子");
        return;
    }
}


void MainWindow::on_Btn_threshold_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this,"错误","请先打开一个图像");
        return;
    }

    destImg.create(grayImg.size(),grayImg.type());
    cv::threshold(grayImg,destImg,ui->Edit_threshold->text().toInt(),255,cv::THRESH_BINARY);
    imshow("threshold",destImg);
}

void MainWindow::on_Btn_adaptive_threshold_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this,"错误","请先打开一个图像");
        return;
    }

    destImg.create(grayImg.size(),grayImg.type());
    cv::adaptiveThreshold(grayImg,destImg,255,cv::ADAPTIVE_THRESH_MEAN_C,cv::THRESH_BINARY,
                          ui->Edit_wsize->text().toInt(),ui->Edit_offset->text().toInt());

    imshow("adptive_threshold",destImg);
}


void MainWindow::on_Btn_rigion_group_clicked()
{
    if(srcImg.empty()){
        QMessageBox::warning(this,"错误","请先打开一个图像");
        return;
    }

    // 转为灰度图
    if(srcImg.channels() == 3)
        cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);

    int rows = grayImg.rows;
    int cols = grayImg.cols;

    // 获取种子坐标
    int seedx = ui->Edit_seedx->text().toInt();
    int seedy = ui->Edit_seedy->text().toInt();

    // 生长阈值（可再加一个输入框 Edit_thresh 来设置）
    int thresh = 20;
    if(!ui->Edit_thresh->text().isEmpty())
        thresh = ui->Edit_thresh->text().toInt();

    // 1. 校验种子坐标是否越界
    if(seedx < 0 || seedx >= cols || seedy < 0 || seedy >= rows)
    {
        QMessageBox::warning(this,"错误","种子坐标超出图像范围！");
        return;
    }

    // 2. 创建输出图像 + 标记矩阵（标记是否已生长）
    destImg = cv::Mat::zeros(grayImg.size(), grayImg.type());
    cv::Mat mask = cv::Mat::zeros(grayImg.size(), CV_8UC1);

    // 8邻域方向
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    std::queue<cv::Point> q;
    // 种子点入队
    q.push(cv::Point(seedx, seedy));
    mask.at<uchar>(seedy, seedx) = 255;
    destImg.at<uchar>(seedy, seedx) = 255;

    // 种子点灰度值
    uchar seedGray = grayImg.at<uchar>(seedy, seedx);

    // 3. 区域生长主体
    while(!q.empty())
    {
        cv::Point p = q.front();
        q.pop();

        // 遍历8邻域
        for(int i = 0; i < 8; i++)
        {
            int nx = p.x + dx[i];
            int ny = p.y + dy[i];

            // 坐标边界判断
            if(nx < 0 || nx >= cols || ny < 0 || ny >= rows)
                continue;
            // 已生长过则跳过
            if(mask.at<uchar>(ny, nx) == 255)
                continue;

            // 灰度差判断
            uchar curGray = grayImg.at<uchar>(ny, nx);
            if(abs(curGray - seedGray) < thresh)
            {
                mask.at<uchar>(ny, nx) = 255;
                destImg.at<uchar>(ny, nx) = 255;
                q.push(cv::Point(nx, ny));
            }
        }
    }

    // 显示结果
    imshow("Region Growing", destImg);
}


void MainWindow::on_Btn_floodfill_clicked()
{
    if (srcImg.empty())
    {
        QMessageBox::warning(this, "错误", "请先打开图像");
        return;
    }

    cv::Mat gray;
    if (srcImg.channels() == 3)
        cvtColor(srcImg, gray, cv::COLOR_BGR2GRAY);
    else
        gray = srcImg.clone();

    // 1. 获取界面参数
    int seedX = ui->Edit_seedx->text().toInt();
    int seedY = ui->Edit_seedy->text().toInt();
    int thresh = 20;
    if (!ui->Edit_thresh->text().isEmpty())
        thresh = ui->Edit_thresh->text().toInt();

    // 2. 坐标越界检查
    if (seedX < 0 || seedX >= gray.cols || seedY < 0 || seedY >= gray.rows)
    {
        QMessageBox::warning(this, "错误", "种子坐标超出图像范围");
        return;
    }
    cv::Point seed(seedX, seedY);

    // 3. mask 必须 宽+2、高+2，单通道8位
    cv::Mat mask = cv::Mat::zeros(gray.rows + 2, gray.cols + 2, CV_8UC1);

    // 4. 漫水填充：8连通 + 固定范围
    int flags = 8 | cv::FLOODFILL_FIXED_RANGE;
    floodFill(
        gray,
        mask,
        seed,
        cv::Scalar(255),        // 填充为白色
        nullptr,
        cv::Scalar(thresh),     // 下限差值
        cv::Scalar(thresh),     // 上限差值
        flags
        );

    imshow("Flood Fill Result", gray);
}


void MainWindow::on_Btn_Dilate_clicked()
{
    if(srcImg.empty())
    {
        QMessageBox::warning(this,"错误","请先打开图像");
        return;
    }
    cv::Mat gray;
    if(srcImg.channels() == 3)
        cvtColor(srcImg, gray, cv::COLOR_BGR2GRAY);
    else
        gray = srcImg.clone();

    // 获取界面核尺寸
    int ksize = ui->Edit_Kernel->text().toInt();
    // 保证核为奇数（形态学推荐）
    if(ksize % 2 == 0) ksize++;
    if(ksize < 3) ksize = 3;

    // 创建结构元素
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(ksize, ksize));
    // 执行膨胀
    dilate(gray, destImg, kernel);

    imshow("Dilate", destImg);
}

// 腐蚀按钮槽函数
void MainWindow::on_Btn_Erode_clicked()
{
    if(srcImg.empty())
    {
        QMessageBox::warning(this,"错误","请先打开图像");
        return;
    }
    cv::Mat gray;
    if(srcImg.channels() == 3)
        cvtColor(srcImg, gray, cv::COLOR_BGR2GRAY);
    else
        gray = srcImg.clone();

    int ksize = ui->Edit_Kernel->text().toInt();
    if(ksize % 2 == 0) ksize++;
    if(ksize < 3) ksize = 3;

    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(ksize, ksize));
    // 执行腐蚀
    erode(gray, destImg, kernel);

    imshow("Erode", destImg);
}


// 开运算 按钮槽函数
void MainWindow::on_Btn_Open_clicked()
{
    if (srcImg.empty())
    {
        QMessageBox::warning(this, "错误", "请先打开图像");
        return;
    }

    cv::Mat gray;
    if (srcImg.channels() == 3)
        cvtColor(srcImg, gray, cv::COLOR_BGR2GRAY);
    else
        gray = srcImg.clone();

    // 获取核大小，并保证为合法奇数
    int ksize = ui->Edit_Kernel->text().toInt();
    if (ksize % 2 == 0) ksize++;
    if (ksize < 3) ksize = 3;

    // 创建矩形结构元素
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(ksize, ksize));

    // 开运算：先腐蚀 后膨胀
    morphologyEx(gray, destImg, cv::MORPH_OPEN, kernel);

    imshow("Open Operation", destImg);
}

// 闭运算 按钮槽函数
void MainWindow::on_Btn_Close_clicked()
{
    if (srcImg.empty())
    {
        QMessageBox::warning(this, "错误", "请先打开图像");
        return;
    }

    cv::Mat gray;
    if (srcImg.channels() == 3)
        cvtColor(srcImg, gray, cv::COLOR_BGR2GRAY);
    else
        gray = srcImg.clone();

    int ksize = ui->Edit_Kernel->text().toInt();
    if (ksize % 2 == 0) ksize++;
    if (ksize < 3) ksize = 3;

    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(ksize, ksize));

    // 闭运算：先膨胀 后腐蚀
    morphologyEx(gray, destImg, cv::MORPH_CLOSE, kernel);

    imshow("Close Operation", destImg);
}

void MainWindow::on_Btn_ConvertColor_clicked()
{
    // 1. 基础检查
    if (srcImg.empty())
    {
        QMessageBox::warning(this, "错误", "请先打开一张图像");
        return;
    }
    if (srcImg.channels() != 3)
    {
        QMessageBox::warning(this, "错误", "请打开彩色图像（BGR格式）");
        return;
    }

    destImg.create(srcImg.size(),srcImg.type());
    // 2. 根据选中的单选框执行转换
    if (ui->radioHSV->isChecked())
    {
        // BGR → HSV
        cvtColor(srcImg, destImg, cv::COLOR_BGR2HSV);
        imshow("BGR -> HSV", destImg);
    }
    else if (ui->radioXYZ->isChecked())
    {
        // BGR → XYZ
        cvtColor(srcImg, destImg, cv::COLOR_BGR2XYZ);
        imshow("BGR -> XYZ", destImg);
    }
    else if (ui->radioYCrCb->isChecked())
    {
        // BGR → YCrCb (YCbCr)
        cvtColor(srcImg, destImg, cv::COLOR_BGR2YCrCb);
        imshow("BGR -> YCrCb", destImg);
    }
    else
    {
        // 未选择任何选项
        QMessageBox::warning(this, "提示", "请先选择一种颜色空间");
        return;
    }
}

