import math
import time
def timer(func):
    def inner(*args,**kwargs):
        print('time started')
        start=time.time()
        func(*args,**kwargs)
        print('time ended')
        end=time.time()
        print(f'total time taken{end-start}')
    return inner

#timer()()

@timer
def get_factorial(n):
    print('factorial starting')
    result=math.factorial(n)
    print(f'factorial of {n} is: {result}')

#timer(get_factorial)()
get_factorial(5)
