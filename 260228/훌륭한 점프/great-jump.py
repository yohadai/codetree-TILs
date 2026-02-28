
n, k = map(int, input().split())
arr = list(map(int, input().split()))

def is_possible(max_value):
    for i in range(n-k):
        if arr[0] > max_value or arr[-1] > max_value: return False
        possible = False
        for j in range(i, i+k):
            if arr[j] <= max_value: 
                possible = True
                break
        if not possible: return False
    return True

ans = sorted(arr, reverse=True)

for i in range(n):
    if not is_possible(ans[i]):
        print(ans[i-1])
        break