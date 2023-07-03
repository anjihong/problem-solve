def hanoi(n,ox,mx,tx):
    if n==1:
        print(ox,tx)
    else:
        hanoi(n-1,ox,tx,mx)
        print(ox,tx)
        hanoi(n-1,mx,ox,tx)
        
n=int(input())
print(2**n-1)
if n<=20:
    hanoi(n,1,2,3)