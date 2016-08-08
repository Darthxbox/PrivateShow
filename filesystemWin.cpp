//
// Created by Stephan on 08.08.2016.
//

#include "filesystemWin.h"

void IOHandler::createDirectory(string title){
    mkdir(title.c_str());
}