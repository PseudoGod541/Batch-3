from abc import ABC,abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat method
    def eat(self):
        print('i need food')
    
    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self,name) -> None:
        self.name=name
        self.category='Monkey'
        super().__init__()
    
    def eat(self):
        print('kola khai')
    

bandor=Monkey('Jhankar')
bandor.eat()