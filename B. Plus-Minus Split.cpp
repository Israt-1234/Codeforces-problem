/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
 
    int k; cin>>k;
    while(k--){
        int t; cin>>t;
        string s; cin>>s;
        int count =0;
        int count1=0;
        for(int i=0;i<t;i++){
      if(s[i]=='+')
       count++;
       
        else
        count1++;
     }
        cout<<abs(count1-count)<<endl;
    }
    return 0;
}