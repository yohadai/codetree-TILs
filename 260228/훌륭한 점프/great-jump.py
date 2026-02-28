import sys
N, K = map(int, input().split())
arr = list(map(int, input().split()))

# Please write your code here.
ans = 0
for min in range(1, 100+1):
    for move in range(N-K):
        flag = False
        for check in arr[move:move+K]:
            if check in range(min, 100+1):
                flag = True
                break
        if not flag:
            print(min)
            sys.exit()