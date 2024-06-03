#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<pair<int,int>> &v) //this function will help us to iterate over the nested vector depending on the situation
{
   for(int i=0;i<v.size();i++)
   {
     cout<<v[i].first<<" "<<v[i].second<<endl; //this will help us to print the first and second value of the pair
   }
   cout<<endl;
}

int main()
{
  //1) Vector of pair->initialization
  vector<pair<int,int>> v={{1,3},{2,4},{5,7},{6,8}};
  cout<<v.size()<<endl; //this should come out to be 4
  printvec(v);

  //1)Vector of pair->user input
  vector<pair<int,int>> g;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;
    g.push_back({a,b}); //alternatively you can also write g.push_back(make_pair(a,b))
  }
  printvec(g);


  //2) Array of Vectors

  int N;
  cout<<"Enter the size of the array:"<<endl;
  cin>>N; //this is the size of array
  vector<int> a[N];
  for(int i=0;i<N;i++)
  {
      int n; //this is the size of vector
      cout<<"Enter the size of the vector:"<<endl;
      cin>>n;
      for(int j=0;j<n;j++)
      {
        int x;
        cout<<"Enter the value to be enetered in "<<(j+1)<<"vector"<<endl;
        cin>>x;
          a[i].push_back(x); //mujhe ith position par puch back karna hai;
      }
  }

  for(int k=0;k<N/* Here size won't work as we have array */;k++)
  {
     for(int j=0;j<a[k].size();j++)
     {
       cout<<a[k][j]<<" ";
     }
     cout<<endl;
  }

  //We dont use array of vectors much as array is always static in nature and also here the number of rows is fixed

  //3)Vector of vector ->use instead of 2 d array
  int N;
  cout<<"Enter the size of the array:"<<endl;
  cin>>N; //this is the number of rows you need in a vector
  vector<vector<int>> v;

  //another way of declaring a fixed vector of vector
  vector<vector<int>> vec( n , vector<int> (m)); //this is a n*m size
  for(int i=0;i<N;i++)
  {
      int n; //this is the size of vector
      cout<<"Enter the size of vector:"<<endl;
      cin>>n;
      vector<int> temp;
      for(int j=0;j<n;j++)
      {
        int x;
        cout<<"Enter the value to be enetered in "<<(j+1)<<"vector"<<endl;
        cin>>x;
        temp.push_back(x); //this we have taken a row values
      }
      //now once we have entered vector we will push it in a big vector
      v.push_back(temp);
  }


//printing the values of vector of vector
for(int i=0;i<v.size();i++)
{
  for(int j=0;j<v[i].size();j++)
  {
    cout<<v[i][j]<<" ";
  }
  cout<<endl;
}


}
