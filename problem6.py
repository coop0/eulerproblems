ss = 0
sqs = 0
for i in range(1,101):
    ss += i**2
    sqs += i
sqs = sqs**2
print(sqs-ss)
