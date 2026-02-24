n = int(input())    
node = [tuple(map(int, input().split())) for _ in range(n)]

square = []
for ignore in range(n):
    m = [100000000, 100000000]
    M = [0, 0]
    for i in range(n):
        if ignore == i: continue
        m[0] = min(m[0], node[i][0])    
        m[1] = min(m[1], node[i][1])
        M[0] = max(M[0], node[i][0])    
        M[1] = max(M[1], node[i][1])
    square.append((M[0]-m[0]) * (M[1]-m[1]))

print(min(square))