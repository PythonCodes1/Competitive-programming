# https://atcoder.jp/contests/abc166/tasks/abc166_b

n, k = map(int, input().split())

cnt = [0] * n

for i in range(k):
	d = input()
	As = list(map(int, input().split()))
	for a in As:
		cnt[a-1] += 1

print(cnt.count(0))
