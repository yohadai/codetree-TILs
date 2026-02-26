n, m = map(int, input().split())
arr = [0] + list(map(int, input().split()))

# Please write your code here.
ans = 0
for start in range(1, n+1):
    total = arr[start]
    cur = start
    for move in range(m-1):
        cur = arr[cur]
        total += arr[cur]
    ans = max(ans, total)
print(ans)