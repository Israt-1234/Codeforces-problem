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
    ll a,b;
    cin>>a>>b;
    if(a>b)
    swap(a,b);

   ll n=b-a+1;
ll sum=0;
    sum=n*(a+b)/2;
     
     cout<<sum<<endl;

     ll sum_even=0;
     ll first_even=(a%2==0)?a:a+1;
     ll last_even=(b%2==0)?b:b-1;
     sum_even=((last_even-first_even)/2+1)*(first_even+last_even)/2;
     cout<<sum_even<<endl;

    ll sum_odd=0;
    ll first_odd=(a%2!=0)?a:a+1;
     ll last_odd=(b%2!=0)?b:b-1;
    sum_odd=((last_odd-first_odd)/2+1)*(first_odd+last_odd)/2;

    cout<<sum_odd<<endl;
    // ll i=a,j=b;
    // ll sum=0;
    // ll even=0;
    // ll odd=0;
    // while(i<=j){
    //     if(i==j){
    //         sum+=i;
    //         if(i%2==0)
    //         even+=i;
    //         else
    //         odd+=i;

    //         i++;
    //         j--;
    //     }
    //     else{
    //     sum+=i+j;
    //     if(i%2==0)
    //     even+=i;
    //     else
    //     odd+=i;
    //     if(j%2==0)
    //     even+=j;
    //     else
    //     odd+=j;
    //     i++;
    //     j--;
    //     }
    // }
    // cout<<sum<<"\n"<<even<<"\n"<<odd<<endl;
    // clock_t ed=clock();
     //cout<<(ed*CLOCKS_PER_SEC)/st<<endl;




    return 0;
}