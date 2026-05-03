# Exercícios — Lista Linear Sequencial em C

## 🟢 Nível Básico
### Exercício 1 — Contar elementos
Implemente uma função int contarPares(LISTA* l) que percorre a lista e retorna a quantidade de elementos cuja chave é par.

### Exercício 2 — Busca e exibição
Implemente uma função void exibirPosicao(LISTA* l, int pos) que recebe uma posição e imprime a chave do elemento naquela posição. Caso a posição seja inválida, exiba uma mensagem de erro adequada.

### Exercício 3 — Maior e menor
Implemente duas funções:

int maiorElemento(LISTA* l) que retorna a maior chave da lista
int menorElemento(LISTA* l) que retorna a menor chave da lista

Considere o caso em que a lista está vazia e trate esse caso adequadamente.

## 🟡 Nível Intermediário
### Exercício 4 — Inserção ordenada
Implemente uma função bool inserirOrdenado(LISTA* l, REGISTRO reg) que insere um elemento mantendo a lista sempre em ordem crescente, sem usar nenhuma função de ordenação. A função deve encontrar a posição correta e inserir nela.

💡 Dica: você já tem a função inserirElemento, pode reutilizá-la.


### Exercício 5 — Remover duplicatas
Dada uma lista que pode conter chaves repetidas, implemente void removerDuplicatas(LISTA* l) que percorre a lista e remove todas as ocorrências duplicadas, mantendo apenas a primeira ocorrência de cada chave.

### Exercício 6 — Inverter a lista
Implemente void inverterLista(LISTA* l) que inverte a ordem dos elementos da lista sem usar uma lista auxiliar.

## 🔴 Nível Avançado
### Exercício 7 — Mesclar duas listas
Dadas duas listas já ordenadas em ordem crescente, implemente:
cvoid mesclarListas(LISTA* l1, LISTA* l2, LISTA* resultado)
que gera uma terceira lista também ordenada com todos os elementos das duas. Considere o caso em que a soma dos elementos ultrapassa MAX.

### Exercício 8 — Rotacionar a lista
Implemente void rotacionar(LISTA* l, int k) que rotaciona os elementos da lista k posições para a esquerda.
Exemplo com k = 2:
Antes:  [ 10, 20, 30, 40, 50 ]
Depois: [ 30, 40, 50, 10, 20 ]
Considere o caso em que k é maior que o número de elementos.

### Exercício 9 — Interseção de listas
Implemente:
cvoid intersecao(LISTA* l1, LISTA* l2, LISTA* resultado)
que gera uma lista com os elementos cuja chave aparece nas duas listas, sem repetições no resultado.

### Exercício 10 — Desafio geral
Usando tudo que você aprendeu, crie um pequeno menu interativo no main com as seguintes opções:
1. Inserir elemento
2. Remover elemento
3. Buscar elemento
4. Exibir lista
5. Exibir maior e menor elemento
6. Inverter lista
7. Sair
O programa deve continuar rodando até o usuário escolher a opção 7.


💡 Dica geral: teste sempre os casos extremos — lista vazia, lista cheia, posições inválidas e valores inexistentes.