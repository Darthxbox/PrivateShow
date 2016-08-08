//
// Created by Stephan on 08.08.2016.
//

#ifndef PRIVATESHOW_IO_H
#define PRIVATESHOW_IO_H


#include <windows.h>
#include <Lmcons.h>
#include <dirent.h>
#include <iostream>
#include <vector>


using namespace std;

class IOHandler{
private:
public:
    void createDirectory(string title);
    string getUsername();
    string setRoamingDirectory();
};
#endif //PRIVATESHOW_IO_H
