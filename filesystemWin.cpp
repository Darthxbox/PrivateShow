//
// Created by Stephan on 08.08.2016.
//

#include "filesystemWin.h"

void IOHandler::createDirectory(string title){
    mkdir(title.c_str());
}

string IOHandler::getUsername() {
    char username[UNLEN+1];
    DWORD username_len = UNLEN+1;
    GetUserName(username, &username_len);
    return username;
}

string IOHandler::setRoamingDirectory() {
    string path = "C:\\Users\\"+getUsername()+"\\AppData\\Roaming\\PrivateShow";
    createDirectory(path);
    return path;
}