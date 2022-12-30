menu = ('Prato','Bebida')
prato = ('Pizza','Hamburguer','Pastel')
priceP = (30,8,5)
bebida = ('Agua','Refri','Cerveja')
priceB = (2,5,10)
valor = 0
flag = 1
while flag:
    flag = 0
    print('{:#^30}'.format(' MENU '))
    for c in range(0,2):
        print('{}-{}'.format(c + 1, menu[c]))
    print('{:#^30}'.format(' MENU '))
    escom = int(input(''))

    if escom == 1:
        print('{:#^30}'.format(' PRATO '))
        for c in range(0,3):
            print('{}-{:.<20}R$ {}'.format(c + 1,prato[c],priceP[c]))
        print('{:#^30}'.format(' PRATO '))
        esco = int(input(''))
        if esco == 1: 
            valor += priceP[esco-1]
        if esco == 2: 
            valor += priceP[esco-1]
        if esco == 3: 
            valor += priceP[esco-1]
        
    if escom == 2:
        print('{:#^30}'.format(' BEBIDA '))
        for c in range(0,3):
            print('{}-{:.<20}R$ {}'.format(c + 1,bebida[c],priceB[c]))
        print('{:#^30}'.format(' BEBIDA '))
        esco = int(input(''))
        if esco == 1: 
            valor += priceB[esco-1]
        if esco == 2: 
            valor += priceB[esco-1]
        if esco == 3: 
            valor += priceB[esco-1]
    rep = input('Deseja escolher algo mais? s/n ')
    if rep == 's':
        flag = 1
    
print('{:#^30}'.format(' CONTA '))
print('O valor da conta ficou em R${}'.format(valor))
print('{:#^30}'.format(' CONTA '))
