#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    vector<int> lis;
    int answer = 0;
    while(n--){
        int p;
        cin >> p;
        lis.push_back(p);
        sort(lis.begin(), lis.end());
    }
    for(int i=0; i<k; i++){
        answer += lis[i];
    }
    cout << answer;
}
