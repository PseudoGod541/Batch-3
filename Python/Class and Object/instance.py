class Shop:

    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[] #cart is an instance attribute
    def add_to_cart(self,item):
        self.cart.append(item)
Raju=Shop('raju')
Raju.add_to_cart('shoes')
Raju.add_to_cart('phone')
print(Raju.cart)
print(Raju.buyer)

siam=Shop('siam')
siam.add_to_cart('cap')
siam.add_to_cart('watch')
print(siam.cart)