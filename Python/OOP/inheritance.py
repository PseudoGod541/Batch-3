# base class,parent class,common attribute+functionality class
#derived class,child class,uncommon attributes+functionality

#make a common class containing common attribute and function
#Base class
class Gadget:
    def __init__(self,brand,price,color,origin):
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin
    
    def run(self):
        return f'Running laptop: {self.brand}'
    
#uncommon attributes and function
#Derived Class
class Laptop:
    def __init__(self,memory,ssd) -> None:
        self.memory=memory
        self.ssd=ssd

    def coding(self):
        return f'learning python'
    
class Phone(Gadget):
    def __init__(self,brand,price,color,origin,dual_sim) -> None:
        self.dual_sim=dual_sim
        super().__init__(brand,price,color,origin)
    
    def __repr__(self) -> str:
        return f'phone:'

    def phone_call(self,number,text):
        return f'Sending SMS to: {number} with {text}'

class Camera:
    def __init__(self,pixel) -> None:
        self.pixel=pixel

    def change_lens(self):
        pass
my_phone=Phone('Samsung',80000,'Blue','China',"Yes")


"""
1. simple inheritance: Parent class----->children class

2. multilevel inheritance: Grandpa-->Parent-->Child

3. multiple inheritance: not imp
                        Student(Family,School,Sports)

4. Hybrid inheritance
"""