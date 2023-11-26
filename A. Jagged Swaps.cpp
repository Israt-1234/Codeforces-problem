#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int num; cin>>num;
  while(num--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

       int count =0;
       if(a[0]!=1)
        count++;
     if(count==0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
  }
  return 0;
}

