def extgcd(a, b):
  if b:
    d, y, x = extgcd(b, a % b)
    y -= (a // b)*x
    return d, x, y
  return a, 1, 0


print (extgcd(26513, 32321))
