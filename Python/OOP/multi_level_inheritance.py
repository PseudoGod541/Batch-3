class Vehicle:
    def __init__(self,name,price) -> None:
        self.name=name
        self.price=price

    def __repr__(self) -> str:
        return f'{self.name} and {self.price}'
    
    def drive(self):
        return f'gari calai'

class Bus(Vehicle):
    def __init__(self, name, price,type) -> None:
        self.type=type
        super().__init__(name, price)
    def license(self):
        return f'license na thakle vag'

class Truck(Vehicle):
    def __init__(self, name, price,weight) -> None:
        self.weight=weight
        super().__init__(name, price)
    def cakka(self):
        return f'6 cakkar van'
    
class Pickup(Truck):
    def __init__(self, name, price, weight,chasis) -> None:
        self.chasis=chasis
        super().__init__(name, price, weight)
    def cakka(self):
        return f'4 cakkar gari'
    
class ACBus(Bus):
    def __init__(self, name, price, type,temperatur) -> None:
        self.temperature=temperatur
        super().__init__(name, price, type)
    def __repr__(self) -> str:
        print(self.type)
        return super().__repr__()
    
green_line=ACBus('Green Line',2000000,'AC BUus',24)
print(green_line.temperature)

    