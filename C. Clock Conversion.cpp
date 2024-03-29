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
    int abc;
    int G;cin>>G;
    while(G--){
        string s;
        cin>>s;
         string k="";
         string l= "";
         int n=s.size()/2;
        for(int i=0;i<s.size();i++){
            if(n<=i)
            l+=s[i];
            else
            k+=s[i];
        }
        int M= stoi(k);
        
        if(M>12){
            M=M-12;
            if(M<10)
            cout<<0;
            cout<<M<<l<< " PM"<<endl;
        }
        else if(M==0)
        cout<<12<<l<<" AM"<<endl;
        else if(M==12)
        cout<<12<<l<<" PM"<<endl;
        else {
         
            cout<<k<<l<<" AM"<<endl;
        }

    }
    return 0;
}