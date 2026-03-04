import sys
n, l = map(int, input().split())
nums = list(map(int, input().split()))

# param에 최솟값 넣고 최솟값 이상인 것 카운트, 최솟값보다 1 적은 것 카운트.
# 1. H값 이상인 것의 카운트가 H값 이상인 경우
# 2. H값 이상인 것의 카운트 + min(H-1의 카운트, l) >= H 인 경우
def is_possible(H):
    H_cnt = 0
    H_minus_1_cnt = 0
    for num in nums:
        if num >= H: H_cnt += 1
        elif num == H-1: H_minus_1_cnt += 1
    return H_cnt >= H or H_cnt + min(H_minus_1_cnt, l) >= H

ans = -1
for num in nums:
    if is_possible(num): ans = max(ans, num)

print(ans)