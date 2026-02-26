n = int(input())
moves = [tuple(map(int, input().split())) for _ in range(n)]
a, b, c = zip(*moves)
a, b, c = list(a), list(b), list(c)

# Please write your code here.
ans = 0
for rock in range(1, 4):
    cnt = 0
    cup = [None, 0, 0, 0]
    cup[rock] = 1
    for i in range(n):
        cup[a[i]], cup[b[i]] = cup[b[i]], cup[a[i]]
        if cup[c[i]] == 1: cnt += 1
    ans = max(ans, cnt)

print(ans)