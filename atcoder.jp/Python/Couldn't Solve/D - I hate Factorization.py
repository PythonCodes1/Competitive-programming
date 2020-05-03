// https://atcoder.jp/contests/abc166/tasks/abc166_d

x = int(input())
 
for a in range(-200, 200):
    for b in range(-200, 200):
        if(a**5 - b**5 == x):
            print(a,b)
            exit()
