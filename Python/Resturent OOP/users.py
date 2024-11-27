from abc import ABC, abstractmethod
class User(ABC):
    def __init__(self,name,phone,email,address) -> None:
        self.name=name
        self.phone=phone
        self.email=email
        self.address=address
        super().__init__()

class Customer(User):
    def __init__(self,name,money,phone,email,address) -> None:
        self.wallet=money
        self.__order=None
        self.due_amount=0
        super().__init__(name,phone,email,address)

    @property
    def order(self):
        return self.__order
    
    @order.setter
    def order(self,order):
        self.__order=order
    
    def place_order(self,order):
        self.order=order
        self.bill_due+=order.bill
        print(f'{self.name} placed an order with bill {order.bill}')

    def eat_food(self,order):
        print(f'{self.name} item food {order.items}')
    
    def pay_for_order(self,order):
        pass

    def give_tips(self,tips,_amount):
        pass

    def write_review(self,stars):
        pass


class Employee(User):
    def __init__(self, name,salary,starting_date,department,phone,email,address) -> None:
        self.salary=salary
        self.starting_date=starting_date
        self.department=department
        self.due=salary
        super().__init__(name,phone,email,address)

    def receive_salary(self,amount):
        self.due=0

class Chef(Employee):
    def __init__(self, name, salary, starting_date, department, phone, email, address,cooking_item) -> None:
        self.cooking_item=cooking_item
        super().__init__(name, salary, starting_date, department, phone, email, address)


class Server(Employee):
    def __init__(self, name, salary, starting_date, department, phone, email, address) -> None:
        self.tips_earning=0
        super().__init__(name, salary, starting_date, department, phone, email, address)
    

    def take_order(self,order):
        pass

    def transfer_order(self,order):
        pass

    def serve_food(self,order):
        pass

    def receive_tips(self,amount):
        self.tips_earning+=amount


class Manager(Employee):
    def __init__(self, name, salary, starting_date, department, phone, email, address) -> None:
        super().__init__(name, salary, starting_date, department, phone, email, address)