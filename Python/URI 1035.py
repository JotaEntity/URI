a = None
b = None
c = None
d = None
lista = None

def read_line():
  try:
    return raw_input()
  except NameError:
    return input()

lista = read_line().split(" ")
a = int(lista[0])
b = int(lista[1])
c = int(lista[2])
d = int(lista[3])

if b > c and d > a and c > 0 and d > 0 and (c + d) > (a + b) and a % 2 == 0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
