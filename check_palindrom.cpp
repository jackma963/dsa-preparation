#include<bits/stdc++.h>
using namespace std;
bool check_palindrom(string str)
{
  int i=0;
  int j=str.length()-1;
  while(i<j){
    if(str[i]!=str[j])
      {
        return false;
      }
     i++;
     j--;
  }
  return true;
  
  
}

int main()
{
  cout<<"please enter the string"<<endl;
  string str;
  cin>>str;
  cout<<check_palindrom(str)<<endl;
}
