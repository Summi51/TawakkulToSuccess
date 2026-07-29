# or - Find 1st True value
print(0 or 1) # 1
print(False or 'hay') # 'hay'
print('hi' or 'hay') # 'hi'
print([] or False) # False
print(False or []) # []

# and - Find 1st False value
print(0 and 1) # 0
print(False and 'hay') # False
print('hi' and 'hay') # 'hay'
print([] and False) # []
print(False and []) # False