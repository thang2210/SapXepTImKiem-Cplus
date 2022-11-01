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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k; cin >> n >> k;
    int a[n];
    map<int,int> v; int l =0;
    int ans =0; int cnt =0;
    for (int i =0 ; i < n ;i++){
    	cin >> a[i];
    	v[a[i]]++;
    	if (v[a[i]] == 1) cnt++;
    	while (cnt > k){
    		v[a[l]]--;
            if (v[a[l]] == 0) cnt--;
            l++;
    	}
        ans += i - l +1;

    }	
    cout << ans;
}