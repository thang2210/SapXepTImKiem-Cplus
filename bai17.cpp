//Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.


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



int first(int a[] , int l , int r , int x){
	int res = -1;
	while (l <= r){
		int m = (l + r) /2;
		if (a[m] == x){
			res = m;
			r = m -1;
		} else if (a[m] < x){
			l = m + 1;
		} else r = m-1;
	}
	return res;
}


int last(int a[] , int l , int r , int x){
	int res = -1;
	while (l <= r){
		int m = (l + r) /2;
		if (a[m] == x){
			res = m;
			l = m + 1;
		} else if (a[m] < x){
			l = m +1;
		} else {
			r = m-1;
		}
	}
	return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k; cin >> n >> k;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }
    ll ans = 0;
    sort( a,a + n);
    /*for (int i =0 ;i < n ;i++){    CACH 1 : VIET HAM BANG COM ""
    	int res1 = first(a , i +1 , n -1 , k - a[i]);
    	if (res1 != -1){
    		int res2 = last(a , i +1 , n-1 , k - a[i]);
    		ans += res2 - res1 + 1;
    	}
    }
    cout << ans;*/
    // C2: DUNG LOWER_BOUND && UPPER_BOUND
    for (int i =0 ; i < n ;i++){
    	auto it1 = lower_bound(a + i + 1, a + n , k - a[i]);
    	auto it2 = upper_bound(a + i +1 , a + n , k - a[i]);
    }
}