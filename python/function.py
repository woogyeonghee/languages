"""
#decimal
def is_prime(a):
    c=0
    for i in range(1,a+1):
        if a%i==0:
            c=c+1
    if c>2:
        print("it is not decimal")
    else:
        print("it is decimal")

a=int(input('enter ur num\n'))
is_prime(a)
"""
"""
#check double squre point
import math
a=float(input('p1x'))
b=float(input('p1y'))
c=float(input('p2x'))
d=float(input('p2y'))
e=float(input('u1x'))
f=float(input('u1y'))
g=float(input('u2x'))
h=float(input('u2x'))

p_m=[(a+c)/2.0,(c+d)/2.0]
u_m=[(e+g)/2.0,(f+h)/2.0]
print(p_m,u_m)
z=math.sqrt((p_m[0]-u_m[0])**2+(p_m[1]-u_m[1])**2)
x=math.sqrt((a-c)**2.0+(b-d)**2.0)
y=math.sqrt((e-g)**2.0+(f-h)**2.0)
if z*2.0==x+y:
    print("1point")
if z*2.0 > x+y:
    pirnt("no point")
if z*2.0 < x+y:
    print("2point")
"""
"""
#keyword variable-lenth argument
def num(**x):
    print("a is {a}".format(**x))
num(a=3)
"""
"""
#max value
num_str=input("insert number list: ")
num_list=num_str.split()
print(num_list)
max_num=0
for i in range(0,len(num_list)):
    if i==len(num_list)-1:
        break
    if num_list[i]>num_list[i+1]:
        max_num=int(num_list[i])
    else:
        max_num=int(num_list[i+1])
print(max_num)
found=str(max_num)
print(num_list.index(found))
#another way
def find_max_idx(a):
    n=len(a)
    max_idx=0
    for i in range(1,n)
        if a[i] >a[max_idx]
            max_idx=i
    return max_idx
v= list(map(int,input('insert number list')
print(find_max_idx(v))    
"""
"""
#find number
num_str=input("insert number list: ")
num_list=num_str.split()
num_str_find=input("insert find number: ")
num_list_find=num_str_find.split()
same_num=[]
for j in range (0,len(num_list_find)):
    for i in range(0, len(num_list)):
        if num_list[i] == num_list_find[j]:
            same_num.append(num_list_find[j])
print(same_num)
for i in range (0,len(same_num)):
    if same_num[i] == '-1':
        print(same_num[i])
    else:
        print(num_list.index(same_num[i]))
#another way
def search_list(a,x)
    n=len(a)
    for i in range(0,n)
        if x==a[i]
            return i
    return -1
v=[17,92,18,33,58,5,33,42]
print(search_list(v,18)
print(search_list(v,33)
print(search_list(v,900)
"""


