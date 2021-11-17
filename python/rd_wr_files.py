"""
import os

with open("dream.txt","r") as my_file:
    contents=my_file.read()
    word_list=contents.split(" ")
    line_list=contents.split("\n")

if not os.path.isdir("file_example"):
    os.mkdir("file_example")

if not os.path.exists("file_example/dream.txt"):
    with open("file_example/dream.txt","w",encoding="utf8") as save_file:
        save_file.write("word_list\n")
        w=";    ".join(word_list)
        save_file.write(w)
        save_file.write("\nline_list\n")
        l=";\n".join(line_list)
        save_file.write(l)
    save_file.close()
    my_file.close()
"""
"""
#country
import os
if not os.path.isdir("country"):
    os.mkdir("country")
list_country = ["korea", "usa", "canada", "china", "japan"]
a = []
if not os.path.exists("country/country.txt"):
    with open("country/country.txt", "w", encoding="utf8") as save_file:
        while a !='q':
            a=input("country name plz")
            if a in list_country:
                print(a)
            else:
                print(a,"is not in list")
                save_file.write(a)
                save_file.write("is not in list\n")
    save_file.close()
"""
"""
#hap&avg
import os

with open("sum/sum.txt","r") as my_file:
    contents=my_file.readlines()
    contents_1="".join(contents)
    contents_2=contents_1.replace("\n"," ")
    contents_3=contents_2.split()
    print(contents_3)
    hap=0
    for i in range (0,len(contents_3)):
        hap=hap+int(contents_3[i])
    print("hap: ",hap)
    avg=hap/len(contents_3)
    print("avg: ",avg)
my_file.close()
"""