#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("new_file.txt");

    file<<"writing to file!";

    file.close();

    return 0;
}
