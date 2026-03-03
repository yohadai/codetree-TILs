import sys

MAX_INT = sys.maxsize
N = int(input())
heights = [int(input()) for _ in range(N)]

# Please write your code here.
ans = MAX_INT
for min_h in range(101 - 17):
    cost = 0
    for height in heights:
        if height not in range(min_h, min_h + 18):
            carved = min(abs(min_h - height), abs(min_h + 17 - height))
            cost += carved ** 2
    ans = min(ans, cost)

print(ans)

