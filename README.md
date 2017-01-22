---
title: Visao
description: A simple way to explain intrinsic and extrinsic camera parameters using Qt and OpenGL
author: Dennis G. Romero
created:  2011 Mar 15
modified: 2014 Apr 16

---

Visao
=========

## A simple way to explain intrinsic and extrinsic camera parameters using Qt and OpenGL

### VISAO:

[![visao screenshot](https://github.com/dromero12/visao/raw/master/images/camera.png)]

#### Requirements:

* Qt4
* OpenGL (-lGL -lGLU -lglut)

#### Compile: 

make

(do not use "make clean". Currently the ui_vision.h file is not totally generated from visao.ui, so you could lose some entries in ui_vision.h. Until solve the problem just remove *.o and moc* files before compiling again)

#### Additional info:

The mouse can be used on the viewports to move the camera

#### Contributing

The program need two main improvements:

* Include GlWidgets in qtCreator in order to put them in design time
* The GUI should be builded again from qtCreator (Signals and Slot were manually included)

#### Contact:

Dennis G. Romero
