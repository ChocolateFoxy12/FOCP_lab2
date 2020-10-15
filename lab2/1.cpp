#include <iostream>

using namespace std;
main ()
{
    //read a number from console
    //figure out if the number is prime or not
    //print the result to the console

    int number;

    cout<<"please introduce the number: ";
    cin>>number; cout<<endl;

    for (int i=2;i<number;i++)
    {
        if (number%i==0){cout<<"the number's not prime ;/"<<endl;}
        return 0;
    }
    cout<<"the number's  prime :>"<<endl;

    return 0;
}
