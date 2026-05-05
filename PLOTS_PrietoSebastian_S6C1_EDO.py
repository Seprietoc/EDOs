import numpy as np
import matplotlib.pylab as plt

datos = np.genfromtxt("datos.dat", delimiter=',')

plt.plot(datos[:,0], datos[:,1])
plt.savefig("plot.pdf")

