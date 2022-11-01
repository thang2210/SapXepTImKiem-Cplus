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




void ca_se(int a[] ,int n){
	for (int i =1 ; i < n ;i++){
		int index = i;
		int value = a[i];
		while (index > 0 && a[index - 1] > value){
			a[index] = a[index -1];
			index--;
		}
		a[index] = value;
	}
	for (int i =0 ;i < n ; i++){
		cout << a[i] << " ";
	}
}


void ss(int a[] ,int n){
	for (int i =1 ; i <= n-1 ; i++){
		int value = a[i];
		int j = i;
		while (j > 0 && a[j-1] > value){
			a[j] = a[j-1];
			j--;
		}
		a[j] = value;	
		cout << "cac buoc " << i  << ":" << endl;
	for (int i =0 ;i < n ; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	}
	
}

int main(){
	int n; cin >> n;
	int a[n];
	for (int &x : a){
		cin >> x;
	}
	ss(a , n);

}