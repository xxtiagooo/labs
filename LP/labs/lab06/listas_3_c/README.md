Resolves implementar o predicado `multPorN/3`, tal que `multPorN(L1, N, L2)` é
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

Implementa o predicado `multPorN/3` usando funcionais (findall, maplist, include, exclude, ...).

O resultado da avaliação deste exercício poderá ser encontrado [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/labs/ist1113875/-/tree/master/lab06/listas_3_c/README.md), no repositório git de feedback.
