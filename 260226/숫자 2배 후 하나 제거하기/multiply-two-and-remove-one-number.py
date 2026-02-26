n = int(input())
arr = list(map(int, input().split()))

def diff(arr):
    total = 0
    for i in range(len(arr) - 1):
        total += abs(arr[i] - arr[i+1])
    return total

# Please write your code here.
ans = 100000000000

for double in range(n):
    for delete in range(n):
        cur = arr[:]
        cur[double] *= 2
        cur.pop(delete)
        ans = min(ans, diff(cur))

print(ans)
