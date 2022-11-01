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


// Bài 1. Các số khác nhau trong mảng
// Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt

/*int main(){
	int n; cin >> n;
	int a[n];
	set<int> v;
	for (auto &x : a){
		cin >> x;
		v.insert(x);
	}
	cout << v.size();
}*/


void sovle(){
	int n; cin >> n;
	int a[n];
	map<int,bool> v;
	int _min = INT_MAX; int _max = 0;
	for (auto &x :a){
		cin >> x;
		v[x] = true;
	}
	for (int i = 0 ; i <= n ; i++){
		if (!v[a[i]]) cout << "-1" << " ";
		else cout << a[i] << " ";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while (t--){
		sovle();
	}
	for (int i =0 ; i < n ; i++){
		cout << a[i] << " ";
	}
}