#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[20]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 49, 25, 9, 4};
  int count=0;
  string a;
  for(int i=0;i<20;i++){
      cout<<arr[i]<<endl;
      cin>>a;
      if(a=="yes"){
          count++;
      }
  }
  if(count>1){
      cout<<"composite"<<endl;
  }
  else cout<<"prime"<<endl;
	return 0;
}