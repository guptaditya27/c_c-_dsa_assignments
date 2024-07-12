# #topics to cover
# '''
# this is multi line comment in python
# 1.creating class and object
# 2. self keyword
# 3.instance variable
# '''

class Atm:
    def __init__(self):
        self.__pin= self.set_pin()
        self.__balance=0
        self.menu()
    def menu(self):
        a=int(input("""
                    1. for deposit
                    2. for withdraw
                    3. for check balance
                    4. for change pin
                    5 exit


"""))
        if a==1:
            self.deposit()
        elif a==2:
            self.withdraw()
        elif a==3:
            self.account_balance()
        elif a==4:
            new_pin=int(input("enter new pin"))
            self.change_pin(new_pin)
        elif a==5:
            print("thank you !!")
        else:
            print("invalid!!!@@@")
    def set_pin(self):
        a=int(input("create pin"))
        return a
    def withdraw(self):
        if self.check_pin() == 1:
            a=int(input("enter amount to withraw:-"))
            if type(a)==int and a<=self.__balance and a>0:
                self.__balance-=a
                print(f"your updated balance is:-{self._Atm__check_balance()}")
            
            else:
                print("invalid entry for withdraw")
        else:
            print("Wrong pin entered!!!")
    def deposit(self):
        if self.check_pin() == 1:
            a=int(input("enter amount to deposit:-"))
            if type(a)==int and a>0:
                self.__balance+=a
                print(f"your updated balance is:-{self._Atm__check_balance()}")
            else:
                print("invalid entry for Deposit")

        else:
            print("incorrect pin!!!")

    def __check_balance(self):
        return self.__balance
    def account_balance(self):
        print("account balance is|{}".format(self._Atm__balance))

    def check_pin(self):
        a=int(input("enter your pin:-"))
        if a==self.__pin:
            return 1
        else:
            return 0
        
    def change_pin(self,new_pin):
        self.new_pin=new_pin
        self._Atm__pin=self.new_pin
        print("pin updated successfully")
        

# a=Atm()




#creating custom datatype(dunder meathods)
# class Fraction:
#     def __init__(self,n,d):
#         self.num=n
#         self.den=d
#         self.number()



#     def __str__(self):
#             return "{}/{}".format(self.num,self.den)
    
#     def simplify(self,k,p):
#         self.num=k
#         self.den=p
    
#         if self.den<=self.num:
#             i=2
#             while(i<=self.den):
#                 if (self.num%i==0 and self.den%i==0):
#                     self.num=self.num/i
#                     self.den=self.den/i
#                     i=2
                
#                 else:
#                     i=i+1

#         elif (self.den>self.num):
            
#             i=2
#             while(i<=self.num):
                
#                 if (self.num%i==0 and self.den%i==0):
                     
#                     self.num=self.num/i
#                     self.den=self.den/i
#                     i=2
#                 else:
#                     i=i+1
             
#         print("{}/{}".format(self.num,self.den))

# a=Fraction(2,3)




### <<<<--------------- static  keyword ---------->>>>>
# class Language:
#     __counter=1
#     def __init__(self):
#         print("inside constructor")
        
#         Language.__counter+=1

#     @staticmethod
#     def get_counter():
#         return Language.__counter



#aggregation
# class Customer:
#     def __init__(self,name,gender,address):
#         self.name=name
#         self.gender=gender
#         self.address=address
#     def edit_profile(self,new_name,new_city,new_pincode,new_state):
#         self.name=new_name
#         self.address.change_address(new_city,new_pincode,new_state)
# #calling the change_address mtd of Addresss class as it is stored in address attribute.

# class Address():
#     def __init__(self,city,pincode,state):
#         self.city=city
#         self.pincode=pincode
#         self.state=state
#     def change_address(self,new_city,new_pincode,new_state):
#         self.city=new_city
#         self.pincode=new_pincode
#         self.state=new_state



# add=Address("Mainpuri",205001,"UP")
# cust=Customer("Aditya gupta","male",add)#ek object bnate time dursra obj pass as its attribute
# cust.edit_profile("aditi","prayagraj",230204,"UP")
# print(cust.address.state)




#<<<<------------------- inheritence ---------------------------->>>>>>

#1. constructor inheritence
