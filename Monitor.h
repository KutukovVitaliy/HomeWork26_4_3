//
// Created by kvitadmin on 13.10.2021.
//

#ifndef HOMEWORK26_4_3_MONITOR_H
#define HOMEWORK26_4_3_MONITOR_H
#include "Window.h"

class Monitor {
    Window win;
    int length = 80;
    int width = 50;
public:
    void showWindow();
    bool moveWindow(int vectorX, int vectorY);
    bool resizeWindow(int newSizeLength, int newSizeWidth);
    void getWindowCoordinates();
};


#endif //HOMEWORK26_4_3_MONITOR_H
