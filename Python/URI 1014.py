media = None
X = None
Y = None

def read_integer():
  try:
    return int(raw_input())
  except NameError:
    return int(input())

def read_numeric():
  try:
    return float(raw_input())
  except NameError:
    return float(input())

X = read_integer()
Y = read_numeric()
media = X / Y
print(str("{:0.3f}".format(media)) + str(" km/l"))
