/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll k=0;
        string s1;
        s1+=s[0];
        for(int i=1;i<s.size();i++){
      if(s[i]=='0'){
        s1+=s[i];
        k++;
      }
      else
      break;
        }
     string w;
    string str;
    for(int i=k+1;i<s.size();i++)
      str+=s[i];
        int k1 = (str.empty() ? 0 : stoi(str));
        int k2 = (s1.empty() ? 0 : stoi(s1));
      if(!str.empty() && !s1.empty() && str!=s1 and k1>k2)
      cout<<s1<<" "<<str<<endl;
      else
      cout<<"-1"<<endl;
      }
    return 0;
}