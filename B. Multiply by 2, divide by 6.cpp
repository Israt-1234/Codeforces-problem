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
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        int count1=0, count2=0;
        while(t%2==0){
            t/=2;
            ++count1;
        }
        while(t%3==0){
            t/=3;
            ++count2;
        }
        if(t==1 and count1<=count2){
            cout<<2*count2-count1<<endl;
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}