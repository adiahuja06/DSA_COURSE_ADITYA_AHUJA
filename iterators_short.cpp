#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //we have seen in the previous iterators that it is long syntax and complex so we can reduce our time there

  //there two features provided c++11 version and all the version after that has this features
  //The two features are range based loop and auto keyword

  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  //now we have taken the input

  for(int value:v) //so all the values will be copied inside the value variable and data type we have used is int as vector contains int data
  {
    cout<<value<<" ";
  }
  cout<<endl;

  //the above thing is pass by value and not by refrence we can prove that by below

  for(int value:v)
  {
    value++;
  }
  for(int value:v)
  {
    cout<<value<<" ";
  }
  cout<<endl;

  //now below is codre for pass by refrence
  for(int &value:v)
  {
     value++;
  }
  for(int &value:v)
  {
    cout<<value<<" ";
  }
   cout<<endl;
  //similarly we can use these range based loop in pair of vectors also
  cout<<"How many pair of vectors you need"<<endl;
  vector<pair<int,int>> r;
  int m;
  cin>>m;
  for(int i=0;i<m;i++)
  {
    int a,b;
    cin>>a>>b;
    r.push_back({a,b});
  }

  for(pair<int,int> &gh:r)
  {
    cout<<gh.first<<" "<<gh.second<<endl;
  }

  //auto keyword
  //Auto keyword automatically understands the data type

  auto a=1;
  cout<<a<<endl; //so here it automatically understands the data type of the variable a

  vector<pair<int,int>> x;
  int n;//number of rows and columns
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a,b;
      cin>>a>>b;
      x.push_back({a,b});
  }

  for(auto val:x) //auto ->pair<int,int> jo value vector ke andar hai aur hame iterate karni hai and this is copy by value
  {
     cout<<val.first<<" "<<val.second<<endl;
  }
  return 0;
}
