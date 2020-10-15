#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int read_int()
{
    cout<<"please introduce a number: ";
    int n;
    cin>>n;

    return n;
}

int main()
{
    cout<<"how many numbers you wanna write?"<<endl;

    int total_numbers=read_int();

    vector<int> values;
    for(int i=0;i<total_numbers;i++)
        {
         int tmp=read_int();
         values.push_back(tmp);
        }

    ofstream file;
    file.open("values.txt");
    for(int i=0;i<total_numbers;i++){file<<values[i];}
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
