// Sắp xếp theo trị tuyệt đối


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

bool cmp(int a , int b){
	return abs(a) < abs(b);
}

int main(){
	int n; cin >> n;
	int a[n];
	for (auto &X : a){
		cin >> X;
	}
	stable_sort(a , a + n , cmp);
	for (auto x : a){
		cout << x << " ";
	}
}