
# Python3 program to get same frequency character
# string by removal of at most one char
from collections import defaultdict



M = 26
 
# Utility method to get index of character ch
# in lower alphabet characters
def getIdx(ch):
    return (ord(ch) - ord('a'))
 
# Returns true if all non-zero elements
# values are same
def allSame(freq, N):
     
    # get first non-zero element
    for i in range(0, N):
        if(freq[i] > 0):
            same = freq[i]
            break
         
    # check equality of each element
    # with variable same    
    for j in range(i + 1, N):
        if(freq[j] > 0 and freq[j] != same):
            return False
 
    return True
 
# Returns true if we can make all
# character frequencies same
def possibleSameCharFreqByOneRemoval(str1):
    l = len(str1)
 
    # fill frequency array
    freq = [0] * M
    for i in range(0, l):
        freq[getIdx(str1[i])] += 1
         
    # if all frequencies are same,
    # then return true
    if(allSame(freq, M)):
        return True
     
    # Try decreasing frequency of all character
    # by one and then check all equality of all
    # non-zero frequencies
    for i in range(0, 26):
         
        # Check character only if it
        # occurs in str
        if(freq[i] > 0):
            freq[i] -= 1
 
            if(allSame(freq, M)):
                return True
            freq[i] += 1
 
    return False

def isSame(freq):
    # print(freq)
    for j in range(0, len(freq)-1):
        if abs(freq[j] - freq[j+1]) > 0:
            return False

    return True 

def isPossible(word):
    temp = set()
    mapper = defaultdict(int)
    print(len(word))
    for i in range(len(word)):
        new_word = word[:i] + word[i+1:]
        print(new_word)
        freq = defaultdict(int)
        for ch in new_word:
            freq[ch] += 1
        print(list(freq.values()))
        if isSame(list(freq.values())): return True
        
    return False


# Python implementation of program
from math import sqrt
 
 
# Function to calculate gcd of two numbers
def gcd(a, b):
     
    if a == 0:
        return b
    return gcd(b % a, a)
   
# Function to calculate all common divisors
# of two given numbers
# a, b --> input integer numbers
def commDiv(a, b):
     
    # find GCD of a, b
    n = gcd(a, b)
 
    # Count divisors of n
    result = 0
    for i in range(1,int(sqrt(n))+1):
 
        # if i is a factor of n
        if n % i == 0:
 
            # check if divisors are equal
            if n/i == i:
                result += 1
            else:
                result += 2
                 
    return result


 
# Function to find the maximum sum of hour glass
def MaxSum(arr):
    R = len(arr)
    C = len(arr[0])
    max_sum = -50000 
     
    if(R < 3 or C < 3):
        exit()

    for i in range(0, R-2):
        for j in range(0, C-2):

            SUM = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2]) + (arr[i + 1][j + 1]) +       (arr[i + 2][j] +
                    arr[i + 2][j + 1] + arr[i + 2][j + 2])
 
            if(SUM > max_sum):
                max_sum = SUM
            else:
                continue
 
    return max_sum
 

def minVal(a, b):
 
    noOfSet = bin(b).count('1')
    res = 0
 
    for i in range(30, -1, -1):
        mask = (1 << i)
        s = (a & mask)
 
        if (s and noOfSet > 0):
            res |= (1 << i)
            noOfSet -= 1
        i = 0
    while(noOfSet > 0):
        mask = (1 << i)
        if (res & mask) == 0:
            res |= (1 << i)
            noOfSet -= 1
        i += 1
 
    return res
 
# Driver code
if __name__ == "__main__":
    str1 = "abab"
    a = 25
    b = 30
    # print(commDiv(a, b))

    arr = [[1,2,3],[4,5,6],[7,8,9]]
    res = MaxSum(arr)
    # print(res)

    a = 1
    b = 12
 
    print(minVal(a, b))