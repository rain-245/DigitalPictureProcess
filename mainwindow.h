#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actFile_Open_triggered();

    void on_Btn_lenar_clicked();

    void on_Btn_dyanmic_clicked();

    void on_Btn_histEQ_clicked();

    void on_Btn_resize_clicked();

    void on_Btn_preudo_color_enhance_clicked();

    void on_Btn_deNoisy_clicked();

    void on_Btn_sharping_clicked();

    void on_Btn_threshold_clicked();

    void on_Btn_adaptive_threshold_clicked();

    void on_Btn_rigion_group_clicked();

    void on_Btn_floodfill_clicked();

    void on_Btn_Dilate_clicked();

    void on_Btn_Erode_clicked();

    void on_Btn_Open_clicked();

    void on_Btn_Close_clicked();

    void on_Btn_ConvertColor_clicked();

private:
    Ui::MainWindow *ui;
    cv::Mat srcImg;             //原图
    cv::Mat destImg;            //
    cv::Mat grayImg;            //原图转换后的灰度图

};
#endif // MAINWINDOW_H
