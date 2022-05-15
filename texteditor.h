#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;
#include"texteditor.cpp"

void loadFile(vector<string>& text, fstream&file);
void openFile();
void counting_repeated_word();
void convertToLower(vector<string>&text);
void Upper(vector<string>&text);
void capitalize();
void getChoice(string& str);
void save_file();
#endif

