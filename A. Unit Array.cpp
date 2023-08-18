#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,sum=0,count=0;
        cin>>t;
        int a[t];
        for(int i=0; i<t; i++)
        {
            cin>>a[i];
            if(a[i]>0)
                count++;
                else
                    sum++;
        }
        int ans=0;
        while(count<sum){
            count++;
            sum--;
            ans++;
        }
        if(sum%2==1)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
