import sys
MAX_INT = sys.maxsize
N = int(input())
seat = list(input())

def dist(arr):
    min_dist = MAX_INT
    for i in range(len(arr)-1):
        if arr[i] == '0': continue
        for j in range(i+1, len(arr)):
            if arr[j] == '1':
                min_dist = min(min_dist, j - i)
                break
    return min_dist
# Please write your code here.
ans = -1
for new in range(N):
    if seat[new] == '1': continue
    seat[new] = '1'
    ans = max(ans, dist(seat))
    seat[new] = '0'
print(ans)