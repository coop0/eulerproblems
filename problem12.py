tri = []
for i in range(2,5000):
    Sum = 0
    for j in range(1,i):
        Sum += j
    tri.append(Sum)
for elements in tri:
    counter =0
    for i in range(1,elements):
        if elements%i == 0:
            counter +=1
    if counter >500:
        print(elements)
        
