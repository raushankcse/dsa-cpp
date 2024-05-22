#include<iostream>

using namespace std;

void prime(int n)
{
    bool flag = false;
    if(n<2) cout<<"you enter less than 2, minimum prime number is 2";
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout<<"not a prime number";
    }else{
        cout<<"prime number";
    }
}


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);
}