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
    int n; cin>>n;
    while(n--){
        string s;
        cin>>s;
        int num=0,num1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            num1++;
            else
            num++;
        }
    int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(num>0)
                num--;
                else
                break;

                
            }
           else if(s[i]=='0'){
                if(num1>0){
                 num1--;
                }
                else
                break;
            }

        }
        cout<<num1+num<<endl;

    }
    return 0;
}