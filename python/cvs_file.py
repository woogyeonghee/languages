"""
#csv_file2
line_counter=0
data_header=[]
employee=[]
customer_USA_only_list=[]
customer=None

with open("csv_file2/customers.csv","r") as customer_data:
    while 1:
        data=customer_data.readline()
        if not data:
            break
        if line_counter==0:
            data_header=data.split(",")
        else:
            customer = data.split(",")
            if customer[10].upper()=="USA":
                customer_USA_only_list.append(customer)
        line_counter+=1

print("Header:",data_header)
for i in range(0,10):
    print("Data:",customer_USA_only_list[i])
print(len(customer_USA_only_list))

with open("csv_file2/customers_USA_ony.csv","w") as customer_USA_only_csv:
    for customer in customer_USA_only_list:
        customer_USA_only_csv.write(",".join(customer).strip('\n')+"\n")
"""
"""
#csv_file2
line_counter=0
data_header=[]
customer_list=[]

with open("csv_file2/customers.csv","r") as customer_data:
    while 1:
        data=customer_data.readline()
        if not data:
            break
        if line_counter==0:
            data_header=data.split(",")
        else:
            customer_list.append(data.split(","))
        line_counter +=1

print("Header:", data_header)
for i in range(0, 10):
    print("Data:",i,":",customer_list[i])
print(len(customer_list))
"""
"""
import csv

seoung_nam_data=[]
header = []
rownum = 0

with open("csv_file/csv_file.csv","r",encoding ="cp949") as p_file:
    csv_data=csv.reader(p_file)

    for row in csv_data:
        if rownum == 0:
            header = row
        location = row[7]
        if location.find(u"성남시")!=-1:
            seoung_nam_data.append(row)
        rownum += 1

with open("csv_file/csv_file.txt","w",encoding="utf8") as s_p_file:
    writer = csv.writer(s_p_file,delimiter='\t',quotechar="'",quoting=csv.QUOTE_ALL)
    writer.writerow(header)
    for row in seoung_nam_data:
        writer.writerow(row)
"""