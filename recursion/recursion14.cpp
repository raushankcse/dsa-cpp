
#include<bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
  if(ind == n){
    if(s==sum){
      for(auto it: ds) cout<<it<<" ";
      cout<<endl;
      return true;
    }
    else return false;
  }

  ds.push_back(arr[ind]);
  s += arr[ind];

  if(printS(ind +1, ds, s, sum, arr, n) == true){
    return true;
  }

  s -= arr[ind];
  ds.pop_back();
  if(printS(ind+1, ds, s, sum, arr, n) == true) return true;

  return false;
}



// void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
//   if(ind == n){
//     if(s == sum){

//       for(auto it: ds) cout<<it<<" ";
//       cout<<endl;
//     }
//     return ;
//   }
//   ds.push_back(arr[ind]);
//   s+= arr[ind];

//   printS(ind+1, ds, s, sum, arr, n);

//   s-= arr[ind];
//   ds.pop_back();

//   printS(ind+1, ds, s, sum, arr, n);
// }


int main(){
  int arr[] = {1,2,1};
  int n= 3;
  int sum = 2;
  vector<int> ds;
  printS(0, ds, 0, sum, arr, n);
  return 0;
}