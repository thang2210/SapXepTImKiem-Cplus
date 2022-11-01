//Bài 10. Tìm kiếm nhị phân biến đổi



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




int check1(int a[] , int n , int x){ // tim kiem vi tri dau tien 
	int l =0 , r = n-1;
	int res = -1;
	while (l <= r){
		int m = (l + r) /2;
		if (a[m] == x){
			res = m;
			r = m-1;
		} else if (a[m] < x){
			l = m +1;
		} else {
			r = m -1;
		} 
	}
	return res;
}

int check2(int a[] , int n , int x){
	int l =0 , r = n-1;
	int res = -1;   // vi tri cuoi cung 
	while (l <= r){
		int m = (l + r) / 2;
		if (a[m] == x){
			res = m;
			l = m +1;
		} else if (a[m] > x){
			r = m-1;
		} else l = m +1;
	}
	return res;
}

int check3(int a[] , int n , int x){ // lower_bound o(logn)
	int l =0 , r = n-1;
	int res = -1;
	while (l <= r){
		int m = (l + r) /2;
		if (a[m] >= x){
			res = m;
			r = m-1;
		} else l = m + 1;
	}
}

int check4(int a[] , int n , int x){
	int l =0 , r = n-1; // upper_bound 
	int res =-1;
	while (l <= r){
		int m = (l + r) /2;
		if (a[m] > x){
			res = m;
			r = m-1;
		} else l = m+1;
	}
	return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x; cin >> n >> x;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }	
    sort( a,a + n);
    cout << check1(a , n, x);
    cout << endl;
    cout << check2(a , n , x);
    cout << endl;
    cout << check3(a , n , x);
    cout << endl;
    cout << check4(a , n , x);
    cout << endl;
    int t1 = check1(a , n , x);
    int t2 = check2(a , n , x);
    if (t1 != -1) cout << t2 - t1 + 1;
    else cout << "0";
}