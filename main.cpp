
#include <io.h>
#include <vector>
#include <sstream>

#include "ffmpeg.h"
#include "filesystemWin.h"

using namespace std;

vector<string> split(string input, char delimiter);
string getFileNameWithoutExtension(vector<string> input);
string getFileNameWithExtension(vector<string> input);

vector<string> open(string path = ".");

int main() {
    string input = "StarWars.mp4";
    string timestamp = "00:00:14.435";
    string ffmpeg_path = ".\\FFMPEG\\bin\\";
    string baseFileName = "thumb";
    FFMPEGFactory ff = FFMPEGFactory();
    IOHandler io = IOHandler();
    int amount = 5;

    vector<string> filename = split(input, '.');
    string sFilename = getFileNameWithExtension(filename);
    string sDirectory = getFileNameWithoutExtension(filename).c_str();


    io.createDirectory(sDirectory);
    ff.generateThumbs(timestamp, ffmpeg_path, input, sDirectory, baseFileName, amount);


   // system( ("ffprobe.exe "+filename+" -show_entries format=duration -v quiet -of csv='p=0'").c_str() );
    return 0;
}

vector<string> split(string input, char delimiter){
    istringstream ss(input);
    string token;
    vector<string> delimited;
    while(std::getline(ss, token, delimiter)) {
        delimited.push_back(token);
    }
    return delimited;
}

string getFileNameWithoutExtension(vector<string> input){
    string filename = "";

    for(unsigned int i = 0; i < input.size() - 1; i++)
    {
        filename += input[i];
    }
    return filename;
}

string getFileNameWithExtension(vector<string> input){
    string filename = "";

    for(unsigned int i = 0; i < input.size(); i++)
    {
        filename += input[i];
    }
    return filename;
}



vector<string> open(string path = ".") {
    DIR* dir;
    dirent* pdir;
    vector<std::string> files;
    dir = opendir(path.c_str());
    while (pdir = readdir(dir)) {
        files.push_back(pdir->d_name);
    }
    return files;
}