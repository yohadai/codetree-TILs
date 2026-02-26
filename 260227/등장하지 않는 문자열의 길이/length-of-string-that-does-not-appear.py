import sys
N = int(input())  
str = input()

# str[i:j] in str[j:], i in (0, N-1), j in (i+1, N)
cnt = [0] * (N+1)
for i in range(N-1):
    for j in range(i+1, N):
        if str[i:j] in str[j:]: cnt[j-i] += 1

for i in range(1, N+1):
    if cnt[i] == 0:
        print(i)
        break