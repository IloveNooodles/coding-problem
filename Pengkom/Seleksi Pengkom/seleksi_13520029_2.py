# NAMA : Muhammad Garebaldhie ER Rahman
# NIM : 13520029
# Prob 2 : Menentukan pesan akhir kasisar

pesan = input('Masukan pesan awal: ')
N = int(input("Masukan nilai N: "))

print('Pesan akhir Kaisar adalah ', end='')

for i in range(len(pesan)): 
  print(chr((ord(pesan[i]) - 97 + N)%26+97), end='')