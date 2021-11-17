"""
import matplotlib.pyplot as plt
MyGrowHeight=[130,140,150,165,175,176]
plt.plot(MyGrowHeight)
plt.show()
"""
"""
import matplotlib.pyplot as plt
sqr=[10**2,11**2,12**2,13**2]
plt.plot(sqr,linewidth=10)

plt.title("10 to 13 Square Numbers")
plt.xlabel("Order")
plt.ylabel("Squares Numbers",fontsize=15)

plt.show()
"""
"""
import matplotlib.pyplot as plt
sqr=[10**2,11**2,12**2,13**2]
MyLoveNumber=[90,105,130,180]

plt.plot(sqr,linewidth=10)
plt.plot(MyLoveNumber,linewidth=5)

plt.title("10 to 13 Square Numbers")
plt.xlabel("Order")
plt.ylabel("Squares Numbers",fontsize=15)
plt.legend(["SQR N","LoveNumber"])
plt.show()
"""
"""
import matplotlib.pyplot as plt

numX=[1,2,3,4,5,6,7,8,9,10]
numY=range(10,0,-1)

colormap=numX
plt.scatter(numX,numY,s=50,c=colormap)
plt.title("scatter makes scatter graph")
plt.xlabel("X Label")
plt.ylabel("Y Label")
plt.colorbar()
plt.show()
"""
"""
import matplotlib.pyplot as plt

y=[100,120,130,140,80,150]
x=range(len(y))
plt.bar(x,y,width=0.5,color="red")
plt.show()
"""
"""
import matplotlib.pyplot as plt
ratio=[25,25,25,25]
plt.pie(ratio)
plt.show()
"""
"""
import numpy as np
import matplotlib.pyplot as plt

a= np.random.randn(100)
plt.hist(a,bins=30)
plt.show()
"""
"""
import numpy as np
import matplotlib.pyplot as plt

a=np.random.normal(10,3,500)
plt.hist(a,bins=30,color="pink")
plt.show()
"""