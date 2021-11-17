"""
import urllib.request
url="http://storage.googleapis.com/patents/grant_full_text/2014/ipg140107.zip"

print("start")
fname,header=urllib.request.urlretrieve(url,'ipg140107.zip')

print("end")
"""
"""
from urllib.request import urlopen
from bs4 import BeautifulSoup
a= urlopen("http://python.org")
soup=BeautifulSoup(a.read(),"html.parser")
print(soup.h1)
"""
"""
with open("post.html") as f:
    soup=BeautifulSoup(f,"html.parser")

a=soup.find("div")
print(a)
a= soup.find_all("div")
print(a)
a=soup.find('div',{'id:ABC_id'}).text
print(a)
a=soup.find('div',{'id:ABC_id'})
print(a)
"""
"""
from urllib.request import urlopen
from bs4 import BeautifulSoup
a=urlopen("https://movie.naver.com/movie/sdb/rank/rmovie.nhn")
soup=BeautifulSoup(a.read(),"html.parser")
print(soup.title)
"""
"""
import requests
from bs4 import BeautifulSoup

def trade_spider(max_pages):
    page=1
    while page<=max_pages:
        url='http://itissmart.tistory.com/'
        source_code=requests.get(url,allow_redirects=False)
        plain_text=source_code.text
        soup=BeautifulSoup(plain_text,'html.parser')
        for link in soup.findAll('a',{'class':'link_post'}):
            href=link.get('href')
            title=link.findAll('string')
            for t in title:
                print(t.text)
            print(href)

        page+=1

trade_spider(5)
"""

import urllib.request
import re
url="http://finance.naver.com/item/main.nhn?code=005930"
html=urllib.request.urlopen(url)
html_contents=str(html.read().decode("ms949"))

stock_results=re.findall("(\<dl class=\"blind\"\>)([\s\S]+?)(\<\/dl>)",html_contents)
samsung_stock=stock_results[0]
samsung_index=samsung_stock[1]

index_list=re.findall("(\<dd\>)([\s\S]+?)(\<\/dd\>)",samsung_index)

for index in index_list:
    print(index[1])

"""
import json

with open("json_example.json","r",encoding="utf8") as f:
    contents=f.read()
    json_data=json.loads(contents)
    print(json_data["employees"])
"""
"""
import json

dict_data={'name':'zara','age':7,'class':'first'}

with open("data.json","w")as f:
    json.dump(dict_data,f)
"""