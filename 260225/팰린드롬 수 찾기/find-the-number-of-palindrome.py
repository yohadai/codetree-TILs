X, Y = map(int, input().split())
# x 이상 y 이하

ans = 0
for n in range(X, Y+1):
    n = str(n)
    is_palindrome = True
    for i in range(len(n)//2):
        if n[i] != n[-i-1]: is_palindrome = False
    if is_palindrome: ans += 1
print(ans)