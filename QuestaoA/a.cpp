#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(0);
	ll n, c, t;
	cin >> n >> c >> t;
	vector<ll> vs(n);
	for(auto &x:vs) cin >> x;
	ll l=0, r=1e16;
	while(r-l>1){
		ll k = l+(r-l)/2LL;
		ll max_pop = k*t;
		ll i=0, j=0;
	       	ll eat=0;
		while(i<n and j<c){
			if(vs[i]>max_pop-eat) eat=0, ++j;
			else eat+=vs[i], ++i;
		}
		if(i==n) r=k;
		else l=k;
	}
	cout << r << endl;
}
