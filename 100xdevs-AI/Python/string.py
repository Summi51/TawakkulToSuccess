# String 
name = 'Sum'; 
name1 = "Sum1"

age1 = str(22)
print(age1) # 22

print(""" sum is
28 years old """ )

# sum is
# 28 years old 


# cook your dish here
# string method

print("sum".upper()) # SUM
print("Sum".lower()) # sum
print("sum".title()) # Sum - 1st upper and then lower case
print("Sum".islower()) # False
print("sum".islower()) # True
print("sum".isalpha()) # True - check char and not empty
print("99".isalnum()) # True - check digit and not empty
print("99".isdecimal()) # True - check decimal and not empty
print("sgn".islower()) # True - check is lower case 
print("sgn".isupper()) # False - check is upper case


print("sgn".startswith('s')) # True
print("sg".endswith("g")) # True

print("sg".replace("s", "k")) # string.replace(old, new) # kg

print("sum".split()) # ['sum'] , char saparatoe

print(" sum".strip()) # trim white space # sum

print(",".join("samreen")) # s,a,m,r,e,e,n

print("sum".find("m")) # 2

print(len("sum")) # 3
