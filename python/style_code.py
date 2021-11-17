"""
#calculate text
def cal():
    a=eval(input('input: '))
    a=abs(a)
    a=round(a,0)
    a=int(a)

    if 90>=a>=65 or 122>=a>=97:
        print(chr(a))
    else:
        print(str(a))
cal()
"""
"""
#calculate text ver02
def simul(a):
    a=list(map(str,a))
    print("data factor",all(a))
    print("data lenth",len(a))
    print("max value of data",max(a))
    print("when it sorted sequence",sorted(a))
    print("data num",list(enumerate(a)))

simul([1,3,5,"A","b"])
"""
"""
#one point to (0,0) distance
import math as m
def distance(x,y):
    lenth_xy=m.sqrt(x**2+y**2)
    return lenth_xy
a,b=map(float,input("distance()").split())
print(distance(a,b))
"""
"""
#lent book
book={1:'hi',2:'hello',3:'world',4:'great',:5'god',6:'good',7:'ok',8:'word',9:'history',10:'math'}
borrower=[]
def borrow():
    cnt=0
    book_list=[]
    while cnt !=3:
        thisbook=input("book code")
        if thisbook=="q":
            break
        book_list.append(book[int(thisbook)])
        cnt=cnt+1
    return book_list

while True:
    a= input("name please")
    if a=="q":
        break
    borrower[a]=borrow()
print("list is...")
print(borrower)
"""
"""
#multiplication of matrix
matrix_a=[[1,2,3],[2,3,4]]
matrix_b=[[1,1],[2,3],[3,2]]
result=[[sum(a*b for a,b in zip(row_a,column_b)) for column_b in zip(*matrix_b)] for row_a in matrix_a]
print(result)
"""
"""
#friends's friend
def print_all_friends(g,start):
    qu=[]
    done=set()
    qu.append(start)
    done.add(start)
    while qu:
        p=qu.pop()
        print(p)
        for x in g[p]:
            if x not in done:
                qu.append(x)
                done.add(x)
fr_info ={'summer':['john','justin','mike'],
          'john':['summer','justin'],
          'justin':['john','summer','mike','may'],
          'mike':['summer','justin'],
          'may':['justin','kim'],
          'kim':['may'],
          'tom':['jerry'],
          'jerry':['tom']}
print_all_friends(fr_info,"summer")
print()
print_all_friends(fr_info,'jerry')
"""