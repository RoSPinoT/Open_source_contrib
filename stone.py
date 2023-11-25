import random
from re import A

from regex import B



'''
print('-----------------> welcome to the game<-----------------')
a1 = int(input('how many turns you want :- '))
print('[+]for stone type    -->    a \n[+]for paper type    -->    b \n[+]for seasers type  -->    c' )
ar =input('[+]TYPE HERE--->')



if ar == 'a' :
    print('[+]YOU CHOSE STONE')

if ar == 'b':
    print('[+]YOU CHOSE PAPER')

if ar == 'c':
    print('[+]YOU CHOSE SEASERS')

'''
a = 'stone'

b = 'paper'

c = 'seasers'

lst = [a,b,c]

comot = random.choice(lst)
print(comot)


