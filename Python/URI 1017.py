media = None
kilometros = None
velocidade = None
tempo = None

def read_integer():
  try:
    return int(raw_input())
  except NameError:
    return int(input())

tempo = read_integer()
velocidade = read_integer()
kilometros = (float(tempo)) * (float(velocidade))
media = kilometros / 12
print(str("{:0.3f}".format(media)) + str(''))
