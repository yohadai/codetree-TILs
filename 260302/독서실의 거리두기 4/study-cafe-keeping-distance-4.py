N = int(input())
seat = list(map(int, input()))

def min_dist(seat):
    min_dist = 100000
    prev = None
    for i in range(N):
        if seat[i] == 0: continue
        else:
            if prev == None: 
                prev = i
                continue
            min_dist = min(min_dist, i - prev)
            prev = i
    return min_dist

ans = 0
for i in range(N-1):
    for j in range(i+1, N):
        if seat[i] == 1 or seat[j] == 1: continue 
        tmp_seat = seat[:]
        tmp_seat[i], tmp_seat[j] = 1, 1
        ans = max(ans, min_dist(tmp_seat))
print(ans)