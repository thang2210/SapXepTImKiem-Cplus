#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}



bool chat(int a[] , int n , int k , int sum){
    ll ans =0; int cnt =0;
    for (int i=0 ;i < n ;i++){
        ans += a[i];
        if (ans > sum){
            ans = a[i];
            cnt++;
        }
    }
    cnt++;
    return cnt <= k;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k; cin >> n >> k;
    int a[n];
    int sum =0; int _max =0;
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
        sum += a[i];
        _max = max(a[i] , _max);
    }
    ll ans = 0;
    int l = _max , r = sum;
    while (l <= r){
        int m = (l + r) /2;
        if (chat(a , n , k , m)){
            ans = m;
            r = m=1;
        } else l = m+1;
    }
    cout << ans;

}