import numpy as np 
import matplotlib.pyplot as plt

#Calculo Error Teorico
datos=np.loadtxt('rk4.txt')

x=datos[:,0]
y=datos[:,1]
ed=np.exp(-x)

ejey=abs(ed-y)/ed

plt.figure()
plt.plot(x,ejey)
plt.xlabel('x')
plt.ylabel('Error')
plt.title("Error Teorico",fontsize=20)
plt.show()
plt.savefig('error.png')
