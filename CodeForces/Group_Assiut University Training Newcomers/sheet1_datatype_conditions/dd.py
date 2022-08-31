string = input()
for ltr in string:
if ord(ltr) > 65 and ord(ltr) <91:
print(ltr ,"is upper")
elif ord(ltr) > 97 and ord(ltr) < 122:
print(ltr ,"is lower")
else:
print("Whoops! Non alpha")