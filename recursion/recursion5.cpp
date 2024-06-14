#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int cnt=0;
void print(){
  if(cnt==3) return;

  cout<<cnt<<endl;
  cnt++;
  print();
}

int main(){
  // #ifndef ONLINE_JUDGE
  // fropen("input.txt", "r", stdin);
  // fropen("output.txt", "w", stdout);
  // #endif

  print();

  return 0;
}