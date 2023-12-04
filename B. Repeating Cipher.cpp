#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define yes cout<<YES<<endl
//#define no cout<<NO<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s;
    cin>>s;

    string sum="";
    int i=0,len=1;
     while(i<n){
        sum+=s[i];
        i+=(len++);
     }
     cout<<sum<<endl;
    return 0;
}