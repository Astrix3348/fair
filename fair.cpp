#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(){
	int n,one=0, two=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.rbegin(),v.rend());

	for(auto i:v){
		if(one<=two){
			one+=i;
		}
		else{
			two+=i;
		}
	}
	one==two?cout << "YES\n":cout << "NO\n";
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}