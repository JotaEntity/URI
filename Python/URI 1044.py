a = None
b = None
lista = None

def read_line():
  try:
    return raw_input()
  except NameError:
    return input()

lista = read_line().split(" ")
a = int(lista[0])
b = int(lista[1])

if a % b == 0 or b % a == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
