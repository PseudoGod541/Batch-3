from menu import Pizza,Burger,Drinks,Menu
from restaurent import Restaurent
from users import *
from order import *
def main():
    # add pizza
    menu=Menu()
    pizza_1=Pizza('Shutki Pizza',600,'large',['shutki','oniom'])
    menu.add_menu_items('pizza',pizza_1)
    pizza_3=Pizza('Dal Pizza',500,'large',['dal','oil'])
    menu.add_menu_items('pizza',pizza_3)
    pizza_2=Pizza('Alur Vorta Pizza',400,'large',['potato','onion','dal'])
    menu.add_menu_items('pizza',pizza_2)
    
    # add burger
    burger_1=Burger('Naga Burger',1000,'chicken',['bread','chilli'],)
    menu.add_menu_items('burger',burger_1)

    # add drinks
    coke=Drinks('Coke',50,True)
    menu.add_menu_items('drinks',coke)
    coffee=Drinks('Coffee',100, False)
    menu.add_menu_items('drinks',coffee)

    #show menu
    menu.show_menu()

    restaurent= Restaurent('Sai Baba Restaurent',2000,menu)

    # add employee
    manager=Manager('Kala Chan',2000,'Jan 1 2020','core','01864392618','fiuqwheui@gmail.com','Sai Baba Restaurent')
    restaurent.add_employee('manager',manager)

    chef=Chef('Rustom',1500,'20 Jan 2020','Chef','01846296481','hfueiwhfeu@gmail.com','Saibaba Restaurent','Pizza')
    restaurent.add_employee('chef',chef)

    server=Server('Chotu',1000,'20 Feb 2020','Server','01837184931','febuie@gmail.com','SaiBaba Restaurent')

    # show employees
    restaurent.show_employee() 
    # customer_1 placing an order
    customer_1=Customer('Sakib Khan',10000,'01895719063','wfiufheiu@gmail.com','Bonani')
    order_1=Order(customer_1,[pizza_3,coffee])
    customer_1.pay_for_order()
    restaurent.add_order(order_1)

    # customer_1 paying for order_1
    restaurent.receive_payment(order_1,2000,customer_1)

    # customer_2 placing an order
    customer_2=Customer('Rakib Khan',1000,'01895719063','wfiufheiu@gmail.com','Kolkata')
    order_2=Order(customer_2,[pizza_2,coke])
    customer_2.pay_for_order()
    restaurent.add_order(order_2)

    # customer_2 paying for order_2
    restaurent.receive_payment(order_2,2000,customer_2)

    # pay rent
    restaurent.pay_expenses(restaurent.rent,'Rent')

    # pay salary
    restaurent.pay_salary(chef)


if __name__ =='__main__':
    main()