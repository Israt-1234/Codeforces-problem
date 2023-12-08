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
    int n,s;
    cin>>n>>s;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
 //   vector<int>v;
//    for (int i = n-1; i>=0; i--){
//     v.push_back(b[i]);
//    }
//         for(int i=0;i<n;i++)
//    cout<<v[i]<<endl;
    
     if(a[0]==0)
     cout<<"NO"<<endl;
   else if(a[0]==1 and a[s-1]==1)
    cout<<"YES"<<endl;
    else if(a[s-1]==0 && b[s-1]==0)
    cout<<"NO"<<endl;
    else{
       
       for(int i=s;i<n;i++){
                if(a[i]==1 && b[i]==1)
                {
                cout<<"YES"<<endl;
                 return 0;
                 }
            }
            cout<<"NO"<<endl;
        }

    
    return 0;
}