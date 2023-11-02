// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;

  getline(cin, s);

  int n= s.size();
  string word="";
     transform(s.begin(), s.end(), s.begin(), ::toupper);
  for(int i=n-1;i>=0;i--){
      if(s[i]==' ' || s[i]=='?'){
         word=word;

      }
      else{
      word+=s[i];
      break;
      }
     // cout<<word;

  }
   // transform(word.begin(), word.end(), word.begin(), ::toupper);
   //string K= word.substr(n-1);
 ///  cout<<K<<endl;
  //string K;
   //K= toupper(k);
  // cout<<word<<endl;
   if(word=="A" || word=="I"|| word== "E" || word== "O"|| word=="U"|| word=="Y")
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
// for(int i=0;i<word.size();i++)
 //   string k= word[i-2];
// cout<<word[i]<<endl;
    return 0;
}

