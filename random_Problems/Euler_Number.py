"""
Write a program to compute the value of 
Euler's number e, that is used as the base of 
natural logarithms. Use the following 
formula. e=1+1/1! +1/2+1/3+...+1/n!
"""

def factorial_result(n):
   result = 1
   for i in range(2, n + 1):
      result *= i
   return result

def sum_result(n):
   s = 0.0

   for i in range(1, n + 1):
      s += 1.0 / factorial_result(i)
   print(s)

my_value = 5
print("The value is :")
print(my_value)
print("The result is :")
sum_result(my_value)
