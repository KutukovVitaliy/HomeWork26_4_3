//
// Created by kvitadmin on 13.10.2021.
//

#include "Window.h"
#include <iostream>

bool Window::setBegin(int newX, int newY){
    if(newX < 0 || newY < 0 || newX > maxLength || newY > maxWidth) return false;
    if((maxLength >= (newX + length)) && (maxWidth >= (newY + width))){
        begin.x = newX;
        begin.y = newY;
        return true;
    }
    return false;
}

bool Window::setSize(int newLength, int newWidth){
    if(newLength <= 0 || newWidth <= 0 || newLength > maxLength || newWidth > maxWidth) return false;
    if(maxLength >= (begin.x + newLength) && maxWidth >= (begin.y + newWidth)){
        length = newLength;
        width = newWidth;
        return true;
    }
    return false;
}

bool Window::setMaxParameters(int newMaxLength, int newMaxWidth){
    if(newMaxLength >= (begin.x +length) && newMaxWidth >= (begin.y+width)){
        maxLength = newMaxLength;
        maxWidth = newMaxWidth;
        return true;
    }
    return false;
}

Window::Begin Window::getBegin() {
    return begin;
}

int Window::getLength() {
    return  length;
}

int Window::getWidth() {
    return width;
}