/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
     vector<int>count(30,0);
     for(int i=0;i<t;i++){
        int n,k;cin>>n>>k;
        if(n==1)
        count[k]++;
        else{
            int i=29;
            while(i>=0){
                if(count[i]!=0){
                    int v=k/pow(2,i);
                    int mini=min(v,count[i]);
                    k-=(mini*pow(2,i));
                }
                i--;
            }
       if(k==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
     }
      return 0; 
 }
   