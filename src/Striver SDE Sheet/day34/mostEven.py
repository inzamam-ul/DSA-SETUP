from bisect import bisect_left
from collections import Counter
from typing import List


def mostFrequentEven(nums) -> int:
    c = Counter(nums)
    c = sorted(c.items(), key=lambda x: -x[1])
    print(c)
    for k, v in c:
        if k % 2 == 0:
            return k
    return -1


def lengthOfLIS(nums: List[int], k: int) -> int:
    if not nums:
        return 0
    
    n = len(nums)
    dp = [1] * n

    for i in range(1, n):
        for j in range(i):
            if nums[i] > nums[j] and nums[i] - nums[j] <= k:
                dp[i] = max(dp[i], 1 + dp[j])
                
    return max(dp)


if __name__ == "__main__":
    # nums = [4,4,4,9,2,4]
    # nums = [8154,9139,8194,3346,5450,9190,133,8239,4606,8671,8412,6290]
    nums = [4,2,1,4,3,4,5,8,15]
    ind = bisect_left(nums, 15)
    k = 3
    # ans = lengthOfLIS(nums, k)
    # print(nums[ind])
    string = list(map(str, nums))
    print(string)      
    
        
