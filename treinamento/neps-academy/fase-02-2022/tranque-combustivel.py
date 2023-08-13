# declarar as variveis c, d, t e res para valor final
c = int(input())
d = int(input())
t = int(input())

# calculo p/ descobrir o valor da saída(res) será: (d/c)-2
res = (d/c)-t

# usar um condição if caso o valor a ser gasto for menor que o que já tem no combustível
if(res < 0):
    print("0.0")
else:
    valor_arredondado = round(res, 1)
    print("{:.1f}".format(valor_arredondado))
