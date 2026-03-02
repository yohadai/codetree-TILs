n = int(input()) # 1 <= n <= 1000
adjacent = list(map(int, input().split()))

# 처음 수가 정해지면 그 다음 수는 자동으로 차례대로 정해진다.

def is_possible(num):
    arr = list()
    arr.append(num)
    for i in range(n-1):
        if abs(adjacent[i] - arr[-1]) in arr:
            return False
        arr.append(abs(adjacent[i] - arr[-1]))
    for ans in arr:
        print(ans, end=" ")
    return True

for i in range(1, n+1):
    if is_possible(i): break