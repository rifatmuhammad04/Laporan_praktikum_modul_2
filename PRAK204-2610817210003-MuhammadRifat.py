r = float(input("nilai jari-jari: "))
t = float(input("nilai tinggi bejana: "))
pi = 22/7

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print(f"volume = {volume:.2f}")
print(f"luas = {luas:.2f}")
print(f"keliling = {keliling:.2f}")