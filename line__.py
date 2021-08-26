"""
import numpy as np
x=[2,4,6,8]
y=[81,93,91,97]
mx=np.mean(x)
my=np.mean(y)
print(mx)
print(my)
divisor=sum([(i-mx)**2 for i in x])
def top(x,mx,y,my):
    d=0
    for i in range(len(x)):
        d+=(x[i]-mx)*(y[i]-my)
    return d
dividend=top(x, mx, y, my)
print(divisor)
print(dividend)

a=dividend/divisor
b=my-(mx*a)
print(a)
print(b)
"""
"""
#mse
import numpy as np

fake_a_b=[3,76]

data=[[2,81],[4,93],[6,91],[8,97]]
x=[i[0] for i in data]
y=[i[1] for i in data]

def predict(x):
    return fake_a_b[0]*x+fake_a_b[1]

def mse(y,y_hat):
    return ((y-y_hat)**2).mean()

def mse_val(predict_result,y):
    return mse(np.array(predict_result),np.array(y))

predict_result=[]

for i in range(len(x)):
    predict_result.append(predict(x[i]))
    print("study_h=%.f,score=%.f,pred_score=%.f" % (x[i],y[i],predict(x[i])))

print("mse"+str(mse_val(predict_result,y)))
"""
"""

import numpy as np
import matplotlib.pyplot as plt

data=[[2,81],[4,93],[6,91],[8,97]]
x=[i[0] for i in data]
y=[i[1] for i in data]

plt.figure(figsize=(8,5))
plt.scatter(x,y)
plt.show()

x_data=np.array(x)
y_data=np.array(y)

a=0
b=0

lr=0.03
epochs=2001

for i in range(epochs):
    y_hat=a*x_data+b
    error=y_data-y_hat
    a_diff=-(2/len(x_data))*sum(x_data*(error))
    b_diff=-(2/len(x_data))*sum(error)
    a=a-lr*a_diff
    b=b-lr*b_diff
    if i %100==0:
        print("epoch=%.f,inclination=%.04f,intercept=%.04f"%(i,a,b))
y_pred=a*x_data+b
plt.scatter(x,y)
plt.plot([min(x_data),max(x_data)],[min(y_pred),max(y_pred)])
plt.show()
"""
"""
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

data=[[2,0,81],[4,4,93],[6,2,91],[8,3,97]]
x1=[i[0] for i in data]
x2=[i[1] for i in data]
y=[i[2] for i in data]

ax=plt.axes(projection='3d')
ax.set_xlabel('study_hours')
ax.set_ylabel('private_class')
ax.set_zlabel('score')
ax.dist=11
plt.scatter(x1,x2,y)
plt.show()

x1_data=np.array(x1)
x2_data=np.array(x2)
y_data=np.array(y)

a1=0
a2=0
b=0

lr=0.03
epochs=2001

for i in range(epochs):
    y_pred = a1 * x1_data + a2 * x2_data+b
    error=y_data-y_pred
    a1_diff=-(1/len(x1_data))*sum(x2_data*(error))
    a2_diff=-(1/len(x2_data))*sum(x2_data*(error))
    b_diff=-(1/len(x1_data))*sum(error)
    a1=a1-lr*a1_diff
    a2=a2-lr*a2_diff
    b=b-lr*b_diff
    if i %100==0:
        print("epoch=%.f,inclination1=%.04f,inclination2=%0.4f,intercept=%.04f"%(i,a1,a2,b))
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import statsmodels.formula.api as statfa

data=[[2,0,81],[4,4,93],[6,2,91],[8,3,97]]

x=[i[0:2] for i in data]
y=[i[2] for i in data]

hour_class=pd.DataFrame(x,columns=['study_hours','private_class'])
hour_class['Score']=pd.Series(y)

model=statfa.ols(formula='Score ~ study_hours + private_class',data=hour_class)

results_formula=model.fit()

a,b=np.meshgrid(np.linspace(hour_class.study_hours.min(),hour_class.study_hours.max(),100),np.linspace(hour_class.private_class.min(),hour_class.private_class.max(),100))

X_ax=pd.DataFrame({'study_hours':a.ravel(),'private_class':b.ravel()})
print(X_ax)
fittedY=results_formula.predict(exog=X_ax)
print(fittedY)
fig=plt.figure()
graph=fig.add_subplot(111,projection='3d')

graph.scatter(hour_class['study_hours'],hour_class['private_class'],hour_class['Score'],c='blue',marker="o",alpha=1)

graph.plot_surface(a,b,fittedY.values.reshape(a.shape),rstride=1,cstride=1,color='none',alpha=0.4)

graph.set_xlabel('study hours')
graph.set_ylabel('private class')
graph.set_zlabel('Score')
graph.dist=11

plt.show()
