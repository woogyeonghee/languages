"""
#abbreviation
str_in=input("please input string,if u input q it will quit\n")
if str_in != 'q':
    str_list=str_in.split()
    for i in range(0,len(str_list)):
        print(str_list[i][0])
"""
"""
#find in lyrics
filePath = 'C:/Users/user/PycharmProjects/python/yesterday.txt'
f=open("yesterday.txt",'r')
yesterday_lyric = f.readlines()
f.close
print(yesterday_lyric[0])
hap=0
find_letter=input('what u want to find')
for i in range(0,len(yesterday_lyric)):
    b=yesterday_lyric[i].count(find_letter)
    hap=hap+b
for i in range(0,len(yesterday_lyric)):
    print(find_letter,end=' ')
    print(yesterday_lyric[i].find(find_letter),end=' ')
    print('/',hap)
"""
"""
# name list upload
def upload(a,all_list):
    upload_list=a
    print(upload_list)
    all_list.append(upload_list)
    print(all_list)
    return all_list
all_list=[]
condition = True
while condition == True:
    a=input('data: ').split()
    if a != ['q']:
        upload(a,all_list)
    else:
        condition =False
"""
"""
#resident registration number
input_number=list(map(int,input('input resident registration number\n')))
print(input_number)
check_num=[2,3,4,5,6,7,8,9,2,3,4,5]
condition =True
hap=0
while condition == True:
    if len(input_number) == 13:
        for i in range (0,12):
            a=input_number[i]*check_num[i]
            hap=hap+a
        check_hap=hap%11
        rest_hap=11-check_hap
        if rest_hap>9:
            rest_hap=rest_hap-10
        if rest_hap==input_number[12] :
            print("right")
            condition = False
        else:
            print("wrong")
    else:
        print("wrong")
    if condition ==True:
        input_number=list(map(int,input('input resident registration number\n')))
        hap=0
print("correct")
"""
"""
#typing test
import random
import time
z=input('press enter to start')
begin=time.time()
w=["cat","dog","fox","monkey","mouse","panda","frog","snake","wolf"]
ran_f=[]
for i in range (0,5):
    a=random.choice(w)
    ran_f.append(a)
    w.remove(a)
for i in range(0,5):
    condition=True
    while condition ==True:
        print("question",i+1)
        print(ran_f[i])
        b=str(ran_f[i])
        inp_str=input()
        a=inp_str.lower()
        if ran_f[i]==a:
            condition = False
end=time.time()
result=end-begin
print(result)
"""