N = input()
reversed_N = N[::-1]
reversed_N = reversed_N.lstrip('0')
print(reversed_N)

if N == N[::-1]:
    print("YES")
else:
    print("NO")
