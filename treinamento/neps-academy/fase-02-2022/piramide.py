# não finalizado

n = int(input())
matrix = [[1 for i in range(n)] for j in range(n)]

for nivel in range(n,1):
    for i in range(n-nivel+1,nivel):
        for j in range(n-nivel+1,nivel):
            matrix[i][j] += 1
print("-"*10)
for row in matrix:
    for col in row:
        print(col, end=" ")
    print(end="\n")
