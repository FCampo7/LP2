import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

n = 10

k = np.arange(0, n)

fs = 1000
Ts = 1 / fs

t = k * Ts

print(k)
print(t)

plt.plot(t)
plt.show()

v_nat = [1, 2, 3]

print("Lista nativa:")
print(v_nat)
print(v_nat + v_nat)
print(v_nat * 3)

v1 = np.array([1, 2, 3])

v2 = np.array([])

print("Array numpy:")
print(v1)
print(v2)
print(v1 + v1)
print(v1 * 3)
print(v1 + 2)
print(v1 * v1)

print(v1.tolist())
print(type(v1))

k = np.arange(0, 10)
k2 = np.array(range(10))
print(k)
print(k2)
print(type(k))
print(type(k2))
