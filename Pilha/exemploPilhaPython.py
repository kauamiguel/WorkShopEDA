def push(pilha, valor):
  #adiciona um elemento no fim do array
  pilha.append(valor)

def pop(pilha):
  #Remove o ultimo elemento
  pilha.pop()

def showStack(pilha):
  print(pilha[-1])

pilha = []
push(pilha, 10)
showStack(pilha)

push(pilha, 20)
showStack(pilha)

push(pilha, 30)
showStack(pilha)

pop(pilha)
showStack(pilha)

