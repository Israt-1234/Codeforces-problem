#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        double r=abs(x*x)+abs(y*y);
          double r1=abs(x1*x1)+abs(y1*y1);
          if(sqrt(r)>sqrt(r1))
          {
              cout<<"ALEX"<<endl;
          }
         else if(sqrt(r)<sqrt(r1))
          {
              cout<<"BOB"<<endl;
          }
          else{
            cout<<"EQUAL"<<endl;
          }
    }
    return 0;

} 


