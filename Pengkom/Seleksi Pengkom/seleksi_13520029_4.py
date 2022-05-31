# NAMA : Muhammad Garebaldhie ER Rahman
# NIM : 13520029
# Prob 4 : MEnghitung integral

a = int(input("Masukan nilai a: "))
b = int(input("Masukan nilai b: "))
n = int(input("Masukan nilai n: "))

def fx(x):
  sum = x**4 + 3*x**3+5*x**2+x+8
  return sum

total = 0

h = (b-a)/n

for i in range(n):

  x1 = a + i*h
  x2 = a + (i+1)*h

  total += (fx(x2) + fx(x1))/2 * h

print(f"Hasilnya adalah {total}")