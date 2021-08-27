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
"""
"""
import numpy as np
import matplotlib.pyplot as plt

data=[[2,0],[4,0],[6,0],[8,1],[10,1],[12,1],[14,1]]

x_data=[i[0] for i in data]
y_data=[i[1] for i in data]

plt.scatter(x_data,y_data)
plt.xlim(0,15)
plt.ylim(-.1,1.1)

a=0
b=0

lr=0.9
def sigmoid(x):
    return 1/(1+np.e ** (-x))
for i in range(2001):
    for x_data,y_data in data:
        a_diff = x_data*(sigmoid(a*x_data+b)-y_data)
        b_diff = sigmoid(a*x_data+b)-y_data
        a=a-lr*a_diff
        b=b-lr*b_diff

        if i % 1000 == 0:
            print("epoch=%.f,inclination=%.04f,.4f,intercept=%.04f" % (i, a, b))

plt.scatter(x_data,y_data)
plt.xlim(0,15)
plt.ylim(-.1,1.1)
x_range=(np.arange(0,15,0.1))
plt.plot(np.arange(0,15,0.1),np.array([sigmoid(a*x+b) for x in x_range]))
plt.show()
"""
"""

import numpy as np

w11=np.array([-2,-2])
w12=np.array([2,2])
w2=np.array([1,1])
b1=3
b2=-1
b3=-1

def MLP(x,w,b):
    y=np.sum(w*x)+b
    if y<=0:
        return 0
    else:
        return 1

def NAND(x1,x2):
    return MLP(np.array([x1,x2]),w11,b1)

def OR(x1,x2):
    return MLP(np.array([x1,x2]),w12,b2)

def AND(x1,x2):
    return MLP(np.array([x1,x2]),w2,b3)

def XOR(x1,x2):
    return AND(NAND(x1,x2),OR(x1,x2))

if __name__=='__main__':
    for x in [(0,0),(1,0),(0,1),(1,1)]:
        y=XOR(x[0],x[1])
        print("input_val:"+str(x)+", output:"+str(y))
"""
"""
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

import numpy as np
import tensorflow as tf

np.random.seed(3)
tf.compat.v1.set_random_seed(3)

Data_set=np.loadtxt("dataset/ThoraricSurgery.csv",delimiter=",")
X= Data_set[:,0:17]
Y= Data_set[:,17]

model=Sequential()
model.add(Dense(30,input_dim=17,activation='relu'))
model.add(Dense(1,activation='sigmoid'))

model.compile(loss='binary_crossentropy',optimizer='adam',metrics=['accuracy'])
model.fit(X,Y,epochs=100,batch_size=10)

print("\n Accuray: %.4f" % (model.evaluate(X,Y)[1]))
"""
"""
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

df=pd.read_csv('dataset/pima-indians-diabetes.csv',names=["pregnant","plasma","pressure","thickness","insulin","BMI","pedigree","age","class"])

print(df.head(5))
print(df.info())
print(df.describe())
print(df[['plasma','class']])
colormap=plt.cm.gist_heat
plt.figure(figsize=(12,12))

sns.heatmap(df.corr(),linewidths=0.1,vmax=0.5,cmap=colormap,linecolor='white',annot=True)
plt.show()

grid=sns.FacetGrid(df,col='class')
grid.map(plt.hist,'plasma',bins=10)
plt.show()

from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
import numpy
import tensorflow as tf

numpy.random.seed(3)
tf.random.set_seed(3)

dataset=numpy.loadtxt("dataset/pima-indians-diabetes.csv",delimiter=",")
X=dataset[:,0:8]
Y=dataset[:,8]

model =Sequential()
model.add(Dense(12,input_dim=8,activation='relu'))
model.add(Dense(8,activation='relu'))
model.add(Dense(1,activation='sigmoid'))

model.compile(loss='binary_crossentropy',optimizer='adam',metrics=['accuracy'])

model.fit(X,Y,epochs=200,batch_size=10)

print("\n Accuracy: %.4f" % (model.evaluate(X,Y)[1]))
"""
"""
from keras.models import Sequential
from keras.layers.core import Dense
from sklearn.preprocessing import LabelEncoder

import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
import tensorflow as tf

np.random.seed(3)
tf.random.set_seed(3)

df =pd.read_csv('dataset/iris.csv',names=["sepal_length","sepal_width","petal_length","petal_width","species"])

sns.pairplot(df,hue='species');
plt.show()

dataset=df.values
X=dataset[:,0:4].astype(float)
Y_obj=dataset[:,4]

e=LabelEncoder()
e.fit(Y_obj)
Y=e.transform(Y_obj)
Y_encoded=tf.keras.utils.to_categorical(Y)

model=Sequential()
model.add(Dense(16,input_dim=4,activation='relu'))
model.add(Dense(3,activation='softmax'))

model.compile(loss='mean_squared_error',optimizer='adam',metrics=['accuracy'])
model.fit(X, Y_encoded, epochs=50, batch_size=1)

print("\n Accuracy: %.4f" % (model.evaluate(X,Y_encoded)[1]))
"""
"""
from keras.models import Sequential
from keras.layers.core import Dense
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split

import pandas as pd
import numpy
import tensorflow as tf

seed=0
numpy.random.seed(seed)
tf.random.set_seed(3)

df=pd.read_csv('dataset/sonar.csv',header=None)

dataset=df.values
X=dataset[:,0:60].astype(float)
Y_obj=dataset[:,60]

e=LabelEncoder()
e.fit(Y_obj)
Y=e.transform(Y_obj)

X_train,X_test,Y_train,Y_test= \
    train_test_split(X,Y,test_size=0.3,random_state=seed)

model=Sequential()
model.add(Dense(24,input_dim=60,activation='relu'))
model.add(Dense(10,activation='relu'))
model.add(Dense(1,activation='sigmoid'))

model.compile(loss='mean_squared_error',optimizer='adam',metrics=['accuracy'])
model.fit(X_test, Y_test, epochs=130, batch_size=5)

model.save('my_model.h5')
del model
model=load_model('my_model.h5')
print("\n Accuracy: %.4f" % (model.evaluate(X_test, Y_test)[1]))
"""
from keras.models import Sequential
from keras.layers.core import Dense
from keras.callbacks import EarlyStopping

import pandas as pd
import numpy
import tensorflow as tf

numpy.random.seed(3)
tf.random.set_seed(3)

df_pre=pd.read_csv('dataset/wine.csv',header=None)
df=df_pre.sample(frac=0.15)

dataset=df.values
X=dataset[:,0:12]
Y=dataset[:,12]

model=Sequential()
model.add(Dense(30,input_dim=12,activation='relu'))
model.add(Dense(12,activation='relu'))
model.add(Dense(8,activation='relu'))
model.add(Dense(1,activation='sigmoid'))
model.compile(loss='mean_squared_error',optimizer='adam',metrics=['accuracy'])
early_stopping_callback=EarlyStopping(monitor='val_loss',patience=100)
model.fit(X,Y,validation_split=0.2,epochs=2000,batch_size=500,callbacks=[early_stopping_callback])

print("\n accuracy: %.4f"% (model.evaluate(X,Y)[1]))