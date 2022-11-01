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

void check(int a[] ,int n){
    for (int i= 0 ;i < n-1 ; i++){
        for (int j = 0 ;j < n - i -1 ; j++){
            if (a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
        cout << "Buoc " << i +1 << ": ";
        for (int j =0 ;j < n ;j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}


int main(){
	int n; cin >> n;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	check(a , n);
}