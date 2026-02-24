N, B = map(int, input().split())
gifts = [tuple(map(int, input().split())) for _ in range(N)]
P = [gift[0] for gift in gifts]
S = [gift[1] for gift in gifts]

# 1. 반값 할인 적용 2. 선물값 + 배송비 배열 생성 
# 3. 배열 오름차순 정렬 후 예산 초과할때까지 카운트
ans = 0
for dc in range(N): # 할인
  total_price = list()
  for i in range(N): # i == dc일 때 반값
    if i == dc:
      total_price.append(P[i]//2 + S[i])
    else:
      total_price.append(P[i] + S[i])
  # setp 3
  total_price.sort()
  money = 0
  for k in range(N):
    if money + total_price[k] > B:
      ans = max(ans, k)
      break
    else:
      money += total_price[k]

print(ans)

