def sort(arr):
    tamanho = len(arr)
    for i in range(tamanho):
        for j in range(0, tamanho-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

numeros = [4,3,2,1]
array = sort(numeros)
print(array)