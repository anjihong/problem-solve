a,b,c=map(int,input().split())
def hong(a,b,c):
    if (c-b)<=0:
        i=-1
    else:
        i=a//(c-b)+1
    return i
print(hong(a,b,c))
