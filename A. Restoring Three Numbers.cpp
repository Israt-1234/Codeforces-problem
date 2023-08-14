#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v(4);
   for(int i=0;i<4;i++)
   {
       cin>>v[i];
   }
   sort(v.begin(),v.end());
  int n=abs(v[3]-v[2]);  //a
  int l=abs(v[3]-v[1]);  //b
  int m=abs(v[3]-v[0]);  //c
   cout<<n<<" "<<l<<" "<<m<<endl;
   return 0;
}
