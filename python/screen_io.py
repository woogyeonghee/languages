
'''
#use print and input
sombody =input('what is ur name\n')
print("hi",sombody,"how r u")
'''

"""
#solve changes 
print("how much is it")
cost=int(input())
per1000=cost//1000
per500=(cost-per1000*1000)//500
per100=(cost-per1000*1000-per500*500)//100
per50=(cost-per1000*1000-per500*500-per100*100)//50
per10=(cost-per1000*1000-per500*500-per100*100-per50*50)//10
per1=(cost-per1000*1000-per500*500-per100*100-per50*50-per10*10)//1

print('per1000:',per1000) ;
print('per500:',per500) ;
print('per100:',per100) ;
print('per50:',per500) ;
print('per10:',per10) ;
print('per1:',per1) ;

#another way of solve changes
per1000=cost//1000
cost=cost%1000
per500=cost//500
cost=cost%500
per100=cost//100
cost=cost%100
per50=cost//50
cost=cost%50
per10=cost//10
cost=cost%10
per1=cost//1
cost=cost%1

print('per1000:',per1000) ;
print('per500:',per500) ;
print('per100:',per100) ;
print('per50:',per500) ;
print('per10:',per10) ;
print('per1:',per1) ;
"""
'''
#sum and avg
name=input('enter ur name')
kor=input('enter ur kor score')
mat=input('enter ur mat score')
soc=input('enter ur soc score')
sci=input('enter ur sci score')
eng=input('enter ur eng score')
print(name,'ur score is\n')
sum=float(kor)+float(mat)+float(soc)+float(sci)+float(eng)
avg=float(sum)/5
print('sum : ',sum,'avg : ',avg)
'''
'''
#input lots of members
name1,name2,name3=input('input three names : ').split(',')
print(name1,"happy new year")
print(name2,"happy new year")
print(name3,"happy new year")
'''
'''
#ax2+bx+c use root
import cmath;
print("this is quadratic equation : ax2+bx+c")
a = float(input('a : '))
b = float(input('b : '))
c = float(input('c : '))
print("quadratic equation is ",a,'x2 +',b,'x +',c)
d=-b
f=cmath.sqrt(b**2-4.0*a*c)
e=int(2*a)
print(d,'+-',f)
print('------------')
print(e)
'''
'''
#packing and unpacking
t=[3,1,2]
t.sort()
print(t)
t.reverse()
print(t)
a,b,c=t
print(t,a,b,c)
print(t.index(2))
t.insert(1,55)
print(t)
f=[3,4]
t.extend(f)
print(t)
t.append(f)
print(t)
'''
"""
#new student and add number
student=['lee','yull','won']
print("student:",end=" ")
for i in student:
    print(i,end=" ")
student.append(input('\nwho is new student: '))
print("new student index....")
for i in range(0,len(student)):
    print(i+1,end =" ")
    print(student[i])
"""
