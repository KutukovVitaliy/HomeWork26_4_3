//
// Created by kvitadmin on 13.10.2021.
//

#ifndef HOMEWORK26_4_3_WINDOW_H
#define HOMEWORK26_4_3_WINDOW_H


class Window {
    struct Begin{;
        int y = 0;
        int x = 0;
    } begin;
    int length = 10;
    int width = 10;
    int maxLength = 80;
    int maxWidth = 50;
public:
    bool setBegin(int newX, int newY);
    bool setSize(int newLength, int newWidth);
    bool setMaxParameters(int newMaxLength, int newMaxWidth);
    int getLength();
    int getWidth();
    Begin getBegin();
};


#endif //HOMEWORK26_4_3_WINDOW_H
