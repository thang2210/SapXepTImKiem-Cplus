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

bool check(int a[] ,int n , int x){
	for (int i =0 ;i < n ;i++){
		for (int j = i +1 ; j <n ; j++){
			if (a[i] - a[j] == x){
				return 1;
			}
		}
	}
	return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n , x; cin >> n >> x;
	int a[n];
	map<int,int> v;
	for (auto &x : a){
		cin >> x;
		v[x] = 1;
	}
	sort( a,a + n , greater<int> ());
	for (int i =0 ;i < n ;i++){
		if (a[i] > x && v[a[i] - x] == 1){
			cout << "1";
			return 0;
		}
	}
	return -1;
	/*int cnt = 0;
	sort( a,a + n , greater<int>());
	if (check(a , n , x)) cout << "1";
	else cout << "-1";*/
}