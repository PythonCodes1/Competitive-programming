#include<bits/stdc++.h>
 
using namespace std;
int arr[13][13], cnt[13], duit, N, M, X, C[13], ans = 1e9;
 
void rek(int idx) {
	if (idx == N + 1) {
		bool cek = 1;
		for (int i = 1; i <= M; i++) {
			if (cnt[i] < X) cek = 0;
		}
		if (cek) ans = min(ans, duit);
	} else {
		duit += C[idx];
		for (int i = 1; i <= M; i++) {
			cnt[i] += arr[idx][i];
		}
		rek(idx + 1);
		duit -= C[idx];
		for (int i = 1; i <= M; i++) {
			cnt[i] -= arr[idx][i];
		}
		rek(idx + 1);
	}
}
 
int main() {
	scanf("%d%d%d", &N, &M, &X);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &C[i]);
		for (int j = 1; j <= M; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	rek(1);
	if (ans == 1e9) printf("-1\n");
	else printf("%d", ans);
}
