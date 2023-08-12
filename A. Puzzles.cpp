#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,M=0,ans=0;
    cin>>n>>m;
    int a[m],R;
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
        sort(a,a+m);
        M=a[m-1]-a[0];
    for(int i=n; i<=m; i++)
    {
       ans=a[i-1]-a[i-n];
       ans=abs(ans);
       M=min(M,ans);
       }
    cout<<M<<endl;
    return 0;
}
