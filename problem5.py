for i in range(1000000, 1000000000):
    found = True
    for j in range(1,20):
        if i%j != 0:
            found = False
            break
    if found:
        break
print(i)
