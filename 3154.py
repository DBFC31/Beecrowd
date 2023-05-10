d, p = [int(x) for x in input().split()]
contrario = 100.0
for i in reversed(range(d-p+1, d+1)):
    contrario*=i/d
print(f'{(100-contrario):.2f}')