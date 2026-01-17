Defines agora o predicado `duplicaElem/2`, tal que `duplicaElem(Lst1, Lst2)` significa
que a lista `Lst2` é o resultado de repetir cada um dos elementos da
lista `Lst1`. Por exemplo:

```
?- duplicaElem([a,b,c], L).
L = [a, a, b, b, c, c].
?- duplicaElem([], L).
L = [].
```

Implementa o predicado `duplicaElem/2` gerando um processo recursivo.

O resultado da avaliação deste exercício poderá ser encontrado [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/labs/ist1113875/-/tree/master/lab06/listas_4_b/README.md), no repositório git de feedback.
