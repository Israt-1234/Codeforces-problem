#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;
#define ll long long

int main() {
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll l = k;
        ll r= (n+k-1);
        ll presum = l*(l-1)/2;
        ll total_sum = r*(r+1)/2;
        ll middlesum = total_sum - presum;
        ll mid_half = middlesum/2;
        ll sum = 0, num = 0;
        while(l<=r){
            ll mid = (l+r)>>1;  //divided by 2
            ll  cur_sum = mid*(mid+1)/2;
            ll nowhave = cur_sum - presum;
            if(nowhave<=mid_half){
                num = mid;
                sum = nowhave;
                l = mid+1;
            }
            else{
                r = mid - 1;
            }
        }
        ll ans1 = middlesum - sum;
        ll temp = ans1;
        ans1 = abs(ans1-sum);
        num++;
        ll ans2 = abs((sum + num) - (temp - num));
        cout << min(ans1, ans2) << endl;
    }

    return 0;
}
