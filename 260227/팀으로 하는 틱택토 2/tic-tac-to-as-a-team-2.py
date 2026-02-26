inp = [input() for _ in range(3)]

# Please write your code here.
def win(a, b):
  for r in range(3):
     if set(inp[r]) == set((str(a), str(b))): return True
  for c in range(3):
     if set((inp[0][c], inp[1][c], inp[2][c])) == set((str(a), str(b))): return True
  if set((inp[0][0], inp[1][1], inp[2][2])) == set((str(a), str(b))): return True
  if set((inp[2][0], inp[1][1], inp[0][2])) == set((str(a), str(b))): return True
  
  return False

ans = 0
for i in range(1, 9):
    for j in range(i+1, 10):
        if i == j: continue
        if win(i, j): ans += 1
print(ans)