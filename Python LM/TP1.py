import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# Punto 1 del tp

df = pd.read_csv("presion_tp1.csv")
print(df)

Fs = 500
Ts = 1 / Fs

L = len(df)
k = np.arange(0, L)
t = k * Ts

plt.subplot(2, 1, 1)
plt.plot(t, df)
plt.grid()
plt.xlabel("t[s]")

# Punto 2 NO funciona hay que re verlo

rf = Fs / (L - 1)
f = k * rf

pf = abs(np.fft.fft(df))

plt.subplot(2, 1, 2)
plt.plot(f, pf)
plt.grid()
plt.xlabel("f")

plt.show()

# Punto 3
# G=(3.2-0.1)/(1-(-1))=3.1/2=1.55
# k=(3.3-0)/2=1.65V
# Tendria que ir un filtro analogico de pasa bajos

