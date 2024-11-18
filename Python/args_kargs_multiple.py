#'def sum(num1,num2,num3=0,num4=0,num5=0)'
#    'summation=num1+num2+num3+num4+num5'
#    'return summation'
#'total=sum(10,15)'
#print(total)

#args
'add * sign it will make looks like upper code it is called args'
#def all_number(*numbers):
 #   print(numbers)
 #   sum=0
 #   for num in numbers:
 #       print(num)
 #       sum=sum+num
 #   return sum
#total=all_number(10,12,14,16)
#print(total)

#def full_name(first,last):
 #   name=f'{first} {last}'
 #   return name
#identity=full_name('Fardin', 'Kaiser')
#print(identity)

def famous_name(first,last,title,**addition):
    name=f'{title} {first} {last} {addition}'
    for key,value in addition.items():
        print(key,value)
    return name
identity=famous_name(first='Fardin', last='Kaiser', title='Sir', addition='Great')
print(identity)
# forn *args can define multiple variable at once
#from *kargs can define key multiple variable
def a_lot(num1,num2):
    sum=num1+num2
    mult=num1*num2
    sub=num1-num2
    return sum, mult, sub
everything=a_lot(20,30)
print(everything)
    