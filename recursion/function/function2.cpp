#include<iostream>
using namespace std;

int product()
{
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    return x*y;
}

int main()
{
    cout<<product();
    return 0;
}