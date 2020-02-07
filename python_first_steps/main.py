import pr
import ctypes as np

a = np.c_uint32(4000)
pr.func(a.value)
    
