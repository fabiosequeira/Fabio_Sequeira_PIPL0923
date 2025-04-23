while True:
    numero = int(input("Insira um numero entre 1 a 100:"))
    if 1 <= numero <= 100:
        print("Numero valido:", numero)
        break
    else:
        print("Numero invalido")