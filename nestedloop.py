nested = [[2,3,4,0],[4,5,6,1,9],[3,4,5,6,5]]

nested[0].append(10)

print(nested[0][4])

nested[1][2] = 4

print(nested[1])

nested[0].append([2,3,7,6,8,2,3])

nested[1].pop()

print(nested)
