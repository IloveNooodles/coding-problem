# NAMA : Muhammad Garebaldhie ER Rahman
# NIM : 13520029
# Prob 6 : Mengubah nilai romawi

n = int(input("Masukan bilangan: "))

letter = ['I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC', 'C']
number = [1, 4, 5, 9, 10, 40, 50, 90, 100]

print("Bilangan romawinya adalah ", end ='')
i = len(number) - 1
while n > 0:
  if(n - number[i] < 0):
    i -= 1
  else:
    n = n - number[i]
    print(letter[i],end='')

