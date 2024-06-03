#include<iostream>
#include<vector> //you need to include this as a header file
#include<string>
using namespace std;

//memory allocation is continous as array
void printvec(vector<int> v /*pass by value */)
{
    for(int j=0;j<v.size();j++)
    {
      cout<<v[j]<<" ";
    }
    cout<<endl;
}
int main()
{
  vector<int> v; //till the time we dont give any size it will have 0 size
  cout<<v.size()<<endl; //so we can see that the size is 0 , we can increase and decrease it size anytime

  //let us try to add some elements in vector and print it
  vector<int> p;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     p.push_back(x); //insert the element at the last as the name suggests and has O(1) time complexity for insertion
     cout<<"The size of vector is-:"<<p.size()<<endl; //this will show us the increasing size
     printvec(p);
  }
  cout<<endl;
  //once we have taken the input we can need to print it
  for(int i=0;i<p.size()/* since this will represent current size of array*/;i++)
  {
     cout<<p[i]<<" ";
  }
  cout<<endl<<endl;
  cout<<"The fixed size vector value are as follows:"<<endl;

  //fixed size vector
  vector<int> g(10); //so a 10 size vector will be made with all values initialized as 0
  printvec(g); //lets print and check
  g.push_back(3);
  cout<<"The fixed size vector values after insertion of 3 are as follows:"<<endl;
  printvec(g);
  cout<<endl;

  vector<int> h(10,7); //in this 10 values will be initialized and all of them will be 7
  printvec(h);

  //pop_back->this function is used to remove the element from the last of the vector

  int k=0;
  while(!h.empty())
  {
    cout<<"Value we are going to pop out of array:"<<h[k]<<endl;
    h.pop_back();
    cout<<"The size of vector is now:"<<h.size()<<endl;
    k++;
  }

cout<<endl<<endl;

  //copying value of vector

  vector<int> d=p; //this operation will have a time complexity iof O(n) the elements are copied one by one
  for(int i=0;i<d.size();i++)
  {
    cout<<"The value in vector d copied from p is:"<<d[i]<<endl;
  }

  //suppoose now i want to change value at first position
  d[0]=22;

  //will the above statement bring any change in value of p[0] also?

  //Since it is pass by refrence so there will be no change in p[0]

  vector<int> &t=p; //now this is pass by refrence so even if i make change in t then it will ve reflected in p

   //before change value of p
   for(int e=0;e<p.size();e++)
   {
     cout<<p[e]<<" ";
   }
   cout<<endl;
  t[2]=45;

   //after change the value of p
  for(int e=0;e<p.size();e++)
  {
    cout<<p[e]<<" ";
  }
  cout<<endl;

//here we will see how can we add string to the vector
vector<string> r;
int s;
cin>>s;
for(int i=0;i<s;i++)
{
  string x;
  cin>>x;
  r.push_back(x);
}

for(int q=0;q<r.size();q++)
{
  cout<<r[q]<<" ";
}

}
