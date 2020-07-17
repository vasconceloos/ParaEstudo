import random


nom1 = input('Digite seu nome: ')
nom2 = input('Digite seu nome: ')
nom3 = input('Digite seu nome: ')
nom4 = input('Digite seu nome: ')

sorteio = random.choice([nom1,nom2,nom3,nom4])

print('O sorteado para ganhar um ponto é: {}'.format(sorteio))

