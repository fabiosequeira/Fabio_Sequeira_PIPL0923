def contar_divisores(numero):
    contagem = 0
    for i in range(1, numero + 1):
        if numero % i == 0:
            contagem += 1
    return contagem
    
numero = int(input("Insira um numero: "))
print(f"o numero {numero} tem {contar_divisores(numero)} divisores")