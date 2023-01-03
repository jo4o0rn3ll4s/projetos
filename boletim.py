nota = list()
som = 0
med = 0
flag = 1

while flag:
    flag = 0
    for i in range(1,5):
        nota.append(int(input('Nota do {}º bimestre: '.format(i))))
        som += nota[i-1]
    
    med = som/len(nota)
    
    print('\nSua média foi {:.1f}'.format(med))
    print('Parabéns, você foi aprovado' if med >= 6 else 'Você está reprovado, estude mais')
    
    esco = input('Deseja realizar novo boletim ? s/n ')
    if esco == 's' or esco == 'S':
        flag = 1
print('{:-^35}'.format('FIM'))
