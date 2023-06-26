n='%s'%input()
k=int(n)
def han(n):
    if k<100:
        return k
    elif k<1000:
        num=99
        for j in range(100,k+1):
            hong='%s'%j
            if int(hong[0])-int(hong[1])==int(hong[1])-int(hong[2]):
                num=num+1
        return num
    elif k==1000:
        return 144
print(han(n))