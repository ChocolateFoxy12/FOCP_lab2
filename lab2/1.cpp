#include <iostream>

bool is_prime(int number)
{
    for (int i=2;i<number;i++)
    {if (number%i==0){return false;}}
    return true;
}

using namespace std;
main ()
{
    //1 read a number from console
    //2 figure out if the number is prime or not
    //3 print the result to the console

    int number;

    cout<<"please introduce the number: ";
    cin>>number; cout<<endl;


        if (is_prime(number)){cout<<"the number's prime :>"<<endl;}
        else {cout<<"the number's not prime ;/"<<endl;}


    return 0;
}
