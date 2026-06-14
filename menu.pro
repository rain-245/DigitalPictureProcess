QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
# ===================== OpenCV 配置 =====================
# 这里改成你自己的 OpenCV 解压路径！！！
OPENCV_PATH = D:\OpenCV-mingw

# 头文件
INCLUDEPATH += $$OPENCV_PATH/include
INCLUDEPATH += $$OPENCV_PATH/include/opencv2

# 库文件路径 + 链接库
LIBS += -L$$OPENCV_PATH/x64/mingw/lib
LIBS += -lopencv_core455
LIBS += -lopencv_imgcodecs455
LIBS += -lopencv_imgproc455
LIBS += -lopencv_highgui455
LIBS += -lopencv_videoio455
