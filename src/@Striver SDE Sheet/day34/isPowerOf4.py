from collections import defaultdict


def isPowerOfFour(n: int) -> bool:
    if n <= 0: return False
    
    if n & n-1 != 0: return False
    
    b = bin(n)[::-1]
    print(b)
    p = b.index("1")
    return p % 2 == 0


def main():
    n = 8

    # ans = isPowerOfFour(n)

    ans = 0
    # mpp = defaultdict(lambda: 0)
    # mpp["a"] += 1
    # for val in mpp.values():
    #     print(val)

    str1 = "321"
    str2 = "123"
    if sorted(str2) == sorted(str1):
        print(True)
    else:
        print(False)


if __name__ == "__main__":
    main()

