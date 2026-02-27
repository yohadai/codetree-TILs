n, m = map(int, input().split())
pairs = [tuple(map(int, input().split())) for _ in range(m)]

# Please write your code here.
ans = 0
for a in range(1, n):
    for b in range(a+1, n+1):
        cnt = 0
        for pair in pairs:
            if (a, b) == pair or (b, a) == pair:
                cnt += 1
        ans = max(ans, cnt)
print(ans)