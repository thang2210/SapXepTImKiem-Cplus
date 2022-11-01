//Tìm kiếm nhị phân


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





bool search(int a[] , int n , int x){
	for (int i =0 ; i < n ;i++){
		if (a[i] == x) return true;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	int a[n];
	set<int> v;
	for (auto &x : a){
		cin >> x;
		v.insert(x);
	}
	int q; cin >> q;
	while (q--){
		int x; cin >> x;
		auto it = v.find(x);
		if (it != v.end()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}