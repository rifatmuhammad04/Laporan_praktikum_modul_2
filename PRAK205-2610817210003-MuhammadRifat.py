import math

a = float(input("masukkan nilai tinggi (A):"))
b = float(input("masukkan nilai miring (B):"))
c = math.sqrt(b**2 - a**2)

keliling = a + b + c
luas = 0.5 * c * a 

print(f"alas = {int(c)} cm")
print(f"tinggi = {int(a)} cm")
print(f"keliling = {int(keliling)} cm")
print(f"luas = {int(luas)} cm^2")