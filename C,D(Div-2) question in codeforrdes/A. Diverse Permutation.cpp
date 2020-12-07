#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

   int n,k;
   cin>>n>>k;

   set<int>s;

   vector<int>v;
   int i=1,p=0;
   v.push_back(1);
   s.insert(1);
   int y;
   while(v.size()!=n)
   {
       if(k!=0)
       {
            if(p==0)
            v.push_back(i+k),p=1,i=i+k,k--;
            else
            {
                p=0;
                v.push_back(i-k);
                i=i-k;
                k--;
            }
            s.insert(v.back());
            y=v.back();
       }
       else{

           if(p==0)
           {
               if(s.find(y+1)==s.end())
               v.push_back(y+1);
           }
           else
           {
               if(s.find(y-1)==s.end())
               v.push_back(y-1);
           }
          y++;
       }
      
   }
   for(auto i:v)
   cout<<i<<" ";

 
}
