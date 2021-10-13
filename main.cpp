#include <iostream>
#include "Monitor.h"

int main() {
    Monitor* mon = new Monitor;
    std::string command;
    int coordX, coordY, newSizeLength, newSizeWidth;
    do{
        std::cout << "Enter the command:";
        std::cin >> command;
        if(command == "move"){
            std::cout << "Input X coordinate of moving vector: ";
            std::cin >> coordX;
            std::cout << "Input Y coordinate of moving vector: ";
            std::cin >> coordY;
            if(mon->moveWindow(coordX, coordY)){
                mon->getWindowCoordinates();
            }
            else std::cout << "Bad vector coordinates!" << std::endl;
        }
        else if(command == "resize"){
            std::cout << "Input new window's length : ";
            std::cin >> newSizeLength;
            std::cout << "Input new window's width: ";
            std::cin >> newSizeWidth;
            if(mon->resizeWindow(newSizeLength, newSizeWidth)){
                std::cout << "New window's length = " << newSizeLength << " width = " << newSizeWidth << std::endl;
            }
            else std::cout << "Bad length or width!" << std::endl;
        }
        else if(command == "close"){
            std::cout << "Monitor is switched off!" << std::endl;
        }
        else if(command == "display"){
            mon->showWindow();
        }
        else std::cout << "Bad command! Try again!" << std::endl;
    }while(command != "close");

    return 0;
}
