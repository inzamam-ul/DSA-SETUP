def TotalWays(n, s, k):
 
    # Initialize dp array
    dp = [0]*n
 
    # Initialize (s-1)th index to 1
    dp[s - 1] = 1
 
    # Iterate a loop from s to n
    for i in range(s, n):
 
        # starting range for counting ranges
        idx = max(s - 1, i - k)
 
        # Calculate Maximum moves to
        # Reach ith step
        for j in range( idx, i) :
            dp[i] += dp[j]
 
    # For nth step return dp[n-1]
    return dp[n - 1]
 
# Driver Code
if __name__ == "__main__":
    # no of steps
    n = 3
 
    # Atmost steps allowed
    k = 2
 
    # starting range
    s = 1

    startPos = 1
    endPos = 2
    k = 3
    print("Total Ways = ", TotalWays(n, s, k))

    dp = [[-1]*k]*3001
    print(dp)