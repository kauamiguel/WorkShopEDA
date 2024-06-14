def binarySearch(vetor, key , left, right):
  mid= (left + right) // 2

  if vetor[mid] == key:
    return vetor[mid]
  elif key < vetor[mid]:
    return binarySearch(vetor, key, left, mid -1)
  else:
    return binarySearch(vetor, key, mid + 1, right)

numeros = [1,2,3,4,5,6,7,8]
valor = binarySearch(numeros, 2, 0, 8)
print(valor)
