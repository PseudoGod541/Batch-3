class Food:
    def __init__(self,name,price) -> None:
        self.name=name
        self.price=price
        self.cooking_time=15
        pass

class Burger(Food):
    def __init__(self, name, price,meat,ingridents) -> None:
        self.meat=meat
        self.ingridents=ingridents
        super().__init__(name, price)

class Pizza(Food):
    def __init__(self, name, price,size,topings) -> None:
        self.size=size
        self.topings=topings
        super().__init__(name, price)
    
class Drinks(Food):
        def __init__(self, name, price,isCold = True) -> None:
            self.isCold=isCold
            super().__init__(name, price)

class Menu:
    def __init__(self) -> None:
           self.pizzas=[]
           self.burgers=[]
           self.drinks=[]

    def add_menu_items(self,item_type,item):
        if item_type=='pizza':
               self.pizzas.append(item)
        elif item_type=='burger':
                self.burgers.append(item)
        elif item_type=='drinks':
                 self.drinks.append(item)
    
    def remove_pizza(self,pizza):
        if pizza in self.pizzas:
            self.pizzas.remove(pizza)
    

    def show_menu(self):
        for pizza in self.pizzas:
            print(f'name: {pizza.name} price {pizza.price}')
        for burger in self.burgers:
             print(f'name: {burger.name} price: {burger.price}')
        for drink in self.drinks:
             print(f'name: {drink.name} price: {drink.price}')
        
    
     

    

        
