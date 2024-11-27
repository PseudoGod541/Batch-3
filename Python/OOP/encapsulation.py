class Bank:
    def __init__(self,holder_name,initial_deposit,branch) -> None:
        self.holder_name=holder_name #public
        self.__initial_deposit=initial_deposit #private
        self._branch=branch #protected

rafsun=Bank('Choto Vai',10000)

print(rafsun.holder_name)
print(rafsun.__balance)

#encapsulation----> hide details
#access modifier: public,protected,private