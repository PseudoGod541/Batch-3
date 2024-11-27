class Phone:
    manufacture='China'

    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price

    def send_sms(self,phone,sms):
        text=f'sending msg to {phone} {sms}'
        print(text)

my_phone=Phone('Kallu','Oppo',10000)
print(my_phone.owner,my_phone.brand,my_phone.price)

her_phone=Phone('She','Iphone',120000)
print(her_phone.owner,her_phone.brand,her_phone.price)

dad_phone=Phone('Abbu','Samsung',80000)
print(dad_phone.owner,dad_phone.brand,dad_phone.price)
