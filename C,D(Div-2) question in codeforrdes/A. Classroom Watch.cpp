#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;

   string s=to_string(n); 
   int m=s.size(); 
   vector<int>v;
   for(int i=9*m;i>=0;i--)
   {
       int j=n-i;
       int sum=0;
       for(sum=0;j>0;j/=10)
             sum+=j%10;

       if(sum==i)
       v.push_back(n-i);
   }

   cout<<v.size()<<endl;
   for(auto i:v)
   cout<<i<<endl;
}
