#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

void fast()
{
   cin.tie(0);
   cout.sync_with_stdio(0);

}

bool triangle(int x1 , int y1, int x2, int y2, int x3, int y3)
{
    if ((x1 == x2 && y1==y2) || (x1==x3 && y1==y3) || (x2==x3 && y2==y3)) //Check if angels are equal or not
    
    
    return false;
    
    // Calculate the length of the Sides of the triangle
    int L1 = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    int L2 = ((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    int L3 = ((x1-x3)*(x1-x3)+(y2-y3)*(y2-y3));
    

    vector<int> v;
    v.push_back(L1);  //5
    v.push_back(L2);  //2
    v.push_back(L3);  //3

    sort(v.begin(),v.end()); //2 , 3 ,5


    // 2 + 3 = 5 
    // this is the provision to the triangle to be right angle
    int C1 = v[0] + v [1];


    int C2 = v[2];

    return C1 == C2;
}
int main()
{


  int x1, y1, x2, y2, x3, y3;
  
  cin>> x1>>y1>>x2>>y2>>x3>>y3;
  
  if(triangle(x1, y1, x2, y2, x3, y3)){

    cout<<"RIGHT"<<endl;

  }
  else if(triangle(x1+1, y1, x2, y2, x3, y3) || triangle(x1-1, y1, x2, y2, x3, y3) ||
       triangle(x1, y1+1, x2, y2, x3, y3) || triangle(x1, y1-1, x2, y2, x3, y3) ||
       triangle(x1, y1, x2+1, y2, x3, y3) || triangle(x1, y1, x2-1, y2, x3, y3) ||
       triangle(x1, y1, x2, y2+1, x3, y3) || triangle(x1, y1, x2, y2-1, x3, y3) || 
       triangle(x1, y1, x2, y2, x3+1, y3) || triangle(x1, y1, x2, y2, x3-1, y3) ||
       triangle(x1, y1, x2, y2, x3, y3+1) || triangle(x1, y1, x2, y2, x3, y3-1))

  {
     cout<<"ALMOST"<<endl;
  }


  else
  {
    cout<<"NEITHER"<<endl;
  }
  
  return 0;
}
