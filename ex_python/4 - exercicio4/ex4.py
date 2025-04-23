numero = int(input("Insira um numero: "))

if numero < 2:
    print(f"{numero} nao e um numero primo")
else:
    for i in range(2, numero):
        if numero % i == 0:
            print(f"{numero} nao e um numero primo")
            break
        else:
            print(f"")
    