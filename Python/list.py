#list array collection is same(simple terms)
#index   0  1  2  3  4
numbers=[10,20,30,40,50]
#index   -5 -4 -3 -2 -1
print(numbers[2],numbers[-4])

#list(start:end:step)  start and before end
print(numbers[1:4:1])
print(numbers[1:4:2])
print(numbers[4:1:-1])
print(numbers[4:1:-2])
print(numbers[1:])
print(numbers[:3])
print(numbers[:])#shortcut to copy a list
print(numbers[::-1])#shortcut to reverse a list