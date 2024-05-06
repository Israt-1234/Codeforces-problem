// n! how many digits
// 5!= log10(1*2*3*4*5)=120 ---->3 digits

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int findDigit(int n){
    if(n < 0)
    return 0;
    if(n <= 1)
    return 1;
    double digits = 0;
    for(int i=2 ; i<=n ; i++){
        digits += log10(i);
    }
    return floor(digits)+1;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    cout<<"Number of digits of "<< n<< "! is "<< findDigit(n)<<endl;
    return 0;
}
//Time complexity: O(N log N) 
