class Bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=100000

    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount>0:
            self.balance+=amount
            print(f'your cash is {self.balance}')
    
    def withdraw(self,amount):
        if amount<self.min_withdraw:
            print('you cant')
        elif amount>self.max_withdraw:
            print('you cant')
        elif amount>self.balance:
            print('dont have sufficient balance')
        else:
            self.balance-=amount
            print(f'here is your money {amount}')
            print(f'your total cash {self.balance}')

brac=Bank(15000)
brac.deposit(15000)
brac.withdraw(30)
brac.withdraw(1000000)
brac.withdraw(25000)
brac.withdraw(40000)
