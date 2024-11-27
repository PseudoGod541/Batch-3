class Shop:
    cart=[] #cart is  a class attribute
    def __init__(self,buyer):
        self.buyer=buyer
    
    def add_to_cart(self,item):
        self.cart.append(item)
Raju=Shop('raju')
Raju.add_to_cart('shoes')
Raju.add_to_cart('phone')
print(Raju.cart)

siam=Shop('siam')
siam.add_to_cart('cap')
siam.add_to_cart('watch')
print(siam.cart)