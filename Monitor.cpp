//
// Created by kvitadmin on 13.10.2021.
//

#include "Monitor.h"
#include <iostream>

void Monitor::showWindow() {
    int buf[50][80]= {0};
    for(int i =win.getBegin().y; i < (win.getWidth() + win.getBegin().y); ++i){
        for(int j =win.getBegin().x; j < (win.getLength() + win.getBegin().x); ++j){
            buf[i][j] = 1;
        }
    }
    for(int i = 0; i < width; ++i){
        for(int j =0; j < length; ++j){
            std::cout << buf[i][j];
        }
        std::cout << std::endl;
    }
}

bool Monitor::moveWindow(int vectorX, int vectorY){
    if(win.setBegin(win.getBegin().x + vectorX, win.getBegin().y + vectorY)) return true;
    else return false;
}

bool Monitor::resizeWindow(int newSizeLength, int newSizeWidth) {
    if(win.setSize(newSizeLength, newSizeWidth)) return true;
    else return false;
}

void Monitor::getWindowCoordinates() {
    std::cout << "New coordinates: X = " << win.getBegin().x << " Y = " << win.getBegin().y << std::endl;
}