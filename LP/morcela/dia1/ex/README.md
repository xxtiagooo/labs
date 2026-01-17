### Exercício:

Implementa, em Prolog, no programa [ex.pl](ex.pl) o predicado `eliminaNumeros(Lista, ListaSemNumeros)` em que `ListaSemNumeros` é a lista resultante
de eliminar de `Lista` os números.

_Sugestão_: existe em Prolog o predicado number(N), que é avaliado para true se N for um número e para false
caso contrário. Tenta usá-lo.

<details>
<summary>Exemplos:</summary>

```Prolog
?- eliminaNumeros([1, o, 2, 4, l, 1, a], ListaSemNumeros).
ListaSemNumeros = [o,l,a].
```

```Prolog
?- eliminaNumeros([1], ListaSemNumeros).
ListaSemNumeros = [].
```

Podes também testar com uma lista explícita:

```
?- Lista = [o, 66, 4, l, 1, a, 67], eliminaNumeros(Lista, ListaSemNumeros).
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 1)</summary>

Corre o seguinte comando na pasta `dia1/ex`:

```shell
swipl -q -l ex.pl -t halt teste.pl
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 2)</summary>

Abre uma sessão interativa do SWI-Prolog na pasta `dia1/ex` usando o comando `swipl`.

A seguir, importa o teu ficheiro e o ficheiro de testes utilizando:

```Prolog
?- ['ex.pl'].
?- ['teste.pl'].
```

</details>

O resultado da avaliação desta pista poderá ser encontrada [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/inspector_morcela/ist1113875/-/tree/master/dia1/ex/README.md), no repositório git de feedback.
