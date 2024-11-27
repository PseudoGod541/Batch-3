def call():
    print('calling someone i dont know')
    return 'call done'

class Phone:
    price=20000
    color='blue'
    brand='iphone'
    features=['camera','speaker','hammer']

    def call(self):
        print('calling one person')
    def send_sms(self,phone,sms):
        text=f'sending SMS to: {phone} and message: {sms}'
my_phone=Phone()
print(my_phone.features)
my_phone.call()
result=my_phone.send_sms(41524,'tui gay')
print(result)