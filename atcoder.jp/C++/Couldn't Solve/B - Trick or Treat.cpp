/*
Problem Statement N Snukes called Snuke 1 , Snuke 2 , ..., Snuke N live in a town. 
There are K kinds of snacks sold in this town, called Snack 1 , Snack 2 , ..., Snack K.
The following d i Snukes have Snack i : Snuke A i , 1 , A i , 2 , ⋯ , A i , d i .
Takahashi will walk around this town and make mischief on the Snukes who have no snacks.
How many Snukes will fall victim to Takahashi's mischief? Constraints All values in input are integers.
1 ≤ N ≤ 100 1 ≤ K ≤ 100 1 ≤ d i ≤ N 1 ≤ A i , 1 < ⋯ < A i , d i ≤ N Input 
https://atcoder.jp/contests/abc166/tasks/abc166_b
*/

#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int> d;
vector<vector<int>> A;

void input() {
	cin >> N >> K;
	d.resize(K);
	A.resize(K, vector<int>());
	for(int i = 0; i < K; i++) {
		cin >> d[i];
		A[i].resize(d[i]);
		for(int j = 0; j < d[i]; j++) {
			cin >> A[i][j];
		}
	}
}

void solve() {
	int ans = 0;
	for(int i = 1; i <= N; i++) {
		bool have = false;
			for(auto v : A) {
				for(auto p : v) {
					if(p == i) have = true;
				}
			}
			if(!have) ans++;
		}
		cout << ans << endl;
}

int main() {
	input();
	solve();
	return 0;
}
