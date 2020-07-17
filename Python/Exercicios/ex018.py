import random


nom1 = input('Digite seu nome: ')
nom2 = input('Digite seu nome: ')
nom3 = input('Digite seu nome: ')
nom4 = input('Digite seu nome: ')

sorteio = random.sample([nom1,nom2,nom3,nom4], k=4)

print('A ordem da apresentação é: {}'.format(sorteio))
