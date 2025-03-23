table=[]
x=10
y = 3
for i in range(x-y):
    table.append(float(y+i))
table[-1] = table[-1] +1
print(table)

