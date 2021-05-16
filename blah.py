s=input()
nx=0
no=0
for i in s:
    if(i=='x' or i=='X'):
        nx+=1
    if(i=='o' or i=='O'):
        no+=1

if(nx==no):
    print('true')
else:
    print('false')
