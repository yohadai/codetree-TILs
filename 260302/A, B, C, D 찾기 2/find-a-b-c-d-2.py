import sys
nums = list(map(int, input().split()))
nums.sort()
# Please write your code here.

def is_same_list(arr):
    arr.sort()
    for x, y in zip(arr, nums):
        if x != y: return False
    return True

for A in range(40):
    for B in range(A, 40):
        for C in range(B, 40):
            for D in range(C, 40):
                arr = [
                    A, B, C, D, A+B, B+C, C+D, 
                    D+A, A+C,B+D, A+B+C, A+B+D, A+C+D, 
                    B+C+D, A+B+C+D
                    ]
                if is_same_list(arr): 
                    print(A, B,C, D)
                    sys.exit()