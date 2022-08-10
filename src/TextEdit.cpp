#include <iostream>
#include <string>
#include <fstream>
#include "TextEdit.h"
 using namespace std;

 void start1(void)
 {
     ifstream infile;
     infile.open("options.txt");

     if(!infile)
     {
         printf("File Not Found\n");
         printf("Creating File...\n");
         ofstream { "options.txt" };
     }
     else{
         cout << "File Found Normal Start\n";
     }

         string fov, fps, dead;

         infile >> dead >> fov >> dead >> fps;

         cout << "Fov: " << fov << endl;
         cout << "Fps: " << fps << endl;

         infile.close();
 }

float FFFOV(void)
{
  ifstream infile;
  infile.open("options.txt");

  string dead;
  float fov;

  infile >> dead >> fov;
  infile.close();
  return fov;
}

int FFFPS(void)
{
  ifstream infile;
  infile.open("options.txt");

  string dead;
  int fps;
  infile >> dead >> dead >> dead >> fps;

  infile.close();
  return fps;
}
