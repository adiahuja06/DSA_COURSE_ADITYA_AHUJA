#include<iostream>
#include<bits/stdc++.h> //this is a universal header file like import jave util*
using namespace std;
/*
Iterators are nothing but they help us to iterate over the containers
We have seen vectors and that can be accesed by the index but still there are other containers such as map,set which cannot be accesed using index
*/
int main()
{
  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  //now suppose we want to iterate using the Iterators
  //iterators are kind of replacement of pointers
  //before moving to iterator let us understand .begin() and .end() functions
  cout<<*(v.begin())<<endl; //here v.begin() is a pointer that is pointing to first value of vector
  cout<<*(v.end())<<endl; //this will give us a random value
  cout<<*(v.end()-1)<<endl; //this proves that v.end() points to next to last element

  //syntax of iterator
  vector<int> ::iterator it=v.begin(); //kispe point karwa rahe base address pe
  while(it!=v.end())
  {
    cout<<*(it)<<" ";
    it++; //this will increment the iterator to move to next address
  }
   cout<<endl;
  //for loop syntax
  vector<int> g(5,10);
  vector<int> ::iterator pt;
  for(pt=g.begin();pt!=g.end();pt=pt+1)
  {
    cout<<*(pt)<<" ";
  }
  //so in vectors it++ and it=it+1 both will work but it+1 wont work for maps as maps are discontinous in nature and stored at random locations
  //refer rough.cpp to show an example of map how it shows error on it++ and not on it+1
cout<<endl;
  //now let us look how can we iterate over the vector of pair
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

  //the above is ready and now we need to print this
  vector<pair<int,int>> ::iterator ht;
  for(ht=r.begin();ht!=r.end();ht++)
  {
    //cout<<(*ht).first<<" "<<(*ht).second<<endl;
    //the other way to print the above
    cout<<ht->first<<" "<<ht->second<<endl; // you can make analogy using "this operator"
  }

   


}
