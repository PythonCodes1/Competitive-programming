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


/*
Sample Input 1

There are 3 snooks and 2 types of snacks
The 1 and 3 together add one snack and the other 3 adds another snack

3 2
2 
1 3
1
3
Sample Output 1 
1 

Snuke 1 has Snack 1.Snuke 2 has no snacks.Snuke 3 has Snack 1 and 2.
Thus, there will be one victim: Snuke 2.
*/


// Another answer
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int d[k];
    int i,a;
    set<int >s;
    int j;
    for(i=0;i<k;++i){
           cin>>d[i];
           for(j=0;j<d[i];++j){
                 cin>>a;
                 s.insert(a);
           }
     }
     cout<<n-s.size();
     return 0;    
}
