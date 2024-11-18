numbers=[45,87,96,65,43,90,85,14,26,61,70]
odds=[]
for num in numbers:
    if num%2==1 and num%5==0:
        odds.append(num)
print(odds)

#it can be written like following also
odd_nums=[num for num in numbers if num%2==1 and num%5==0]
print(odd_nums)