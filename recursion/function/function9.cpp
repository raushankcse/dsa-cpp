#include<iostream>
using namespace std;

void factorial(int number)
{
    int factorialNum=1;
    for(int i=1;i<=number;i++)
    {
        factorialNum*=i;
    }
    cout<<factorialNum<<endl;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    factorial(number);
}