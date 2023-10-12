//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+9;
int a[N],x;
bool search1(int l, int r)
{
  if(l>r)  return false;
  int mid=(l+r)/2;
  if(x==a[mid]) return true;
  else if(x>a[mid])
    return search1(mid+1,r);
  else if(x<a[mid])
    return search1(l,mid-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n; int k;
   cin>>n>>k;
  // vector<int>a(n);
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   while(k--){
     cin>>x;

        bool found=search1(1,n);
        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
  return 0;
}
