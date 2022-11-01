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

bool cmp(pair<int,int> a , pair<int,int> b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i=0 ;i < n ;i++){
        cin >> a[i].first >> a[i].second;
    }    
    sort( a,a + n , cmp);
    int start = a[0].second;
    int cnt =1;
    for (int i=1 ; i < n ;i++){
        if (a[i].first >= start){
            cnt++;
            start = a[i].second;
        }
    }
    cout << cnt;
}