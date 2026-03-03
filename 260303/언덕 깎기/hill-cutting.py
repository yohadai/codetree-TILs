import sys

MAX_INT = sys.maxsize
N = int(input())
heights = [int(input()) for _ in range(N)]

# Please write your code here.
ans = MAX_INT
for min_h in range(101 - 17):
    cost = 0
    for hight in heights:
        
