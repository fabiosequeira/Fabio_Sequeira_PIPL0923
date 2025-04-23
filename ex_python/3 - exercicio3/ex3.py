notas = []
for i in range(10):
    nota = float(input(f"Inseira a nota do aluno {i + 1 }(0 a 20): "))
    if 0 <= nota <= 20:
        notas.append(nota)
        break
    else:
        print("Notas so de 0 a 20 por favor.")
media = sum(notas) / len(notas)
print("A media das notas e: {media:.2f}")