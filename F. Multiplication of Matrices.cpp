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
    int r1,c1;
    cin>>r1>>c1;
     int ar[r1][c1];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>ar[i][j];
        }
     }

    int r2,c2;
    cin>>r2>>c2;
     int ar1[r2][c2];
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>ar1[i][j];
        }
     }

     int result[r1][c2];

       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
        }
     }

     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j]+=ar[i][k]*ar1[k][j];

            }
        }
     }

     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
    return 0;
}