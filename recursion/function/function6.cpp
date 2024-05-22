#include<iostream>
using namespace std;

void eligible(int age)
{
    if(age>=18)
    {
        cout<<"You are eligible to vote";
    }
    else   
        cout<<"you are less than 18/ not eligible to vote";
}


int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    eligible(age);
}