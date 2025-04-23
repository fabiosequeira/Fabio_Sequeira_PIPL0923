numeros = []

for i in range(10):
    num = int(input(f"insira o {i + 1}º numero: "))
    numeros.append(num)
    
for num in numeros:
    if num % 2 == 0:
        print(f"{num} e par.")
    else:
        print(f"{num} e impar.")