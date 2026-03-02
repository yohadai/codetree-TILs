N = int(input())
seat = list(map(int, list(input())))

# Please write your code here.
def dist(i, j):
    str = seat[:]
    str[i] == 1
    str[j] == 1
    min_dist = 1000000
    dist = min_dist
    for d in range(N):
        if str[d] == 1:
            min_dist = min(min_dist, dist)
            dist = 0
        else: dist += 1
    return min_dist

ans = 0
for i in range(N-1):
    for j in range(N):
        if i == j: continue
        if seat[i] == 1 or seat[j] == 1: continue
        ans = max(ans, dist(i, j))

print(ans)