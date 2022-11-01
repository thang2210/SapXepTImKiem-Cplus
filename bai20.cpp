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


//Điền số còn thiếu
/*int main(){
	int n; cin >> n;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	int cnt = 0;
	sort(a ,a + n);
	for (int i =1 ;i < n ; i++){
		if (a[i] != a[i-1]) cnt++;
	}
	//cout << cnt << endl;
	cout << a[n-1] - a[0] - cnt;
}*/




bool cnt[10000];
int main()
{
    int n ; cin >> n;
    int a[n] , Min = MOD , Max = 0;
    for(int i = 0 ; i < n ;i++) 
    {
        cin >> a[i];
        Max = max(Max , a[i]);
        Min = min(Min , a[i]);
        cnt[a[i]] = true;
    }
    
    int ans = 0;
    for(int i = Min ; i <= Max ; i++)
    {
        if(!cnt[i]) ans++;
        // neu phan tu k xuat hien trong doan tu min toi max thi ans++;

    }
    cout << ans;
}