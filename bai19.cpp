

// Cặp số có tổng lớn hơn k

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



int vt(int a[] , int l , int r , int x){
	int res = -1;
	while (l <= r){
		int m = (l + r) / 2;
		if (a[m] > x){
			res = m;
			r = m - 1;
		}  else l = m +1;
	}
	return res;
}
int main(){
	int n , k; cin >> n >> k;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	sort(a ,a + n );
	/*ll ans = 0;
	for (int i =0 ;i < n ;i++){
		auto *it = upper_bound(a + i + 1, a + n , k - a[i]);

		if (it != a + n){
			ans +=  (a + n) - it;
		}
	}
	cout << ans;*/
	ll ans = 0;
	for (int i =0 ; i < n ;i++){
		int p = vt(a , i +1 , n -1 , k - a[i]);
		if (p != -1){
			ans += n - p;
		}
	}
	cout << ans;
}