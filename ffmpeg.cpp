//
// Created by Stephan on 08.08.2016.
//
#include "ffmpeg.h"



void FFMPEGFactory::generateThumbs(string timestamp, string ffmpeg_path, string sFilename, string sDirectory, string baseFileName, int amount)
{
    for(int i = 0; i < amount; i++)
    {
        timestamp = "00:" + to_string(i) + ":30.000";

        system((ffmpeg_path +"ffmpeg.exe -i "+sFilename+" -ss "+timestamp+" -vframes 1 "+sDirectory+"\\"+baseFileName+to_string(i)+".png").c_str());
    }
}