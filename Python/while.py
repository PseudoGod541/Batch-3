num=input()
num_int=int(num)
print(type(num_int))
while num_int<=10:
    num_int = num_int+1
    if num_int%2==0:
        continue
    print(num_int)
    if num_int==8:
        break
    # continue means skip