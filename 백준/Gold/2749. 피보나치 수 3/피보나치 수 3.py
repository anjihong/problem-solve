fibo=[0,1]
mod=10**6
p=mod//10*15

n=int(input())
for i in range(2,p):
    fibo.append(fibo[i-1]+fibo[i-2])
    fibo[i]%=mod

print(fibo[n%p])