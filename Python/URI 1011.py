import math

pi = None
raio = None
volume = None

def read_numeric():
  try:
    return float(raw_input())
  except NameError:
    return float(input())

pi = 3.14159
raio = read_numeric()
volume = ((4 * pi) * (math.pow(raio, 3))) / 3
print(str("VOLUME = ") + str("{:0.3f}".format(volume)))
