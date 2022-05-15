#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H
#include "texteditor.h"
#include <cstring>
#include <cctype>
#include <iostream>
# include<fstream>
#include <cstring>
#include<vector>
#include<cctype>
using namespace std;
void openFile()
{
    fstream dataFile;
    char name[81];
    cout<<"Plzz enter file name: ";
    cin>> name;
    dataFile.open(name);
    if (dataFile.fail())
    {
        cout<<" Sorry bro i can't open it. \n";
    }
    else
    {
        cout<<"Plzz wait until it open\n";
    }
    dataFile.close();
}

void loadFile(vector<string>& text, fstream&file)
{
    char filename[100],line[100];
    cout<<"Plzz enter ur file name: ";
    cin>>filename;
    file.open(filename);

    if(file)
    {
        cout<<" File was opened seccessfully \n";
        while (!file.eof())
        {
            file.getline(line, 100, '\n');
            text.push_back(string(line));
        }

    }
    else
    {
        cout<<"This file can't be opened";
        cout<<"A new fill will be created";
    }
}

void Lower(vector<string>&text)
{
    fstream file;
    file.open("date.txt",ios::in);

    char ch ;
    string r;
    int c = 0;

    while(!file.eof())
    {
        file.get(ch);


        r += tolower(ch);
    }
    file.close();
    file.open("date.txt",ios::out);

    file<<r;
    file.close();
}
void Upper(vector<string>&text)
{
    fstream file;
    file.open("date.txt",ios::in);
    char ch;
    string r;
    int c = 0;

    while(!file.eof())
    {
        file.get(ch);


        r += toupper(ch);
     }
    file.close();
    file.open("date.txt",ios::out);

    file<<r;
    file.close();

}
void counting_repeated_word() {
    fstream myfile;
    char name[100];
    string ch1, c;
    int count = 0;
    cout << "enter the name of the file: ";
    cin >> name;
    cout << "enter the word you search for: ";
    cin >> ch1;
    myfile.open(name, ios::in);
    while (getline(myfile, c)) {
        if (c.find(ch1) != string::npos)
            count++;
    }
}
    void capitalize()
{
    string r;
    char ch, m;
    bool txt = false;
    int c = 0;
    fstream file;
    file.open("date.txt");
    while(!file.eof())
    {
        file.get(ch);
        ch = tolower(ch);
        if(txt == true)
        {
            ch = toupper(ch);
            txt = false;
        }
        if(c == 0)
        {
            c = 1;
            ch = toupper(ch);
        }
        if( ch ==' ' || ch == '\n' )
        {
                txt = true;
        }
            r += ch;
    }
    file.close();
    file.open("date.txt");
    file<<r;
    file.close();
}

    void save_file() 
    {
        int choice;
        cout << "1/save the edits in the same file" << endl << "2/save the edits in new file";
        cin >> choice;
        if (choice == 1)
            cout << "the edits saved sucessfully";
        else if (choice == 2) {
            char name2[100], name[100], c;
            cout << "enter current file";
            cin >> name;
            cout << "enter new file: ";
            cin >> name2;
            ifstream old_file;
            ofstream new_file;
            old_file.open(name, ios::in);
            new_file.open(name2, ios::out);
            while (old_file.get(c)) {
                new_file.put(c);
                old_file.close();
                new_file.close();
            }
            cout << "data saved";
        }
    }
#endif

