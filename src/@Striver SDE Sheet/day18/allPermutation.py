# for numbers
'''
def recurPermute(self, ind, nums, ans):
    if ind == len(nums):
        ans.append(list(nums))
        return
    
    for i in range(ind, len(nums)):
        nums[ind] , nums[i] = nums[i], nums[ind]          
        self.recurPermute(ind+1, nums, ans)
        nums[ind] , nums[i] = nums[i], nums[ind]
'''

# for string
def recurPermute(ind, nums, ans):
    if ind == len(nums):
        permutation = ""

        for k in range(len(nums)):
            permutation += (nums[k])
        ans.append(permutation)
        return

    for i in range(ind, len(nums)):
        nums[ind] , nums[i] = nums[i], nums[ind]
        recurPermute(ind+1, nums, ans)
        nums[ind] , nums[i] = nums[i], nums[ind]

def printPermutations(s):
    ans = []
    recurPermute(0,s,ans)
    print(ans)


s = "exqc"
s = list(s)
printPermutations(s)