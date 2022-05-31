# NAMA : Muhammad Garebaldhie ER Rahman
# NIM : 13520029
# Prob 5 : Serangan Kuda

n = int(input("Masukkan nilai N: "))
A = [["" for i in range (n+2)] for j in range(n+2)] #diperbesar agar tidak mengalami error

for i in range(n):
    for j in range(n):
        A[i][j] = input(f"Masukan elemen baris ke {i+1} kolom ke {j+1}: ")


safe = True

for i in range(n):
  for j in range(n):
    if(A[i][j] == 'K'):
      if(A[i+2][j-1] == 'R' or A[i+2][j+1] =='R' or A[i-2][j+1] == 'R' or A[i-2][j-1] == 'R'):
        safe = False
      if(A[i+1][j-2]=='R' or A[i+1][j+2] =='R' or A[i-1][j+2] == 'R' or A[i-1][-2] =='R'):
        safe = False

print()

if(safe):
  print("Ratu aman dari serangan kuda.")
else:
  print("Ratu tidak aman dari serangan kuda")

