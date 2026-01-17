Deparas-te com o predicado `insereOrd/3`, tal que `insereOrd(E, L1, L2)`
(em que `E` é um inteiro e `L1` e `L2` são listas de inteiros ordenadas de forma ascendente), significa que `L2` é o resultado de inserir `E` em `L1`. Por exemplo:

```
?- insere_ordenado(5, [1,2,3,6,9], L).
L = [1, 2, 3, 5, 6, 9] .
?- insere_ordenado(0, [1,2,3,6,9], L).
L = [0, 1, 2, 3, 6, 9] .
?- insere_ordenado(10, [1,2,3,6,9], L).
L = [1, 2, 3, 6, 9, 10] .
?- insere_ordenado(3, [1,2,3,6,9], L).
L = [1, 2, 3, 3, 6, 9] .
```

Implementa o predicado `insereOrd/3` usando funcionais (findall, maplist, include, exclude, ...).



O resultado da avaliação deste exercício poderá ser encontrado [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/labs/ist1113875/-/tree/master/lab07/listas_1_b/README.md), no repositório git de feedback.
