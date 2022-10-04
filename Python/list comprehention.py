# List comprehension

m = [x for x in range(10)]  # using for loop inside square braces
print(m)

print([x*2 for x in range(10)])    

print([x for x in range(10) if x%3 != 0])   # we can also provide some conditions

y = 4
z= 7
# let's see with multiple input variable
n = [(x1,y1,z1) for x1 in range(3) for y1 in range(1,y) for z1 in range(4,z) if (x1+y1+z1)%3 == 0] # tuple as a list's element
print(n,'\n')
