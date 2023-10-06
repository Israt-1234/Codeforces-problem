#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cout<<(n-a[i]+1)<<' ';
        }
//    prev_permutation(a,a+n);
//       for(int i=0;i<n;i++)
//           cout<<a[i]<<" ";
       cout<<endl;
    }
}
