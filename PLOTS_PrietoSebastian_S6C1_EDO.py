import numpy as np
import matplotlib.pylab as plt

datos = np.genfromtxt("datos.dat", delimiter=',')

plt.figure()
plt.plot(datos[:,0], datos[:,1], label='euler', color='red')
plt.plot(datos[:,0], datos[:,2], label='runge', color='blue')
plt.plot(datos[:,0], datos[:,3], label='real', color='green')
plt.legend()
plt.savefig("plot500.pdf")

plt.figure()
plt.plot(datos[:,0], datos[:,4], label='euler', color='red')
plt.plot(datos[:,0], datos[:,5], label='runge', color='blue')
plt.legend()
plt.savefig("error500.pdf")