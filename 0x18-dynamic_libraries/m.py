import random
import ctypes

cops = ctypes.CDLL('./crack.so')
print(cops.rand())
print(cops.rand())
print(cops.rand())
print(cops.rand())
print(cops.rand())
print(cops.rand())
