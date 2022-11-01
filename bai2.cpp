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



//Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần 
//tử trong mảng theo thứ tự tăng dần, sau đó sắp xếp các phần tử theo thứ tự giảm dần.





int main(){
	int n; cin >> n;
	int a[n];
	vector<int> v;
	for (int i =0 ; i < n ; ++i){
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin() , v.end());
	for (auto x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin() , v.end() , greater<int> ());
	for (auto x : v){
		cout << x << " ";

	}
}