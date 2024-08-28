#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--){
 int z;
 cin>>z;
string a;
cin>>a;
sort(a.begin(),a.end());
for(int i=0;i<z/2;i++){
    cout<<a[i]<<a[z-i-1];
}
if(z%2==1){
    cout<<a[z/2];
}
cout<<endl;
    }
    return 0;
}
