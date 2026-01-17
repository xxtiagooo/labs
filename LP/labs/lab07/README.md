# Listas

1. Deparas-te com o predicado `insereOrd/3`, tal que `insereOrd(E, L1, L2)`
   (em que `E` é um inteiro e `L1` e `L2` são listas de inteiros ordenadas de forma ascendente), significa que `L2` é o resultado de inserir `E` em `L1`. Por exemplo:

   ```
   ?- insereOrd(5, [1,2,3,6,9], L).
   L = [1, 2, 3, 5, 6, 9] .
   ?- insereOrd(0, [1,2,3,6,9], L).
   L = [0, 1, 2, 3, 6, 9] .
   ?- insereOrd(10, [1,2,3,6,9], L).
   L = [1, 2, 3, 6, 9, 10] .
   ?- insereOrd(3, [1,2,3,6,9], L).
   L = [1, 2, 3, 3, 6, 9] .
   ```

    1. Implementa o predicado `insereOrd/3` gerando um processo recursivo
       (o iterativo é menos giro, mas também o podes fazer)
    2. Implementa o predicado `insereOrd/3` usando funcionais (findall, maplist, include, exclude, ...).

2. Gerando um processo iterativo, implementa o predicado `compMaiorLista/2`,
   tal que `compMaiorLista(L, C)`, em que `L` é uma lista de listas, significa que o
   maior comprimento das listas de `L` é `C`. Por exemplo:

   ```
   ?- compMaiorLista([[1,2,3], [4,3,1,3], []], C).
   C=4
   ```
   
3.  Usando funcionais, defina o predicado `numOcc/3`, tal que `numOcc(L, E, N)`
significa que o elemento `E` ocorre `N` vezes na lista `L`. Por exemplo:

   ```
   ?- L = [1,2,3,4,1,5,1], numOcc(L, 1, N).
   L = [1, 2, 3, 4, 1, 5, 1],
   N = 3.
   ?- L = [1,2,3,4,1,5,1], numOcc(L, 11, N).
   L = [1, 2, 3, 4, 1, 5, 1],
   N = 0.
   ```
   
4. Usando funcionais, defina o predicado `substituiMaioresN/4`, tal que `substituiMaioresN(N, Subst, L1, L2)`, em que `L1` é uma lista de inteiros e `N` é
um inteiro, significa que a lista `L2` é o resultado de substituir todos os elementos
da lista `L1` maiores do que `N`, por `Subst`. Por exemplo:

   ```
   ?- substituiMaioresN(5, ola, [1, 5, 6, 3, 7], L) .
   L = [1, 5, ola, 3, ola] .
   ?- substituiMaioresN(5, ola, [], L) .
   L = [] .
   ```
   
