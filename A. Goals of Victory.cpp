#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;cin>>n;
    while(n--){
        int t; cin>>t;
        int a[t];
        int sum=0, sum1=0;
        for(int i=0;i<t-1;i++)
            cin>>a[i];
                 for(int i=0;i<t-1;i++){
                                if(a[i]>=0)
                sum=sum+a[i];
            else
                sum1=sum1+a[i];
                 }
                 int ans;
                 ans=sum1+sum;
                 if(ans>0)
                    cout<<-ans<<endl;
                 else
                    cout<<abs(ans)<<endl;
    }
}
