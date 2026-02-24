N, C, G, H = map(int, input().split())
ranges = [tuple(map(int, input().split())) for _ in range(N)]

# Please write your code here.
ans = 0
for T in range(1010):
    work = 0
    for machine in ranges:
        if T < machine[0]: work += C
        elif T <= machine[1]: work += G
        else: work += H
    ans = max(ans, work)

print(ans)