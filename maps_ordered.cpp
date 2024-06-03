#include<bits/stdc++.h>
using namespace std;

int main()
{
  /*
   let us understand the baics of map
   It works like a key value pair and is similar to dictionary
   It works on the principle of key value pair and as the name suggests the key will always be unique
   The keys that we will store will be unique and distinct
   Types of maps
   1)Ordered map ->In this the values are stored in soretd order based on key. They are implemented using red/black trees and the red/black trees are self balancing
   They are not stored in a continous way as array that's why we need iterators to iterate over them and we cant do it+1 in this.
   for eg-:
   {1,"adi"};{10,"aman"};{5,"aakriti"};{12,"sunny"}
   The map will store values as below
   1->adi
   5->aakriti
   10->aman
   12->sunny
   2) Unordered map->In this there is no specific order in which the values will be stored.
  */


   /*
   Hints to identify when to use map
   If in the question it is mentioned something related to distinct charecters,number or string
   The hint is simple if you see distinct word there can be a possibility that in that question there will be use of map
   */




   //lets first look the code of map
   map<int,string> m;
   //here above you can use any kind of data types or containers. eg->map<int,vector<int>> m
   m[1]="adi"; //insertion takes of O(logn) time complexity where n is the current size of map
   m[10]="aman";
   m[5]="aakriti";
   m[12]="sunny";
   //m[89]; even if I write this then this means the time complexity will be O(logn)
   m.insert({8,"akul"}); //this is another way of declaring a map and since we are inserting pair so we can also use m.insert({make_pair(8,"akul")})

  //so to insert the n values into the map the time complexity will be (nlogn)
  //to access the values that we are accessing using the for loop will also be (nlogn)


   map<int,string>:: iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
     cout<<it->first<<" "<<it->second<<endl; //this time complexity is also O(logn)
     //you will see that the map is printed with the key values sorted
   }
   cout<<endl;

   //another way to print using auto keyword
   for(auto &ptr:m) //this is pass by refrence so it will bring change in value of map of required
   {
     cout<<ptr.first<<" "<<ptr.second<<endl; //but keep in mind whenever you are using auto we use "." operator to access first and second value
   }

   cout<<endl;

   //Note->The strings are stored in lexographically increasing order meaning the way they are stored in dictionary

   map<string,int> p;
   p["aman"]=23;
   p["zenath"]=87;
   p["tillu"]=165;
   p["babbar"]=754;

   for(auto &ut:p)
   {
     cout<<ut.first<<" "<<ut.second<<endl;
   }
   //now you will see that the strings are stored in a lexographical order

  //some important functions for map
  auto rt=m.find(12); //so here we will be finding values by key O(logn)
  //so the above function returns an iterator pointing to the value where it is stored and if it is not able to find the value it will return .end()

  cout<<endl;
  if(rt==m.end())
  {
    cout<<"The value is not present in the map"<<endl;
  }
  else{
    cout<<"The key value pair is as follows:"<<rt->first<<" "<<rt->second<<endl;
  }
   cout<<endl;
  //lets look into the erase function

  m.erase(10); //this can work both on iterator or dorectly the value also and it also has time complexity of O(nlogn)

  for(auto &et:m)
  {
    cout<<et.first<<" "<<et.second<<endl;
  }
  cout<<endl;
  //lets pass an iterator
  m.erase(rt); //rt has a value 12 that we used above to find
  for(auto &et:m)
  {
    cout<<et.first<<" "<<et.second<<endl;
  }

  //m.size()->this will give you the current size of the map

  //HOTS->The time complexity will not always remain O(logn) it will change
  /*
   Suppose we have a map which has below syntax
   map<string,string> m;
   m["abcd"]=abcd
   jab ham intgere value as key daalte hai toh internal inplememtation mein vo comparision karta hai logn time and then correct location pe insert karta hai
   ab jab ham string aur string ka daal rahe hai toh string ka size bhi matter karega kyoki string comparison bhi hooga ki alphabetocally kisi upar rakhna hai

   Time complexity s.size()*O(logn) hogi but generally maine aisa koi question solve nahi kiya aaj tak toh O(logn) hoi hota hai usually
  */
}
