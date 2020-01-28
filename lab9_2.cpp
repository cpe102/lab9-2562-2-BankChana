#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream source;
    ofstream x;
    source.open("C:\\Users\\LENOVO\\Desktop\\VS Code\\lab9\\lab9-2562-2-BankChana\\cheerbook.txt");
    string textline;
    bool havetext;
    havetext = getline(source,textline);
    x.open("cheerbook_copy.txt");
    x << "-------------------- SOTUS ---------------------" << endl;
    while (havetext)
    {
        x << textline << endl;
        havetext = getline(source,textline);
    }
    x << "-------------------- SOTUS ---------------------" << endl;
    source.close();
    x.close();
    return 0;
}