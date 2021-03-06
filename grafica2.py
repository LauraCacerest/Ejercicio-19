import numpy as np 
import matplotlib.pyplot as plt

#Calculo Error Teorico
datos=np.loadtxt('rk4_2orden.txt')

x=datos[:,0]
y=datos[:,1]
ed=np.exp(-x)

ejey=abs(ed-y)

plt.figure()
plt.plot(x,ejey)
plt.xlabel('x')
plt.ylabel('Error')
plt.title("Error Teorico",fontsize=20)
plt.show()
plt.savefig('error2.png')
