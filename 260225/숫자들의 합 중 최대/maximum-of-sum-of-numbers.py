X, Y = map(int, input().split())

# Please write your code here.
ans = 0
for n in range(X, Y+1):
    k = n//1000 + n%1000//100 + n%100//10 + n%10
    ans = max(ans, k)

print(ans)
    