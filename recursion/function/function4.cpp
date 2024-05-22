#include<iostream>
using namespace std;


void minNumber(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
        {
            cout<<"smallest number: "<<a;
        }
        else{
            cout<<"smallest number: "<<c;
        }
    }else{
        if(b<c){
            cout<<"smallest number: "<<b;
        }else {
            cout<<"smallest number: "<<c;
        }
    }
}

void maxNumber(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            cout<<"greatest number: "<<a;
        else
            cout<<"greatest number: "<<c;
    }else{
        if(b>c)
        {
            cout<<"greatest number: "<<b;
        }else{
            cout<<"greatest number: "<<c;
        }
    }
}


int main()
{
    int a, b, c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    minNumber(a,b,c);
    cout<<endl;
    maxNumber(a,b,c);
}