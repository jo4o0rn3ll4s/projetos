cpf = int(input('Digite seu cpf => '))
sep = list()
num = list()
ckcpf = list()
multi1 = 10
multi2 = 11
som1 = 0
som2 = 0
val1 = 0
val2 = 0
dig1 = 0
dig2 = 0

#Separa o numero de 12 casas em uma lista de digitos independentes
for i in range(0,10):
    sep.insert(i, cpf//10**(10-i))
print(sep)
num.insert(0,sep[0])
for i in range(1,10):
    num.insert(i, sep[i]-sep[i-1]*10)
print(num)

for i in range(0, 9, 1):
    ckcpf.insert(i, num[i]*multi1)
    som1 = som1 + ckcpf[i]
    print('ckp {}, num {}, multi {}, som {}'.format(ckcpf[i],num[i],multi1,som1))
    multi1 = multi1 - 1

val1 = som1%11
dig1 = 0 if val1 >= 10 else 11 - val1

ckcpf.clear()

for i in range(0, 10):
    ckcpf.insert(i, num[i]*multi2)
    som2 = som2 + ckcpf[i]
    print('ckp {}, num {}, multi {}, som {}'.format(ckcpf[i],num[i],multi2,som2))
    multi2 = multi2 - 1

val2 = som2%11
dig2 = 0 if val2 >= 10 else 11 - val2

print('\n\n',val1 ,dig1 ,val2 ,dig2)
