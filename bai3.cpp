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


//  1.Sắp xếp các từ theo thứ tự từ điển tăng dần 2.Sắp xếp các từ theo thứ tự từ điển giảm dần 
//  3.Sắp xếp các từ theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước 4.Sắp xếp các từ theo số lần xuất hiện giảm dần, nếu 2
//   từ có cùng số lần xuất hiện thì từ nào có thứ tự từ điển nhỏ hơn in ra trước



bool cmp(string a, string b){
	if (a.size() == b.size()){
		return a < b;
	}
	return a.size() < b.size();
}

bool cmp2(pair<string,int> a , pair<string , int> b){
	if (a.second == b.second){
		return a < b;
	}
	return a.first > b.first;
}


int main(){
	int n; cin >> n;
	vector<string> v;
	map<string, int> res;
	while (n--){
		string s; cin >> s;
		v.push_back(s);
		res[s]++;
	}
	sort(v.begin() , v.end());
	for (auto x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin() , v.end() , greater<string> ());
	for (auto x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin() , v.end() , cmp);
	for (auto x : v){
		cout << x << " ";
	}
	cout << endl;
	vector<pair<string, int >> ans;
	for (auto x : res){
		ans.push_back({x.first , x.second});
	}
	sort(ans.begin() , ans.end() , cmp2);
	for (auto x : ans){
		cout << x.first << " ";
	}
}
