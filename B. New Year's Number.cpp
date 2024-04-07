// /*........Hard work and consistency is the only way to success........ */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1005;
// //int d[N][N],pref[N][N];
// int main()
// {
//     // clock_t st= clock();
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;cin>>n;
//     int sum=2020+2021;
//     while(n--){
//         int t;cin>>t;
//         int count=0;
//         if(t<2020){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         if(t%2020==0 || t%2021==0){
//         cout<<"YES"<<endl;
//         count=1;
//         }
//         else{
//             t=t-sum;
//             if(t==0 || t%2020==0 ||t%2021==0){
//             cout<<"YES"<<endl;
//             count=1;
//             }
//         }
//         if(count==0)
//         cout<<"NO"<<endl;
        
//     }
//     return 0;
// }

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
    while(t--){
        int n;cin>>n;
        int k=n/2020;int l=n%2020;
        if(l>k)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}