import math
cato = float(input('Digite o valor do Cateto Oposto: '))
cata = float(input('Digite o valor do cateto Adjacente: '))
print('Cateto Oposto = {}, Cateto Adjacente = {}, Hipotenusa = {}'.format(cato,cata,math.hypot(cato,cata)))