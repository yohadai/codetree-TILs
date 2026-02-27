import sys
n = int(input())
ranges = [tuple(map(int, input().split())) for _ in range(n)]
a, b = zip(*ranges)
a, b = list(a), list(b)

# Please write your code here.
ans = 1
while(True):
    cur = ans
    flag = True
    for i in range(n):
        cur *= 2
        if b[i] < cur or cur < a[i]:
            ans += 1
            flag = False
            break
    if flag:
        print(ans)
        sys.exit()