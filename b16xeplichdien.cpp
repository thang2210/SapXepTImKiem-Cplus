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

bool cmp(pair<int,int> a , pair<int,int> b){
	return a.second < b.second;
}

int main(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for (auto &x : a){
		cin >> x.first >> x.second;
	}
	sort(a.begin() , a.end() , cmp);
	int ans = 1;
	int p = a[0].second;
	for (int i = 1; i < a.size() ; i++){
		if (a[i].first > p){
			ans++;
			p = a[i].second;
		}
	}
	cout << ans;
}	