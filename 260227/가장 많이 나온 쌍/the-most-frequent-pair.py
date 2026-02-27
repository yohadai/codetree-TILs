n, m = map(int, input().split())
pairs = [set(map(int, input().split())) for _ in range(m)]

# Please write your code here.
ans = 0
for a in range(n-1):
    for b in range(a+1, n):
        cnt = 0
        for pair in pairs:
            if set((a, b)) == pair: 
                cnt += 1
        ans = max(ans, cnt)


print(ans)