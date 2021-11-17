"""
#soccerplayer
class soccerplayer(object):
    def __init__(self,name,position,back_number):
        self.name=name
        self.position=position
        self.back_number=back_number
    def change_back_number(self,new_number):
        print("change backnum:From %d to %d" %(self.back_number,new_number))
        self.back_number=new_number
    def __str__(self):
        return "hello, my name is %s. i play in %s in center"%(self.name,self.position)
jinhyun=soccerplayer("jinhyun","mf",10)

print("back number is",jinhyun.back_number)
jinhyun.change_back_number(5)
print("back number is",jinhyun.back_number)

#ver2
names=["messi","ramos","ronaldo","park","buffon"]
positions=["mf","df","cf","wf","gk"]
numbers=[10,4,7,13,1]

players=[[name,position,number] for name,position,number in zip(names,positions,numbers)]
print(players)
print(players[0])
class soccerplayer(object):
    def __init__(self,name,position,back_number):
        self.name=name
        self.position=position
        self.back_number=back_number
    def change_back_number(self,new_number):
        print("change backnum:From %d to %d" %(self.back_number,new_number))
        self.back_number=new_number
    def __str__(self):
        return "hello, my name is %s. i play in %s in center"%(self.name,self.position)

player_objects=[soccerplayer(name,position,number) for name,position,number in zip(names,positions,numbers)]
print(player_objects[0])
"""
"""
#calculator
class calculator(object):
    def sum(self,x,y):
        print(x+y)
    def minus(self,x,y):
        print(x-y)
    def multiply(self,x,y):
        print(x*y)
    def divide(self,x,y):
        print(x/y)

calc=calculator()
calc.minus(10,5)
"""
"""
#counter
class counter(object):
    def __init__(self,number):
        self.number=number

    def reset(self):
        self.number=0
    def incremet(self):
        self.number+=1
    def get(self):
        print(self.number)

cnt=counter(0)
cnt.get()
cnt.incremet()
cnt.incremet()
cnt.get()
"""
"""
#bank_account
class bankaccount(object):
    def __init__(self,balance):
        self.balance=balance
    def withdraw(self,wi_money):
        self.balance-=wi_money
    def deposit(self,di_money):
        self.balance+=di_money
    def check(self):
        print(self.balance)
bank=bankaccount(4000)
bank.withdraw(30)
bank.check()
bank.deposit(500)
bank.check()
"""
"""
# vehicle info
class Vehicle:
    def __init__(self,make,model,color,price):
        self.make=make
        self.model=model
        self.color=color
        self.price=price
    def setMake(self,make):
        self.make=make
    def getMake(self):
        return self.make
    def getDesc(self):
        return "vihicle=("+str(self.make)+","+\
                str(self.model)+","+\
                str(self.color)+","+\
                str(self.price)+")"

class Truck(Vehicle):
    def __init__(self,make,model,color,price,payload):
            super().__init__(make,model,color,price)
            self.payload=payload
    def setPayload(self,payload):
            self.payload=payload
    def getPayload(self):
            return self.payload

def main():
        myTruck=Truck("tisla","model s","white",10000,2000)
        myTruck.setMake("tesla")
        myTruck.setPayload(2000)
        print(myTruck.getDesc())
main()
"""

