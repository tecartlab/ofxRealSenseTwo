# RealSense SDK addon for openframeworks 0.11.x

Currently supported:
* RGB Streaming
* Depth Streaming (Raw Depth and Depth as Color)
* Point Cloud

## Cameras

Tested:
* Intel® RealSense™ Depth Cameras D435

Untested:
* Intel® RealSense™ Depth Cameras D415
* Intel® RealSense™ Depth Modules D400, D410, D420, D430
* Intel® RealSense™ Vision Processor D4m
* Intel® RealSense™ Tracking Module (limited support)

## Supported Platforms

Tested:
* Windows 10 (Build 1803 or later)
* OSX 10.15.3

Untested:
* Ubuntu 16.04/18.04 LTS (Linux Kernels 4.4, 4.8 ,4.10, 4.13 and 4.15)
* Windows 8.1 *

****hardware frame synchronization is not available for the D400 series

## Dependecies

* Openframeworks release [0.11.0](http://openframeworks.cc/download).

### Windows
* Microsoft Visual Studio Community edition 2017 https://visualstudio.microsoft.com/de/downloads/

### OSX
* XCode 11.3

### For the examples project:
* Openframeworks addon ofxGui


## Installation

* Clone this repo into the \<openframeworksfolder>/addons/ folder.
* BE AWARE: This repo is [using LFS](https://www.atlassian.com/git/tutorials/git-lfs) for its binary libraries..

### Instructions

Use project generator to create the visual studio and XCode project files by pressing 'import' and navigate to this addons example folder. press 'update'.

#### Windows exe

open visual studio 17 and build the app.

copy

* /libs/IntelRealSense_2.xx.x/lib/vs/x64/Intel.Realsense.dll
* /libs/IntelRealSense_2.xx.x/lib/vs/x64/realsense2.dll

into the bin folder before you run the built exe directly.

#### OSX app

-- to be added

## credits

Martin Froehlich

this addon is based on https://github.com/SethGibson/ofxRSSDK, however it has been heavily altered on order to make it compatible with the current RSSDK.

contains the relevant libraries/includes from Intel® RealSense™ SDK 2.0 (build 2.33.1) https://github.com/IntelRealSense/librealsense
