a, b = map(int, input().split())

def is_lucky(n) :
    for digit in str(n):
        if digit != '4' and digit != '7':
            return False
    return True

lucky_numbers = []

for num in range(a,b+1):
    if is_lucky(num):
        lucky_numbers.append(str(num))
    
if lucky_numbers:
    print(" ".join(lucky_numbers))
else:
    print (-1)

