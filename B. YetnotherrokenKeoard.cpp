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
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int>cap,sm;
        vector<bool>ok(n+2, true);

        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                if(!sm.empty()){
                    ok[sm.back()]=false;
                    sm.pop_back();
                }
                ok[i]=false;
            }
            else if(s[i]=='B'){
                if(!cap.empty()){
                    ok[cap.back()]=false;
                    cap.pop_back();
                }
                ok[i]=false;
            }
            else if(s[i]>='A' and s[i]<='Z'){
               cap.push_back(i); 
            }
            else
            sm.push_back(i);
        }
        for(int i=0;i<n;i++){
            if(ok[i])
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}