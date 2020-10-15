#include <iostream>
using namespace std;

int pow(int base, int power)
    {
        int result=1;

    for (int i=0;i<power;i++)
        {result*=base;}
    return result;
    }

int read_int()
{
    cout<<"please introduce a number: ";
    int n;
    cin>>n;

    return n;
}

int main ()
{
    int base=read_int();
    int power=read_int();

    int result=pow(base,power);
    cout<<"the result is: "<<endl;

    return 0;
}
