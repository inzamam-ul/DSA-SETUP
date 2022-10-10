from bisect import bisect_left, bisect_right
from itertools import accumulate
from typing import List


def subsets(nums: List[int]) -> List[List[int]]:
        
    nums.sort()
    result = [[]]
    for num in nums:
        result += [i + [num] for i in result]
    return result

def answerQueries(nums: List[int], queries: List[int]) -> List[int]:
    subsequences = subsets(nums)
    print(subsequences)
    ans = [0]*(len(queries))
    # for i in range(len(queries)):
    #     for sub in subsequences:
    #         if sum(sub) <= queries[i]:
    #             ans[i] = max(ans[i],len(sub))

    # return ans


def removeStars(s: str) -> str:
    i = 0
    s = list(s)
    while "*" in s:
        print(s)
        print("=======================")
        x = bisect_left(s, "*")
        print(x)
        del s[x]
        # print(s)
        i += 1
    return s



def main():
    nums = [2,3,4,5]
    queries = [3,10,21] 

    nums = list(accumulate(sorted(nums)))

    # answerQueries(nums, queries)

    str = "leet**cod*e"
    # str = "erase*****"
    
    # print ("Original string: " + str) 
    
    # # Removing char at pos 3 
    # # using slice + concatenation 
    # res_str = str[:3] +  str[5:] 
    
    
    # print ("String after removal of character: " + res_str) 

    # nums = [2,0,2,1,1,0]
    # ans = sorted(nums)
    # print(ans)
    n = 3
    k = 7
    temp = range(10)
    for i in range(n-1):
        temp = {x*10+y for x in temp for y in [x%10+k, x%10-k] if x and 0 <= y < 10}

    
    print(temp)


if __name__ == "__main__":
    main()



