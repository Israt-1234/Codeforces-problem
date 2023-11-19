#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    clock_t st=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
            cin>>a[i];
        sort(a,a+t);
        int count=0;
        for(int i=0;i<t-1;i+=2){
            if(abs(a[i]-a[i+1])>4){
                count++;
                break;
            }
        }
        if(count==1)  cout<<"NO"<<'\n';
        else      cout<<"YES"<<'\n';
    }
    return 0;
}
