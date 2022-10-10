from collections import Counter

def minSetSize(arr):
    counter = Counter(arr)
    N = len(arr)
    n = 0
    output = 0
    for k, v in sorted(counter.items(), key=lambda x: -x[1]):

        n += v 
        output += 1 
        if n >= N//2:
            break
    return output



def minimumRecolors(blocks: str, k: int) -> int:
    def solve(blocks, index, k, count, tempCnt):

        if index > len(blocks): 
            count = min(count, tempCnt)
            return 
        
        for i in range(index, len(blocks)):
            
            charList = list(blocks)
            charList[5] = 'B'
            string = ''.join(charList)
            tempCnt += 1
            print(tempCnt)
            counter = Counter(string)
            if counter.get('B') < k :
                # print("less")
                solve(string, i + 1, k, count, tempCnt)

    
    count = 0
    tempCnt = 0
    solve(blocks, 0, k, count, tempCnt)
    return count


def secondsToRemoveOccurrences(s: str) -> int:

    count = 0

    while True:
        if "01" in s:
            # print(s)
            s = s.replace("01", "10")
            count += 1
        else:
            break
    return count


def shiftingLetters(s, shifts):
    charList = list(s)
    print(charList)
    for shift in shifts:

        for i in range(shift[0], shift[1]+1):
            if shift[2] == 1:
               charList[i] = chr((ord(charList[i]) + 1 ) % 97)
            else:  
                charList[i] = chr((ord(charList[i]) - 1 ) % 97)
                
    string = ''.join(charList)
    print(string)
    return string

def main():
    # arr = [2,2,3,3,3,3,5,5,5,7]
    # ans = minSetSize(arr)



    blocks = "WBBWWBBWBW"
    k = 7

    # s = "0110101"
    # ans = secondsToRemoveOccurrences(s)

    # print(ans)

    s = "abc"
    shifts = [[0,1,0],[1,2,1],[0,2,1]]

    ans = shiftingLetters(s, shifts)
    print(ans)




if __name__ == "__main__":
    main()