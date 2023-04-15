import math

a, c = map(int, input().split())

gcd = math.gcd(a, c)
if c % gcd != 0:
print(-1)
else:
b = c // gcd
while b % a != 0:
b += b
print(b)