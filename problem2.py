Max = 0
for i in range(100,1000):
    for j in range(100, 1000):
        if str(i*j) == str(i*j)[::-1]:
            if i*j > Max:
                Max = i*j
print(Max)
