preco = int(input('Digite o preço: '))
desconto = (preco*5)/100
novopreco = preco-desconto
print('O seu produto custa {}$, mas com 5% de desconto o valor fica: {}$'.format(preco,novopreco))