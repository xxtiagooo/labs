### Exercício 4

Implementa, em Prolog, no programa [ex.pl](ex.pl) o predicado `programaDia4(Matriz, Coordenadas, MensagemDescodificada)`
em que `MensagemDescodificada` é a lista resultante de extrair os elementos que estão nas posições encontradas na lista `Coordenadas` da matriz `Matriz` (lista de listas).

<details>
<summary>Exemplos:</summary>

```Prolog
?- programaDia4([[a, b, c],[d, e, f], [g, h, i]], [[1,1], [2,2], [3,3]], MensagemDescodificada).
MensagemDescodificada = [a,e,i].
```

```Prolog
?- programaDia4([[1, 2, 3],[4, 5, 6], [7, 8, 9]], [[1,2], [1,3]], MensagemDescodificada).
MensagemDescodificada = [2,3].
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 1)</summary>

Corre o seguinte comando na pasta `dia4/ex`:

```shell
swipl -q -l ex.pl -t halt teste.pl
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 2)</summary>

Abre uma sessão interativa do SWI-Prolog na pasta `dia4/ex` usando o comando `swipl`.

A seguir, importa o teu ficheiro e o ficheiro de testes utilizando:

```Prolog
?- ['ex.pl'].
?- ['teste.pl'].
```

</details>


O resultado da avaliação desta pista poderá ser encontrada [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/inspector_morcela/ist1113875/-/tree/master/dia4/ex/README.md), no repositório git de feedback.
