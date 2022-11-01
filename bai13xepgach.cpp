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




int main(){
	int n; cin >> n;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	sort(a , a+ n , greater<int> ());
	int cnt =1;
	int s = a[0];
	for (int i =1 ; i < n ;i++){
		if (s >= 1){
			cnt++;
			s = max(s -1, a[i]);
		}
	}
	cout << cnt;
}