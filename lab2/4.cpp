#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream file;
    file.open("new_file.txt");
    file<<"this is the first line!\n";
    file<<"this is the second line!\n";
    file<<"this is the third line!\n";
    file<<"this is the fourth line!\n";
    file<<"this is the fith line!\n";
    file<<"this is the sixth line!\n";
    file.close();

    ifstream new_file("new_file.txt");
    if (new_file.is_open())
    {
        string line;
        while(getline(new_file, line)){cout<<line;}

        new_file.close();
    }
    else {cout<<"there was a problem opening the file";}



    return 0;
}
