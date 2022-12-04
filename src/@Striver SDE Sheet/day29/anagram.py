s = "anagram"
t = "nagaram"

numberOfLatter = 0
for i in t:
    for j in s:
        print(i," ",j)
        if i == j: numberOfLatter += 1
print(numberOfLatter)
print(len(s))
res = numberOfLatter == len(s)

print(res)

