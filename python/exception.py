
"""
#find name
my_dict={"hong":"2000/03/01","lee":"1930/03/11","moon":"1970/01/20"}
condition= True
while condition==True:
    key =input("name plz")
    if key not in my_dict:
        if key!='q':
            print("not in my_dict")
        else:
            condition=False
    else:
        print(my_dict[key])
"""
"""
#ver02
my_dict={"hong":"2000/03/01","lee":"1930/03/11","moon":"1970/01/20"}
a=""

while a!='q':
    a=input("name plz")
    try:
        print(my_dict[a])
    except KeyError:
        print("not in my_dict")
"""

