from bisect import *
from typing import List

def kthSmallest(matrix: List[List[int]], k: int) -> int:
    l, r, N = matrix[0][0], matrix[-1][-1], len(matrix)
    
    def less_k(m):
        cnt = 0
        print("==============================================")
        for r in range(N):
            print(matrix[r] , "", m)
            x = bisect_right(matrix[r], m)
            cnt += x
            print(f"x is {x} and cnt is {cnt}")
        print("==============================================")
        
        return cnt
            
    while l<r:
        mid = (l+r)//2
        
        if less_k(mid) < k:
            l = mid +1
        else:
            r = mid
    return l

matrix = [[1,5,9],[10,11,13],[12,13,15]]
k = 8

ans = kthSmallest(matrix, k)

print(ans)