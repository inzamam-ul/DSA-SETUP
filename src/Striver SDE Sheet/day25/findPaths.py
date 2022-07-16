
def findPaths(m, n, maxMove, startRow, startColumn):

    memo = {}
    def findPathHelper(r, c, M):
        if (r, c, M) in memo: return memo[(r, c, M)]
        if r<0 or c<0 or r>=m or c>=n: return 1
        if M == 0: return 0
        ans = 0
        for x,y in [(1,0), (-1, 0), (0,1)]:
            ans += findPathHelper(r+x, c+y, M-1)
        print(memo)
        memo[(r, c, M)] = ans
        return ans
    return findPathHelper(startRow, startColumn, maxMove)


m = 2
n = 2
maxMove = 2 
startRow = 0
startColumn = 0

ans = findPaths(m, n, maxMove, startRow, startColumn)
print(ans)