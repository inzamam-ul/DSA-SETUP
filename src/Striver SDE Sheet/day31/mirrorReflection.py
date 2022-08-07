n = 1000000

print(f"n is {'Odd' if n & 1 else 'Even'}")

prime = [True]*(n+1)
count = 0
i = 2
while i*i <= n:
    if prime[i]:
        for j in range(i*i, n+1, i):
            prime[j] = 0
    i += 1

for p in range(2, n+1):
    if prime[p]:
        count += 1

# print(count)
print([0]*5)