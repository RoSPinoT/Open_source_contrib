from random import choice
s=input("Enter a 5 digit password with numeriuc digits and a,q,z,x:")
def ticket():
    num=[]
    for v in range(1,10):
        num.append(v)
    num.append('a')
    num.append('q')
    num.append('z')
    num.append('x')
    l1=choice(num)
    l2=choice(num)
    l3=choice(num)
    l4=choice(num)
    l5=choice(num)
    return(f"{l1}{l2}{l3}{l4}{l5}")


my_ticket=[]

k=ticket()
while s!=k:
    k=ticket()
    my_ticket.append(k)
print(my_ticket)


print(len(my_ticket))
