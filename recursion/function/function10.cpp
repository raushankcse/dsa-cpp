#include<iostream>
using namespace std;

void fun10(int num)
{
    cout<<num<<endl;
    cout<<num<<" ";
}

void fun9(int num)
{
    cout<<num<<" ";
    fun10(num+1);
    cout<<num<<" ";
}

void fun8(int num)
{
    cout<<num<<" ";
    fun9(num+1);
    cout<<num<<" ";
}

void fun7(int num)
{
    cout<<num<<" ";
    fun8(num + 1);
    cout<<num<<" ";
}

void fun6(int num)
{
    cout<<num<<" ";
    fun7(num+1);
    cout<<num<<" ";
}
void fun5(int num)
{
    cout<<num<<" ";
    fun6(num+1);
    cout<<num<<" ";
}


void fun4(int num)
{
    cout<<num<<" ";
    fun5(num+1);
    cout<<num<<" ";
}

void fun3(int num)
{
    cout<<num<<" ";
    fun4(num+1);
    cout<<num<<" ";

}

void fun2(int num)
{
    cout<<num<<" ";
    fun3(num+1);
    cout<<num<<" ";
}

void fun1(int num)
{
    cout<<num<<" ";
    fun2(num+1);
    cout<<num<<" ";
}

void print(int num)
{
    fun1(num);
}

int main()
{
    print(1);
}