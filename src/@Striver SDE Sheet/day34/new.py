from collections import defaultdict


def findSubarrays( nums) -> bool:
    def solve(nums, index, ans, output):
        if index >= len(nums): 
            ans.append(list(output))
            
            return None
            
        solve(nums, index+1, ans, output)
        
        output.append(nums[index])
        solve(nums, index+1, ans, output)
        output.pop()
        
        
    # ans = [0]*20
    ans = []
    output = []
    
    index = 0
    solve(nums, index, ans, output)
    print(ans)
    print()
    # for i in ans:
    #     if i > 1: return True
    # return False

def decimalToBinary(N, b):
     
    # To store the binary number
    B_Number = 0
    cnt = 0
    while (N != 0):
        rem = N % b
        c = pow(10, cnt)
        B_Number += rem * c
        N //= b
         
        # Count used to store exponent value
        cnt += 1
    
    
    newNum = list(str(B_Number))
    s, e = 0, len(newNum)-1
    print(newNum)
    while s < e:
        if newNum[s] != newNum[e]:
            return False
        s += 1
        e -= 1

    return True


nums = [1,3,8,48,10]


def printSubArrays(arr, start, end):
    mp = {}
    # Stop if we have reached the end of the array   
    if end == len(arr):
        return
     
    # Increment the end point and start from 0
    elif start > end:
        return printSubArrays(arr, 0, end + 1)
         
    # Print the subarray and increment the starting
    # point
    else:
        print(arr[start:end + 1])
        return printSubArrays(arr, start + 1, end)
         
# Driver code

# printSubArrays(nums, 0, 0)



def numberOfWays(startPos: int, endPos: int, k: int) -> int:
    mem = defaultdict(dict)
    def countWays(pos, step):
        if step == k:
            return 1 if pos == endPos else 0
        if step in mem and pos in mem[step]:
            return mem[step][pos]
        mem[step][pos] = countWays(pos+1, step+1) + countWays(pos-1, step+1)
        print(mem.items())
        return mem[step][pos] 
            
    return countWays(startPos, 0) % (10**9+7)

if __name__ == "__main__":
    # startPos = 1
    # endPos = 2
    # k = 3
    # arr = [3,5,6]
    # arr.insert()
    # ans = numberOfWays(startPos, endPos, k)

    # arr = [1,2,3,4,5,6,7,8,9,10]
    # del arr[2]
    # print(arr.pop())
    # arr.append(5)
    print([None]*5)

