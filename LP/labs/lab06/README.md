# Listas

2. Entretanto, resolves implementar o predicado `escreveLista/1`, tal que `escreveLista(L)` significa que a lista `L` vai ser escrita no ecrã, um elemento por linha. Por exemplo:

   ```
   ?- escreveLista([1, a, ola, 3]).
   1
   a
   ola
   3
   true.
   ```

3. Resolves implementar o predicado `multPorN/3`, tal que `multPorN(L1, N, L2)` é
   verdade se `L2` for a lista que resulta de multiplicar cada elemento da lista `L1` pelo
   inteiro `N`. Por exemplo:

    ```
    ?- multPorN([1,2,3,6,9], 0, L).
    L = [0, 0, 0, 0, 0].
    ?- multPorN([1,2,3,6,9], 1, L).
    L = [1, 2, 3, 6, 9].
    ?- multPorN([], 4, L).
    L = [].
    ```

    1. Implementa o predicado `multPorN/3` gerando um processo iterativo;
    2. Implementa o predicado `multPorN/3` gerando um processo recursivo;
    3. Implementa o predicado `multPorN/3` usando funcionais (findall, maplist, include, exclude, ...);

4. Defines agora o predicado `duplicaElem/2`, tal que `duplicaElem(Lst1, Lst2)` significa
   que a lista `Lst2` é o resultado de repetir cada um dos elementos da
   lista `Lst1`. Por exemplo:

   ```
   ?- duplicaElem([a,b,c], L).
   L = [a, a, b, b, c, c].
   ?- duplicaElem([], L).
   L = [].
   ```

    1. Implementa o predicado `duplicaElem/2` gerando um processo iterativo;
    2. Implementa o predicado `duplicaElem/2` gerando um processo recursivo;
    3. Implementa o predicado `duplicaElem/2` usando funcionais (findall, maplist, include, exclude, ...). Sugestão: usa o predicado flatten;

