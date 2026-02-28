import sys
n, k = map(int, input().split())
arr = list(map(int, input().split()))

# Please write your code here.
# if not num in range(n, n+k): total += min(abs(num-n), abs(num-n-k))
ans = sys.maxsize
for num in range(1, 10001):
    cost = 0
    for i in range(n):
        if not num <= arr[i] <= num+k:
            if num > arr[i]: cost += num - arr[i]
            elif arr[i] > num+k: cost += arr[i] - num-k
    ans = min(cost, ans)
print(ans)
