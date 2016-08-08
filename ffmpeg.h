//
// Created by Stephan on 08.08.2016.
//

#ifndef PRIVATESHOW_FFMPEG_H
#define PRIVATESHOW_FFMPEG_H
#include <iostream>

using namespace std;



class FFMPEGFactory{
private:
public:
    void generateThumbs(string timestamp, string ffmpeg_path, string sFilename, string sDirectory,
                        string baseFileName, int amount);
};

#endif //PRIVATESHOW_FFMPEG_H
