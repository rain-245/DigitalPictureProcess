# 数字图像处理课程设计
**Digital Image Processing Course Project**

---

## 项目简介
本项目是基于 **Qt 6 + OpenCV 4.x** 开发的桌面图像处理程序，集成了课程所学的经典算法，提供图形化交互界面，支持从基础操作到高级分割的多种图像处理功能，是数字图像处理课程设计/期末项目的完整实现。

---

## ✨ 核心功能
| 模块 | 功能列表 |
|------|----------|
| **图像基础操作** | 打开、保存、灰度化、显示图像 |
| **边缘检测与锐化** | Sobel算子（水平/垂直）、标准Laplace算子、自定义Laplace锐化模板 `[0 -1 0; -1 5 -1; 0 -1 0]` |
| **图像分割** | 固定阈值分割、动态（自适应）阈值分割、区域生长、漫水分割（FloodFill） |
| **形态学运算** | 腐蚀、膨胀、开运算、闭运算（支持自定义结构元素尺寸） |
| **颜色空间转换** | BGR → HSV / XYZ / YCrCb |

---

## 开发环境
- **操作系统**：Windows 10 / 11
- **开发工具**：Qt Creator
- **Qt 版本**：Qt 6.x（MinGW 编译器）
- **OpenCV 版本**：OpenCV 4.x
- **开发语言**：C++

---

## 项目结构
```
DigitalPictureProcess/
├── main.cpp                  # 程序入口
├── mainwindow.h / .cpp      # 主窗口业务逻辑
├── mainwindow.ui             # Qt 界面设计文件
├── menu.pro                  # Qt 项目配置文件
├── .gitignore                # Git 忽略文件配置
└── README.md                 # 项目说明文档（本文件）
```

---

## 编译与运行
### 1. 环境配置
1.  安装 Qt 6.x（带 MinGW 编译器）
2.  配置 OpenCV 库：
    - 将 OpenCV 的 `include` 目录添加到 Qt 项目的包含路径
    - 将 OpenCV 的 `lib` 目录添加到库路径
    - 链接 OpenCV 动态库（如 `opencv_world4xx.lib`）

### 2. 构建项目
```bash
# 克隆仓库
git clone https://github.com/rain-245/DigitalPictureProcess.git
cd DigitalPictureProcess

# 用 Qt Creator 打开 menu.pro 并构建
```

---

## 使用说明
1.  **加载图像**：点击界面上的「打开图像」按钮，选择本地支持的图像文件（`.jpg` `.png` `.bmp` 等）。
2.  **选择功能模块**：
    - 边缘检测：选择 Sobel/Laplace/自定义锐化模板，点击执行查看效果。
    - 图像分割：输入阈值/种子点坐标，执行对应分割算法。
    - 形态学运算：设置结构元素尺寸，选择腐蚀/膨胀/开/闭运算。
    - 颜色空间转换：选择目标颜色空间，一键完成转换。
3.  **保存结果**：点击「保存图像」按钮，将处理后的图像导出到本地。

---

## 运行效果示例
> 以下为功能效果示例，可替换为你的实际截图：

### 1. 边缘检测
- Sobel 算子：水平/垂直方向边缘提取
- Laplace 算子：全方向边缘增强

### 2. 形态学运算
- 开运算：去除图像外部噪点
- 闭运算：填充目标内部孔洞

### 3. 图像分割
- 区域生长：基于种子点的连通区域分割
- 动态阈值：适配光照不均场景的自适应分割

---

## 作者信息
- 作者：rain-245
- 项目仓库：https://github.com/rain-245/DigitalPictureProcess
