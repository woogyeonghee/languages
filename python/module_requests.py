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
"""
import re
import urllib.request

url="http://goo.gl/U7mSQl"
html=urllib.request.urlopen(url)
html_contents=str(html.read())
id_results=re.findall(r"([A-Za-z0-9]+\*\*\*)",html_contents)

for result in id_results:
    print(result)
"""
"""
import urllib.request
import re

url="http://www.google.com/googlebooks/uspto-patents-grants-text.html"
html=urllib.request.urlopen(url)
html_contents=str(html.read().decode("utf8"))

url_list=re.findall(r"(http)(.+)(zip)",html_contents)

for url in url_list:
    full_url="".join(url)
    print(full_url)
    fname,header=urllib.request.urlretrieve(full_url,"ipg140211.zip")
    print("end")
"""
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