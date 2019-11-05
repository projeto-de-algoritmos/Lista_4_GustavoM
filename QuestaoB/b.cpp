#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	vector<int> vs(n);
	for(auto &x:vs) cin >> x;
	int l=0, r=1e9+10;
	sort(vs.begin(), vs.end(), greater<int>());
	while(r-l>1){
		int k = l+(r-l)/2; // Média de l e r (l+r)/2
		vector<int> vx = vs;
		int i = 0, j=0;
		while(j<m and i<n){
			if(vx[i]<k) ++i;
			else{ 
				int res = vx[i]/k;
			       	vx[i]-=res*k;	
				j+=res;
			}
		}
		if(j>=m) l=k;
		else r=k;
	}
	cout << l << endl;
}
