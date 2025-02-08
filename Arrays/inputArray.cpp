#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> array;
  cout<<"enter no of elements: ";
  int a;
  cin>> a;
  cout<<endl;
  cout<<"enter all elements ";
  for(int i = 0; i<a; i++)  {
  int temp ;
  cin>> temp;
  array.push_back(temp);
  }
  cout<< endl;
  cout<<"all elements are : ";
  for(int val : array) {
    cout<<val<<" ";
  }
  return 0;
