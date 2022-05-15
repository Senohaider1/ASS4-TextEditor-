#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <vector>
#include "texteditor.h"
#include "texteditor.cpp"
using namespace std;

int main()
{
    int_least64_t choice;    
    cout<<"what do u want to do?\n 11)count repeated word.\n 12)convert words to upper.\n 13)convert words to lower.\n 14)capitalize. \n 15)save.";
    cin>>choice;
    while (true)
    {
        switch (choice) {
            case 11 : counting_repeated_word();
            
            case 12 : Upper(vector<string>&text);
                        
            case 13 : Lower(vector<string>&text);
                        
            case 14 : capitalize();

            case 15 :  save_file(); 
                         
        }
    }
}