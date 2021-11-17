"""
#palindrome
a=input('sentence')
b=a.lower()
f=b.replace(" ","")
g=f.replace(",","")
h=g.replace("'","")
i=h.replace(".","")

d=list(i)
print(d)
c=[]
for _ in range(len(d)):
    c.append(d.pop())
print(c)
k=0
for i in range(0,len(d)):
    if d[i] != c[i]:
        k=3

if k==0:
    print("true")
else:
    print("not true")
"""
"""
def process(w):
    output=""
    fot ch in w:
        if(ch.isapha()):
            output+=ch
        return output.lower()

filepath = 'c:/users/user/pycharmprojects/python/proverbs.txt'
f=open("proverbs.txt",'r')
for line in file:
    lienwords=line.split()
    fot word in linwords:
        words.add(process(word))
print("number of word",len(words))
print(words)
word_test = f.readlines()
f.close
"""
"""
#storge and sum
stor={'tea':[2,6000],'cup':[3,15000],'coffee':[1,3000]}
money=0
money_sum=0
for a in store keys():
    money=0
    if stor[a][0]<=3:
        money=(3-store[a][0])*store[a][1]
        print(a,3-store[a][0],money)
        money_sum=money_sum+money
print("sum",money_sum)
"""
"""
#del 
a={'a','b','c','d','e'}
b={'c','d','e'}
if a>=b:
    del b
print(b)
"""
"""
# text mine promgram
test="""""".lower().split()

from collections import defaultdict

word_count = defaultdict(lambda: 0)
for word in text:
    word_count[word]+=1
    
from collections import OrderDict
for i,v in OrderDict(sorted(word_count.items(),key=lambda t: t[1])),reverse=true)).items():
    print(i,v)
"""
"""
def find_same_name(a):
    name_dict={}
    for name in a:
        if name in name_dict:
            name_dict[name]+=1
        else:
            name_dict[name]=1
    result=set()
    for name in name_dict:
        if name_dict[name]>=2:
            result.add(name)

    return result

name=["tom","jerry","mike","tom"]
print(find_same_name(name))

name=["tom","jerry","mike","tom","mike"]
print(find_same_name(name))
"""