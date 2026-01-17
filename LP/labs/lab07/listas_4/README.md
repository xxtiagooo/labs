Usando funcionais, defina o predicado `substituiMaioresN/4`, tal que `substituiMaioresN(N, Subst, L1, L2)`, em que `L1` é uma lista de inteiros e `N` é
um inteiro, significa que a lista `L2` é o resultado de substituir todos os elementos
da lista `L1` maiores do que `N`, por `Subst`. Por exemplo:

```
?- substituiMaioresN(5, ola, [1, 5, 6, 3, 7], L) .
L = [1, 5, ola, 3, ola] .
?- substituiMaioresN(5, ola, [], L) .
L = [] .
```



O resultado da avaliação deste exercício poderá ser encontrado [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/labs/ist1113875/-/tree/master/lab07/listas_4/README.md), no repositório git de feedback.
