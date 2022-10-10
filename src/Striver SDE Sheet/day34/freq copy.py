# code
class Solution:
     
    def __init__(self):
        self.mapping = {}
     
    def printAllPaths(self, M, m, n):
        if not self.mapping.get((m,n)):
            if m == 1 and n == 1:
                return [M[m-1][n-1]]
            else:
                res = []
                if n > 1:
                    a = self.printAllPaths(M, m, n-1)
                    for i in a:
                        if not isinstance(i, list):
                            i = [i]
                        res.append(i+[M[m-1][n-1]])
                if m > 1:
                    b = self.printAllPaths(M, m-1, n)
                    for i in b:
                        if not isinstance(i, list):
                            i = [i]
                        res.append(i+[M[m-1][n-1]])
            self.mapping[(m,n)] = res
        return self.mapping.get((m,n))
 
grid = [[0,0]]
k = 5
n = len(grid)
m = len(grid[0])
a = Solution()
res = a.printAllPaths(grid,n,m)
count = 0
print(res)
for arr in res:
    if sum(arr) % k == 0 :
        count += 1

print(count)