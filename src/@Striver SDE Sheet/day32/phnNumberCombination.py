def letterCombinations(digits):
        
    def solve(ans, sub, index, digits, mapping):
        if index >= len(digits):
            ans.append(sub)
            return 
        
        number = int(digits[index])
        targetString =  mapping[number]
        
        for char in targetString:
            sub += char
            
            solve(ans, sub, index + 1, digits, maping)
            
            sub = sub[:-1]
                
            
    ans = []

    if len(digits)==0:
        return ans

    sub = ""
    index = 0
    maping = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]

    solve(ans, sub, index, digits, maping)

    return ans


digits = "235"

# ans = letterCombinations(digits)
a= "a"
print(ord(a)-97)