class Restaurent:
    def __init__(self,name,rent,menu=[]) -> None:
        self.name=name
        self.rent=rent
        self.chef=None
        self.server=None
        self.manager=None
        self.menu=menu
        self.balance=0
        self.revenue=0
        self.expense=0
        self.profit=0
        self.order=[]
    

    def add_employee(self,employee_type,employee):
        if employee_type=='chef':
            self.chef=employee
        elif employee_type=='server':
            self.server=employee
        elif employee_type=='manager':
            self.manager=employee
    
    def add_order(self,order):
        self.order.append(order)

    def receive_payment(self,order,amount,customer):
        #print(amount,order.bill)
        if amount>=order.bill:
            self.revenue+= order.bill
            self.balance+= order.bill
            customer.due_amount=0
            return amount-order.bill
        else:
            print('Not Enough Money')
    

    def pay_expenses(self,amount,description):
        if amount<self.balance:
            self.expense+=amount
            self.balance-=amount
            print(f'Expense {amount} for {description}')
        else:
            print(f'Not enough money to pay{amount}')
        
    
    def pay_salary(self,employee):
        if employee.salary<self.balance:
            self.balance-=employee.salary
            self.expense+=employee.salary
            employee.receive_salary()
    
    def show_employee(self):
        print('SHOWING EMPLOYEES')
        if self.chef is not None:
            print(f'Chef: {self.chef.name} with salary: {self.chef.salary}')
        if self.server is not None:
            print(f'Chef: {self.server.name} with salary: {self.chef.server}')
