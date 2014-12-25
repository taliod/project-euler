a = 1
b = 1
sum = 0

max = 4000000
while a < max and b < max:
    a += b
    b += a
    if a % 2 == 0:
        sum += a
    if b % 2 == 0:
        sum += b
print(sum)
