// print names n times using recursion

// #include<iostream>
// using namespace std;

// void print(string name, int n){
//   if(n==0) return;
//   cout<<name<<endl;

//   return print(name, n-1);
// }


// int main(){

//   string name="raushan";
//   int n;
//   cout<<"enter n: ";
//   cin>>n;
//   print(name, n);
//   return 0;
// }



#include<iostream>
using namespace std;

void print(int i, int n)
{
  if(i>n) return;
  cout<<"Raushan"<<endl;
  print(i+1, n);
}

int main()
{

  int n;
  cout<<"enter n: ";
  cin>>n;
  print(1,n);
  return 0;
}