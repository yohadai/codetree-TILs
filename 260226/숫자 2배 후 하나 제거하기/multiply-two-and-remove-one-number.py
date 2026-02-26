import sys
MAX_INT = sys.maxsize

n = int(input())
arr = list(map(int, input().split()))

def diff(arr, delete):
    total = 0
    prev = None
    for i in range(n):
        if i == delete: continue
        if prev:
            total += abs(prev - arr[i])
        prev = arr[i]
    return total

ans = MAX_INT
for double in range(n):
    arr[double] *= 2
    for delete in range(n):
        ans = min(ans, diff(arr, delete))
    arr[double] //=2

print(ans)