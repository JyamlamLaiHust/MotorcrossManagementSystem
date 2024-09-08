@echo off
SetLocal EnableDelayedExpansion
(set PATH=C:\Users\29690\Downloads\Compressed\qtmqtt-5.13.2\bin;C:\Qt\Qt5.13.2\5.13.2\mingw73_32\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=C:\Qt\Qt5.13.2\5.13.2\mingw73_32\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=C:\Qt\Qt5.13.2\5.13.2\mingw73_32\plugins
)
%*
EndLocal
