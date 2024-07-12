#this is single line comment in python
#single inheritence
class Phone:
    def __init__(self,brand,price):
        print("inside phone constructor")
        self.price=price
        self.brand=brand
    def Buy(self):
        print("buying a phone")
    def get_price(self):
        return self.price
    def set_price(self,other):
        self.price=other
    
class Smartphone(Phone):
    def Buy(self):
        print("Buying a Smartphone")

s=Smartphone("apple",100000)
print(s.get_price())
s.set_price(150)
print(s.get_price())
