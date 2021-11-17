'''
#vaccine
vaccine=['tuberculosis','hepatitis b','tetanus','pneumococci']
birth=int(input())
if birth == 1:
    print(vaccine[0])
if birth == 2:
    print(vaccine[0],vaccine[1])
if birth == 3:
    print(vaccine[2],vaccine[3])
if birth == 4:
    print(vaccine[2],vaccine[3])
if birth == 5:
    print(vaccine[3])
'''
'''
#string middle value
str_print=input('insert string\n')
p=int(len(str_print))
print(p)
if (p%2) == 1:
    print(str_print[p//2])
else:
    print(str_print[(p//2)-1],end=" ")
    print(str_print[(p//2)])
'''
'''
#find pass or no pass
kor=input('kor : ')
eng=input('eng : ')
his=input('his : ')
sle1=input('sle1 : ')
sle2=input('sle2 : ')
t=[int(kor),int(eng),int(his),int(sle1),int(sle2)]
a=0
for i in range(0,5):
    if t[i]<40:
        a=1
        break;
if a == 1:
    print('not pass')
else:
    print('pass')
'''
'''
#vending machine
money=int(input("insert money\n"))
drink=['cyder','cola','water']
d_money=[700,800,1200]
a=int(input("chose)1-cyder,2-cola,3-water\n"))
for i in range(1,4):
    if a == i:
        drink=drink[i-1]
        changes=money-int(d_money[i-1])
print("here is",drink)
print("here is change,",changes)
'''
"""
# rock scissors paper
import random as rd;
user=input("rock,scissors,paper\n")
usernumber = None
if user == 'rock': usernumber=0
if user == 'scissors': usernumber=1
if user == 'paper': usernumber=2
number=rd.randint(0,2);
# hard way
if usernumber == number:
    print("no winner")
else:
    if usernumber > number:
        if (usernumber-number)==1:
            print("computer win")
        else:
            print("user win")
    else:
        if (number-usernumber)==1:
            print("user win")
        else:
            print("computer win")
# easy way
if usernumber == 0 and number== 1:
    print("user win")
if usernumber == 1 and number== 2:
    print("user win")
if usernumber == 2 and number== 0:
    print("user win")
if usernumber == 1 and number== 0:
    print("computer win")
if usernumber == 2 and number== 1:
    print("computer win")
if usernumber == 0 and number== 2:
    print("computer win")
if usernumber == 1 and number== 1:
    print("no winner")
if usernumber == 2 and number== 2:
    print("no winner")
if usernumber == 0 and number== 0:
    print("no winner")
"""
"""
# change degree
de_limit=int(input("degree limit: "))
width=int(input("width: "))
for i in range(0,de_limit,width):
    c=(float(i)-32.0)*(5.0/9.0)
    print(i,"->",c)
"""
"""
#solve number of digits hap 
str=input()
hap=0
for i in range(0,len(str)):
    hap=hap+int(str[i])
print(hap)
"""
"""
#guess number game
import random as rd;
number=rd.randint(1,101);
print("what is ur number?")
i_number=int(input())
condition=True
while condition==True:
    if i_number > number:
        print("ur number is too big")
        print("enter again!")
        i_number=int(input())
    elif i_number < number:
        print("ur number is too small")
        print("enter again!")
        i_number=int(input())
    else:
        print("correct!")
        condition=False
"""
"""
#multrplication table
condition=True
while condition == True:
    table=int(input("1~9?\n"))
    if table == 0:
        condition = False
    else:
        for i in range(1,10):
            one_line=i*table
            print(i,'*',table,'=',one_line)
"""
"""
#managing list
input_num=int(input("1.print list\n2.add list\n3.del list\n4.repalce list\n5.quit\n"))
list_=['example','example2','example3'] # list

def print_list(list_):
    print(list_)  # print list

def add_list(list_):
    print("add please: ")
    in_put = input()  # input list
    list_.append(in_put)  # add list
    return list_

def del_list(list_):
    print("del please: ")
    in_put = input()  # input list
    list_.remove(in_put) # del list
    return list_

def relace_list(list_):
    print("select list: ")
    in_put = input()  # input list
    a=list_.index(in_put)
    print("change to what?: ")
    in_put2=input() # input second list
    list_[a]=in_put2 # replace 
    return list_

condition = True
while condition ==True:
    if input_num == 1:
        print_list(list_)
    elif input_num == 2:
        add_list(list_)
    elif input_num == 3:
        del_list(list_)
    elif input_num == 4:
        relace_list(list_)
    else:
        condition ==False
    input_num=int(input("1.print list\n2.add list\n3.del list\n4.repalce list\n5.quit\n"))
"""
"""
#baseball game
import random as rd;
number=[rd.randint(0,10),rd.randint(0,10),rd.randint(0,10)]
print("please input 1 number(0~9)")
user_nu=[int(input('first')),int(input('second')),int(input('third'))]
s=0
b=0
o=0
condition=True
while condition == True:
    for i in range(0,3):
        if number[i] ==user_nu[i]:
            s=s+1
        elif number[0] == user_nu[i] or number[1] == user_nu[i] or number[2] == user_nu[i]:
            b=b+1
        else:
            o=1
            break
    print(number)
    print('ball',b,'strike',s,'out',o)
    user_nu=[int(input('first')),int(input('second')),int(input('third'))]
    if user_nu[0]==10:
        condition =False
    if s==3
        break
    if b==4
        break
print('ball',b,'strike',s,'out',o)
"""