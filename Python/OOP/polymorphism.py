# poly---> many
# morph ----> shape


class Animal:
    def __init__(self,name) -> None:
        self.name=name
    
    def make_sound(self):
        print('making sound')
    
class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print('meow meow')

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print('gheu gheu')

class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print('Best')

biral=Cat('Bilai')
biral.make_sound()

shepard=Dog('German Shepard')
shepard.make_sound()

mess=Goat('LM10')
mess.make_sound()

less=Goat('ron')

animals=[biral,shepard,mess,less]
for animal in animals:
    animal.make_sound()
