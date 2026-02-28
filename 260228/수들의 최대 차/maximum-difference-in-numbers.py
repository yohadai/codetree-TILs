N, K = map(int, input().split())
arr = [int(input()) for _ in range(N)]

# Please write your code here.
ans = 0
for i in range(1, N-K):
    cnt = 0
    for j in range(N):
        if i <= arr[j] and arr[j] <= i+K: cnt += 1
    ans = max(ans, cnt)

print(ans)