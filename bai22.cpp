//Bài 22. Sắp xếp chữ


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




/*int main(){  c1
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string input = "";
    string res = "";
    for (int i =0 ;i < n ;i++){
    	cin >> input;
    	res += input;
    }
    int k = res.size();
    int a[k];
    for (int i =0 ; i < k ; i++){
    	a[i] = res[i] - '0';
    }
    sort(a ,a + k);
    for (int i = 0 ; i < k ; i++){
    	if (a[i] != a[i+1]) cout << a[i] << " ";
    }
}
*/



// c2'


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<char> v;
    while (n--){
    	string s; cin >> s;
    	for (auto x : s){
    		v.insert(x);
    	}
    }	
    for (auto x : v){
    	cout << x << " ";
    }
}