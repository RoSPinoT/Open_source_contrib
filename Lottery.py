from random import choice
k=input("Enter a password containing the digits and a,q,z,x: ")
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

q=ticket()
while k!=q:
    q=ticket()
    my_ticket.append(q)



print(f"Number of tries taken: {len(my_ticket)}")
