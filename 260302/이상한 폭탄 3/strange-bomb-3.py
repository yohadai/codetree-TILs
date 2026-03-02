N, K = map(int, input().split())
num = [int(input()) for _ in range(N)]

# 길이 k의 구간으로 완전탐색 진행, 새 배열에 터지는 폭탄의 번호 저장 후 제일 많은거 고르기

explose = [False] * N
for i in range(N-K):
    for j in range(i+1, i+K+1):
        if num[j] == num[i]: explose[i], explose[j] = True, True

bomb = [0] * 1000000
for i in range(N):
    if explose[i] == True:
        bomb[num[i]] += 1
num = list(set(num))
ans = 0
for i in range(1, len(num)):
    if bomb[num[i]] > bomb[ans]:
        ans = num[i]
print(ans)
