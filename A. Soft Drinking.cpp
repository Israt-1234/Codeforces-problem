#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int   A=(k*l)/nl;
    int B=c*d;
    int P=p/np;
    int L=min(A,min(B,P))/n;
   cout<<L<<endl;
   return 0;
}
