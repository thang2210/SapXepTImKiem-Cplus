//Sắp đặt số 0


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

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[100000];
    vector<int> v , v2;
    for (int i =0 ;i < n ;i++){
    	cin >> a[i];
    	v2.push_back(a[i]);

    	if(a[i] == 0) v.push_back(a[i]);

    }	
    sort( a,a + n);
    for (int i =0 ;i < n ; i++){
    	if (a[i] != 0) cout << a[i] << " ";
    }
    for (auto x : v) cout << x << " ";
}*/


// c2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	int a[n] , b[n];
	int cnt =0;
	for (int i =0;i < n; i++){
		cin >> a[i];
		if (a[i] != 0) b[cnt++] = a[i];
	}
	sort( a,a + n);
	for (int i =0 ;i < cnt ; i++){
		cout << b[i] << " ";
	}
	for (int i =0 ;i < n - cnt ; i++){
		cout << "0" << " ";
	}
}