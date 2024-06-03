#include<bits/stdc++.h>
using namespace std;

int main()
{
  //Unordered map->the key value will be stored in random order. There is no specific order here and they are based on hashing.
  /*
   In ordered map the key is inserted based on comparision but here no comparison will be done and will be stored in form of hashing
   You can use unordered map in place of ordered map for questions where order of charecters, integers does not matter
  */

  unordered_map<int,string> m;

  m[1]="adi"; //insertion takes of O(1) time complexity and this is average time complexity as there can be coliisions
  m[10]="aman";
  m[5]="aakriti";
  m[12]="sunny";
  m.insert({8,"akul"});

  //here m.find(),m.erase() they will take O(1) time complexity so this is much better than  unordered maps


  /*
  Very important point to note is that-:
  1)You cannot use nested thing in this for eg-:
  unordered_map<int,vector<int>> m;
  unordered_map<int,pair<int,int>> j;
  ye dono nahi chalenge kyoki pair<int,int> inke liye koi hashing function defined nahi hai
  ye map mein chalega kyoki waha ham comparisions kar rahe hashing value use nahi kar rahe.
  */
}
