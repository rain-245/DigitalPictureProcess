/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_Open;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Btn_dyanmic;
    QPushButton *Btn_histEQ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioBtn_density;
    QRadioButton *radioBun_grey;
    QPushButton *Btn_preudo_color_enhance;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *Lab_a;
    QLineEdit *Edit_a;
    QLabel *Lab_b;
    QLineEdit *Edit_b;
    QLabel *Lab_ga;
    QLineEdit *Edit_ga;
    QLabel *Lab_gb;
    QLineEdit *Edit_gb;
    QPushButton *Btn_lenar;
    QWidget *page_2;
    QGroupBox *groupBox_resize;
    QFormLayout *formLayout_2;
    QLabel *Lab_width;
    QLineEdit *Edit_width;
    QLabel *Lab_height;
    QLineEdit *Edit_height;
    QPushButton *Btn_resize;
    QGroupBox *groupBox_resize_2;
    QFormLayout *formLayout_3;
    QLabel *Lab_rotationAngle;
    QLineEdit *Edit_rotationAngle;
    QPushButton *Btn_rotation;
    QGroupBox *groupBox_resize_3;
    QGridLayout *gridLayout;
    QLabel *Lab_rotationAngle_2;
    QLineEdit *Edit_rotationAngle_2;
    QPushButton *Btn_rotation_2;
    QPushButton *pushButton;
    QWidget *page;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *Lab_cols;
    QRadioButton *radioBtn_Average;
    QLabel *Lab_rows;
    QLineEdit *Edit_cols;
    QRadioButton *radioBtn_Gauss;
    QPushButton *Btn_deNoisy;
    QRadioButton *radioBtn_median;
    QLineEdit *Edit_rows;
    QWidget *pic_sharping;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioBtn_Sobel;
    QRadioButton *radioBtn_Laplace;
    QRadioButton *radioBtm_LaplaceDIY;
    QPushButton *Btn_sharping;
    QWidget *page_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *Btn_adaptive_threshold;
    QLabel *Lab_offset;
    QLabel *Lab_wsize;
    QLabel *Lab_threshold;
    QLineEdit *Edit_threshold;
    QLineEdit *Edit_offset;
    QLineEdit *Edit_wsize;
    QPushButton *Btn_threshold;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLineEdit *Edit_seedx;
    QPushButton *Btn_floodfill;
    QLineEdit *Edit_seedy;
    QLabel *Lab_threshold_rigion;
    QLabel *Lab_x;
    QPushButton *Btn_rigion_group;
    QLineEdit *Edit_thresh;
    QLabel *Lab_y;
    QWidget *page_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *Btn_Erode;
    QLabel *Lab_Kernel;
    QPushButton *Btn_Dilate;
    QLineEdit *Edit_Kernel;
    QPushButton *Btn_Close;
    QPushButton *Btn_Open;
    QWidget *page_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioHSV;
    QRadioButton *radioXYZ;
    QRadioButton *radioYCrCb;
    QPushButton *Btn_ConvertColor;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *Lab_img;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actFile_Open = new QAction(MainWindow);
        actFile_Open->setObjectName("actFile_Open");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        actFile_Open->setIcon(icon);
        actFile_Open->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        toolBox->setMinimumSize(QSize(200, 0));
        toolBox->setMaximumSize(QSize(170, 16777215));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        page_1->setGeometry(QRect(0, 0, 200, 403));
        verticalLayout_2 = new QVBoxLayout(page_1);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Btn_dyanmic = new QPushButton(page_1);
        Btn_dyanmic->setObjectName("Btn_dyanmic");

        verticalLayout_2->addWidget(Btn_dyanmic);

        Btn_histEQ = new QPushButton(page_1);
        Btn_histEQ->setObjectName("Btn_histEQ");

        verticalLayout_2->addWidget(Btn_histEQ);

        groupBox_2 = new QGroupBox(page_1);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(150, 150));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        radioBtn_density = new QRadioButton(groupBox_2);
        radioBtn_density->setObjectName("radioBtn_density");

        gridLayout_2->addWidget(radioBtn_density, 0, 0, 1, 1);

        radioBun_grey = new QRadioButton(groupBox_2);
        radioBun_grey->setObjectName("radioBun_grey");

        gridLayout_2->addWidget(radioBun_grey, 1, 0, 1, 1);

        Btn_preudo_color_enhance = new QPushButton(groupBox_2);
        Btn_preudo_color_enhance->setObjectName("Btn_preudo_color_enhance");

        gridLayout_2->addWidget(Btn_preudo_color_enhance, 2, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(page_1);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(150, 150));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(-1, -1, 4, -1);
        Lab_a = new QLabel(groupBox);
        Lab_a->setObjectName("Lab_a");

        formLayout->setWidget(0, QFormLayout::LabelRole, Lab_a);

        Edit_a = new QLineEdit(groupBox);
        Edit_a->setObjectName("Edit_a");

        formLayout->setWidget(0, QFormLayout::FieldRole, Edit_a);

        Lab_b = new QLabel(groupBox);
        Lab_b->setObjectName("Lab_b");

        formLayout->setWidget(1, QFormLayout::LabelRole, Lab_b);

        Edit_b = new QLineEdit(groupBox);
        Edit_b->setObjectName("Edit_b");

        formLayout->setWidget(1, QFormLayout::FieldRole, Edit_b);

        Lab_ga = new QLabel(groupBox);
        Lab_ga->setObjectName("Lab_ga");

        formLayout->setWidget(2, QFormLayout::LabelRole, Lab_ga);

        Edit_ga = new QLineEdit(groupBox);
        Edit_ga->setObjectName("Edit_ga");

        formLayout->setWidget(2, QFormLayout::FieldRole, Edit_ga);

        Lab_gb = new QLabel(groupBox);
        Lab_gb->setObjectName("Lab_gb");

        formLayout->setWidget(3, QFormLayout::LabelRole, Lab_gb);

        Edit_gb = new QLineEdit(groupBox);
        Edit_gb->setObjectName("Edit_gb");

        formLayout->setWidget(3, QFormLayout::FieldRole, Edit_gb);

        Btn_lenar = new QPushButton(groupBox);
        Btn_lenar->setObjectName("Btn_lenar");

        formLayout->setWidget(4, QFormLayout::SpanningRole, Btn_lenar);


        verticalLayout_2->addWidget(groupBox);

        toolBox->addItem(page_1, QString::fromUtf8("\345\233\276\345\275\242\345\242\236\345\274\272"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 200, 403));
        groupBox_resize = new QGroupBox(page_2);
        groupBox_resize->setObjectName("groupBox_resize");
        groupBox_resize->setGeometry(QRect(11, 11, 122, 102));
        formLayout_2 = new QFormLayout(groupBox_resize);
        formLayout_2->setObjectName("formLayout_2");
        Lab_width = new QLabel(groupBox_resize);
        Lab_width->setObjectName("Lab_width");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Lab_width);

        Edit_width = new QLineEdit(groupBox_resize);
        Edit_width->setObjectName("Edit_width");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Edit_width);

        Lab_height = new QLabel(groupBox_resize);
        Lab_height->setObjectName("Lab_height");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Lab_height);

        Edit_height = new QLineEdit(groupBox_resize);
        Edit_height->setObjectName("Edit_height");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Edit_height);

        Btn_resize = new QPushButton(groupBox_resize);
        Btn_resize->setObjectName("Btn_resize");

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, Btn_resize);

        groupBox_resize_2 = new QGroupBox(page_2);
        groupBox_resize_2->setObjectName("groupBox_resize_2");
        groupBox_resize_2->setGeometry(QRect(11, 138, 122, 81));
        formLayout_3 = new QFormLayout(groupBox_resize_2);
        formLayout_3->setObjectName("formLayout_3");
        Lab_rotationAngle = new QLabel(groupBox_resize_2);
        Lab_rotationAngle->setObjectName("Lab_rotationAngle");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Lab_rotationAngle);

        Edit_rotationAngle = new QLineEdit(groupBox_resize_2);
        Edit_rotationAngle->setObjectName("Edit_rotationAngle");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, Edit_rotationAngle);

        Btn_rotation = new QPushButton(groupBox_resize_2);
        Btn_rotation->setObjectName("Btn_rotation");

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, Btn_rotation);

        groupBox_resize_3 = new QGroupBox(page_2);
        groupBox_resize_3->setObjectName("groupBox_resize_3");
        groupBox_resize_3->setGeometry(QRect(10, 240, 131, 111));
        gridLayout = new QGridLayout(groupBox_resize_3);
        gridLayout->setObjectName("gridLayout");
        Lab_rotationAngle_2 = new QLabel(groupBox_resize_3);
        Lab_rotationAngle_2->setObjectName("Lab_rotationAngle_2");

        gridLayout->addWidget(Lab_rotationAngle_2, 0, 0, 1, 1);

        Edit_rotationAngle_2 = new QLineEdit(groupBox_resize_3);
        Edit_rotationAngle_2->setObjectName("Edit_rotationAngle_2");

        gridLayout->addWidget(Edit_rotationAngle_2, 0, 1, 1, 1);

        Btn_rotation_2 = new QPushButton(groupBox_resize_3);
        Btn_rotation_2->setObjectName("Btn_rotation_2");

        gridLayout->addWidget(Btn_rotation_2, 1, 0, 1, 2);

        pushButton = new QPushButton(groupBox_resize_3);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        toolBox->addItem(page_2, QString::fromUtf8("\345\233\276\345\275\242\345\217\230\346\215\242"));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 200, 403));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(0, 10, 191, 181));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        Lab_cols = new QLabel(groupBox_3);
        Lab_cols->setObjectName("Lab_cols");

        gridLayout_3->addWidget(Lab_cols, 6, 0, 1, 1);

        radioBtn_Average = new QRadioButton(groupBox_3);
        radioBtn_Average->setObjectName("radioBtn_Average");

        gridLayout_3->addWidget(radioBtn_Average, 0, 1, 1, 1);

        Lab_rows = new QLabel(groupBox_3);
        Lab_rows->setObjectName("Lab_rows");

        gridLayout_3->addWidget(Lab_rows, 5, 0, 1, 1);

        Edit_cols = new QLineEdit(groupBox_3);
        Edit_cols->setObjectName("Edit_cols");

        gridLayout_3->addWidget(Edit_cols, 6, 1, 1, 1);

        radioBtn_Gauss = new QRadioButton(groupBox_3);
        radioBtn_Gauss->setObjectName("radioBtn_Gauss");

        gridLayout_3->addWidget(radioBtn_Gauss, 4, 0, 1, 2);

        Btn_deNoisy = new QPushButton(groupBox_3);
        Btn_deNoisy->setObjectName("Btn_deNoisy");

        gridLayout_3->addWidget(Btn_deNoisy, 7, 0, 1, 2);

        radioBtn_median = new QRadioButton(groupBox_3);
        radioBtn_median->setObjectName("radioBtn_median");

        gridLayout_3->addWidget(radioBtn_median, 0, 0, 1, 1);

        Edit_rows = new QLineEdit(groupBox_3);
        Edit_rows->setObjectName("Edit_rows");

        gridLayout_3->addWidget(Edit_rows, 5, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        toolBox->addItem(page, QString::fromUtf8("\346\273\244\346\263\242\345\216\273\345\231\252"));
        pic_sharping = new QWidget();
        pic_sharping->setObjectName("pic_sharping");
        widget = new QWidget(pic_sharping);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 151, 131));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioBtn_Sobel = new QRadioButton(widget);
        radioBtn_Sobel->setObjectName("radioBtn_Sobel");

        verticalLayout_3->addWidget(radioBtn_Sobel);

        radioBtn_Laplace = new QRadioButton(widget);
        radioBtn_Laplace->setObjectName("radioBtn_Laplace");

        verticalLayout_3->addWidget(radioBtn_Laplace);

        radioBtm_LaplaceDIY = new QRadioButton(widget);
        radioBtm_LaplaceDIY->setObjectName("radioBtm_LaplaceDIY");

        verticalLayout_3->addWidget(radioBtm_LaplaceDIY);

        Btn_sharping = new QPushButton(widget);
        Btn_sharping->setObjectName("Btn_sharping");

        verticalLayout_3->addWidget(Btn_sharping);

        toolBox->addItem(pic_sharping, QString::fromUtf8("\345\233\276\345\203\217\351\224\220\345\214\226"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 0, 193, 181));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        Btn_adaptive_threshold = new QPushButton(groupBox_4);
        Btn_adaptive_threshold->setObjectName("Btn_adaptive_threshold");

        gridLayout_4->addWidget(Btn_adaptive_threshold, 4, 0, 1, 2);

        Lab_offset = new QLabel(groupBox_4);
        Lab_offset->setObjectName("Lab_offset");

        gridLayout_4->addWidget(Lab_offset, 3, 0, 1, 1);

        Lab_wsize = new QLabel(groupBox_4);
        Lab_wsize->setObjectName("Lab_wsize");

        gridLayout_4->addWidget(Lab_wsize, 2, 0, 1, 1);

        Lab_threshold = new QLabel(groupBox_4);
        Lab_threshold->setObjectName("Lab_threshold");

        gridLayout_4->addWidget(Lab_threshold, 0, 0, 1, 1);

        Edit_threshold = new QLineEdit(groupBox_4);
        Edit_threshold->setObjectName("Edit_threshold");

        gridLayout_4->addWidget(Edit_threshold, 0, 1, 1, 1);

        Edit_offset = new QLineEdit(groupBox_4);
        Edit_offset->setObjectName("Edit_offset");

        gridLayout_4->addWidget(Edit_offset, 3, 1, 1, 1);

        Edit_wsize = new QLineEdit(groupBox_4);
        Edit_wsize->setObjectName("Edit_wsize");

        gridLayout_4->addWidget(Edit_wsize, 2, 1, 1, 1);

        Btn_threshold = new QPushButton(groupBox_4);
        Btn_threshold->setObjectName("Btn_threshold");

        gridLayout_4->addWidget(Btn_threshold, 1, 0, 1, 2);

        groupBox_5 = new QGroupBox(page_3);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 190, 191, 211));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName("gridLayout_5");
        Edit_seedx = new QLineEdit(groupBox_5);
        Edit_seedx->setObjectName("Edit_seedx");
        Edit_seedx->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(Edit_seedx, 1, 1, 1, 1);

        Btn_floodfill = new QPushButton(groupBox_5);
        Btn_floodfill->setObjectName("Btn_floodfill");

        gridLayout_5->addWidget(Btn_floodfill, 5, 0, 1, 2);

        Edit_seedy = new QLineEdit(groupBox_5);
        Edit_seedy->setObjectName("Edit_seedy");

        gridLayout_5->addWidget(Edit_seedy, 2, 1, 1, 1);

        Lab_threshold_rigion = new QLabel(groupBox_5);
        Lab_threshold_rigion->setObjectName("Lab_threshold_rigion");

        gridLayout_5->addWidget(Lab_threshold_rigion, 3, 0, 1, 1);

        Lab_x = new QLabel(groupBox_5);
        Lab_x->setObjectName("Lab_x");

        gridLayout_5->addWidget(Lab_x, 1, 0, 1, 1);

        Btn_rigion_group = new QPushButton(groupBox_5);
        Btn_rigion_group->setObjectName("Btn_rigion_group");

        gridLayout_5->addWidget(Btn_rigion_group, 4, 0, 1, 2);

        Edit_thresh = new QLineEdit(groupBox_5);
        Edit_thresh->setObjectName("Edit_thresh");

        gridLayout_5->addWidget(Edit_thresh, 3, 1, 1, 1);

        Lab_y = new QLabel(groupBox_5);
        Lab_y->setObjectName("Lab_y");

        gridLayout_5->addWidget(Lab_y, 2, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        toolBox->addItem(page_3, QString::fromUtf8("\345\233\276\345\203\217\345\210\206\345\211\262"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        groupBox_6 = new QGroupBox(page_4);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(0, 10, 191, 231));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName("gridLayout_6");
        Btn_Erode = new QPushButton(groupBox_6);
        Btn_Erode->setObjectName("Btn_Erode");

        gridLayout_6->addWidget(Btn_Erode, 2, 0, 1, 2);

        Lab_Kernel = new QLabel(groupBox_6);
        Lab_Kernel->setObjectName("Lab_Kernel");

        gridLayout_6->addWidget(Lab_Kernel, 0, 0, 1, 1);

        Btn_Dilate = new QPushButton(groupBox_6);
        Btn_Dilate->setObjectName("Btn_Dilate");

        gridLayout_6->addWidget(Btn_Dilate, 1, 0, 1, 2);

        Edit_Kernel = new QLineEdit(groupBox_6);
        Edit_Kernel->setObjectName("Edit_Kernel");
        Edit_Kernel->setMinimumSize(QSize(0, 0));

        gridLayout_6->addWidget(Edit_Kernel, 0, 1, 1, 1);

        Btn_Close = new QPushButton(groupBox_6);
        Btn_Close->setObjectName("Btn_Close");

        gridLayout_6->addWidget(Btn_Close, 5, 0, 1, 2);

        Btn_Open = new QPushButton(groupBox_6);
        Btn_Open->setObjectName("Btn_Open");

        gridLayout_6->addWidget(Btn_Open, 3, 0, 1, 2);

        toolBox->addItem(page_4, QString::fromUtf8("\344\272\214\345\200\274\345\233\276\345\203\217\345\244\204\347\220\206"));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        widget1 = new QWidget(page_5);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 10, 141, 201));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioHSV = new QRadioButton(widget1);
        radioHSV->setObjectName("radioHSV");
        radioHSV->setChecked(true);

        verticalLayout_4->addWidget(radioHSV);

        radioXYZ = new QRadioButton(widget1);
        radioXYZ->setObjectName("radioXYZ");

        verticalLayout_4->addWidget(radioXYZ);

        radioYCrCb = new QRadioButton(widget1);
        radioYCrCb->setObjectName("radioYCrCb");

        verticalLayout_4->addWidget(radioYCrCb);

        Btn_ConvertColor = new QPushButton(widget1);
        Btn_ConvertColor->setObjectName("Btn_ConvertColor");

        verticalLayout_4->addWidget(Btn_ConvertColor);

        toolBox->addItem(page_5, QString::fromUtf8("\351\242\234\350\211\262\350\275\254\346\215\242"));

        horizontalLayout->addWidget(toolBox);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(512, 512));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 582, 569));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        Lab_img = new QLabel(scrollAreaWidgetContents_2);
        Lab_img->setObjectName("Lab_img");
        sizePolicy.setHeightForWidth(Lab_img->sizePolicy().hasHeightForWidth());
        Lab_img->setSizePolicy(sizePolicy);
        Lab_img->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(Lab_img);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actFile_Open);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        Btn_dyanmic->setText(QCoreApplication::translate("MainWindow", "\345\212\250\346\200\201\350\214\203\345\233\264\350\260\203\346\225\264", nullptr));
        Btn_histEQ->setText(QCoreApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\344\274\252\345\275\251\350\211\262\345\242\236\345\274\272", nullptr));
        radioBtn_density->setText(QCoreApplication::translate("MainWindow", "\345\257\206\345\272\246\345\210\206\345\261\202\346\263\225", nullptr));
        radioBun_grey->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\217\230\346\215\242\346\263\225", nullptr));
        Btn_preudo_color_enhance->setText(QCoreApplication::translate("MainWindow", "\344\274\252\345\275\251\350\211\262", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\272\277\346\200\247\345\257\271\346\257\224\345\272\246\345\261\225\345\256\275", nullptr));
        Lab_a->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        Lab_b->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        Lab_ga->setText(QCoreApplication::translate("MainWindow", "ga", nullptr));
        Lab_gb->setText(QCoreApplication::translate("MainWindow", "gb", nullptr));
        Btn_lenar->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\200\247\345\257\271\346\257\224\345\272\246\345\261\225\345\256\275", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_1), QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\345\242\236\345\274\272", nullptr));
        groupBox_resize->setTitle(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        Lab_width->setText(QCoreApplication::translate("MainWindow", "\345\256\275", nullptr));
        Lab_height->setText(QCoreApplication::translate("MainWindow", "\351\253\230", nullptr));
        Btn_resize->setText(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        groupBox_resize_2->setTitle(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        Lab_rotationAngle->setText(QCoreApplication::translate("MainWindow", "\350\247\222\345\272\246", nullptr));
        Btn_rotation->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        groupBox_resize_3->setTitle(QCoreApplication::translate("MainWindow", "\351\224\231\345\210\207", nullptr));
        Lab_rotationAngle_2->setText(QCoreApplication::translate("MainWindow", "\346\257\224\347\216\207", nullptr));
        Btn_rotation_2->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263\351\224\231\345\210\207", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264\351\224\231\345\210\207", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\345\217\230\346\215\242", nullptr));
#if QT_CONFIG(accessibility)
        page->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242", nullptr));
        Lab_cols->setText(QCoreApplication::translate("MainWindow", "\351\202\273\345\237\237column", nullptr));
        radioBtn_Average->setText(QCoreApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        Lab_rows->setText(QCoreApplication::translate("MainWindow", "\351\202\273\345\237\237row", nullptr));
        radioBtn_Gauss->setText(QCoreApplication::translate("MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
        Btn_deNoisy->setText(QCoreApplication::translate("MainWindow", "\345\216\273\345\231\252", nullptr));
        radioBtn_median->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242\345\216\273\345\231\252", nullptr));
        radioBtn_Sobel->setText(QCoreApplication::translate("MainWindow", "sobel", nullptr));
        radioBtn_Laplace->setText(QCoreApplication::translate("MainWindow", "Laplace", nullptr));
        radioBtm_LaplaceDIY->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211Laplace", nullptr));
        Btn_sharping->setText(QCoreApplication::translate("MainWindow", "\351\224\220\345\214\226", nullptr));
        toolBox->setItemText(toolBox->indexOf(pic_sharping), QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\351\224\220\345\214\226", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\230\210\345\200\274\345\210\206\345\211\262", nullptr));
        Btn_adaptive_threshold->setText(QCoreApplication::translate("MainWindow", "\345\212\250\346\200\201\351\230\210\345\200\274", nullptr));
        Lab_offset->setText(QCoreApplication::translate("MainWindow", "\345\201\217\347\247\273\345\200\274\357\274\232", nullptr));
        Lab_wsize->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\260\272\345\257\270\357\274\232", nullptr));
        Lab_threshold->setText(QCoreApplication::translate("MainWindow", "\351\230\210\345\200\274\357\274\232", nullptr));
        Btn_threshold->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\351\230\210\345\200\274", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\214\272\345\237\237\347\224\237\351\225\277", nullptr));
        Btn_floodfill->setText(QCoreApplication::translate("MainWindow", "\346\274\253\346\260\264\345\210\206\345\211\262", nullptr));
        Lab_threshold_rigion->setText(QCoreApplication::translate("MainWindow", "\351\230\210\345\200\274", nullptr));
        Lab_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Btn_rigion_group->setText(QCoreApplication::translate("MainWindow", "\345\214\272\345\237\237\347\224\237\351\225\277", nullptr));
        Lab_y->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\210\206\345\211\262", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\350\206\250\350\203\200\345\222\214\350\205\220\350\232\200", nullptr));
        Btn_Erode->setText(QCoreApplication::translate("MainWindow", "\350\205\220\350\232\200", nullptr));
        Lab_Kernel->setText(QCoreApplication::translate("MainWindow", "KernalSize", nullptr));
        Btn_Dilate->setText(QCoreApplication::translate("MainWindow", "\350\206\250\350\203\200", nullptr));
        Btn_Close->setText(QCoreApplication::translate("MainWindow", "\351\227\255\350\277\220\347\256\227", nullptr));
        Btn_Open->setText(QCoreApplication::translate("MainWindow", "\345\274\200\350\277\220\347\256\227", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("MainWindow", "\344\272\214\345\200\274\345\233\276\345\203\217\345\244\204\347\220\206", nullptr));
        radioHSV->setText(QCoreApplication::translate("MainWindow", "HSV", nullptr));
        radioXYZ->setText(QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        radioYCrCb->setText(QCoreApplication::translate("MainWindow", "YCrCb", nullptr));
        Btn_ConvertColor->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262\350\275\254\346\215\242", nullptr));
        Lab_img->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
