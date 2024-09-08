@echo off
SetLocal EnableDelayedExpansion
(set QT_VERSION=5.13.2)
(set QT_VER=5.13)
(set QT_VERSION_TAG=5132)
(set QT_INSTALL_DOCS=C:/Qt/Qt5.13.2/Docs/Qt-5.13.2)
(set BUILDDIR=C:/Data/hust_lesson/Four/SysDesign/qtmqtt-5.13.2/src/mqtt)
C:\Qt\Qt5.13.2\5.13.2\mingw73_32\bin\qdoc.exe %*
EndLocal
