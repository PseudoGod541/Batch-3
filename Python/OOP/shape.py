from math import pi
class Shape:
    def __init__(self,name) -> None:
        self.name=name

class Rectangle(Shape):
    def __init__(self, name,width,length) -> None:
        self.width=width
        self.length=length
        super().__init__(name)
    
    def area(self):
        return self.length*self.width
    
class Circle(Shape):
    def __init__(self, name,radius) -> None:
        self.radius=radius
        super().__init__(name)

    def area(self):
        return pi*self.radius*self.radius