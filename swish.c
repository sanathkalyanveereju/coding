p=list(map(int,input().split(' ')))
q=a[0]
x=a[1]
s=0
while(q!=0):
  x=q%x
  s+=x
  q=q//x
print(s+q)

