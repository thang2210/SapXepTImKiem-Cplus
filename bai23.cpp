#include<bits/stdc++.h>


//Sắp xếp theo tần suất

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
	if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second >  b.second;
}

bool cmp2(pair<int,int> a , pair<int,int> b){
	
	return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    map<int,int> v;
    for (auto &x : a) {
    	cin >> x;
    	v[x]++;
    }	
    vector<pair<int,int>> res;
    vector<pair<int,int>> res2;
    for (int i =0 ;i < n ; i++){
        res.push_back({a[i] , v[a[i]]});
        res2.push_back({a[i] , v[a[i]]});
    }
    sort(res.begin() ,res.end() , cmp);
    for (auto x : res){
        cout << x.first << " ";
    }
    cout << endl;
    stable_sort(res2.begin() , res2.end() , cmp2);
    for (auto x : res2){
        while (v[x.first] != 0){
            cout << x.first << " ";
            v[x.first]--;
        }
    }
}