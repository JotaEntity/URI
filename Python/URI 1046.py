hInicial = None
hFinal = None
lista = None

def read_line():
  try:
    return raw_input()
  except NameError:
    return input()

lista = read_line().split(" ")
hInicial = int((lista[0]))
hFinal = int((lista[1]))
if hInicial > hFinal:
  print(str("O JOGO DUROU ") + str(str(24 - (hInicial - hFinal)) + str(" HORA(S)")))
elif hFinal > hInicial:
  print(str("O JOGO DUROU ") + str(str(hFinal - hInicial) + str(" HORA(S)")))
else:
  print("O JOGO DUROU 24 HORA(S)")
