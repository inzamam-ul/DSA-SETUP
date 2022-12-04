
grid = [ [ 9, 9, 8, 1 ],
         [ 5, 6, 2, 6 ], 
         [ 8, 2, 6, 4 ], 
         [ 6, 2, 2, 2 ] ]

n = len(grid)-2
# print(n)
ans = [[]*n]

for t in range(n):

    for i in range(t,t+3):
        len = 0
        while len <= 1:

            for j in range(3):
                print(grid[i][j+len], end=" ")
            print('\n')
            len += 1
        print("===================")


    
# print(ans)