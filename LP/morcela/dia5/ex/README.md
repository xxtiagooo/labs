### Exercício 5

Implementa, em Prolog, no programa [ex.pl](ex.pl) o predicado `encontraSuspeitos(PessoasBanco, CaracteristicasCriminoso, Suspeitos)` em que `Suspeitos` é a lista resultante de extrair de `PessoasBanco` as pessoas que têm todas as características descritas na lista `CaracteristicasCriminoso`.

Sugestão: utiliza o predicado subset/2.

<details>
<summary>Exemplos:</summary>

```Prolog
?- encontraSuspeitos([pessoa(maria, [loura, vestido]), pessoa(joao, [botas, bone])],[botas, bone], Suspeitos).
Suspeitos = [joao].
```

```Prolog
?- encontraSuspeitos([pessoa(maria, [loura, vestido]), pessoa(joao, [botas, bone])],[bone, botas], Suspeitos).
Suspeitos = [joao]. % nota que a ordem pela qual os elementos aparecem na lista não é relevante
```

```Prolog
?- encontraSuspeitos([pessoa(maria, [loura, vestido]), pessoa(joao, [botas, bone])],[botas], Suspeitos).
Suspeitos = [joao]. % nota que o suspeito deve ter todas as características do criminoso, mas pode ter mais
```

```Prolog
?- encontraSuspeitos([pessoa(maria, [loura, vestido]), pessoa(joao, [botas, bone])],[botas, bone, chapeu],
Suspeitos).
Suspeitos = [].
```
</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 1)</summary>

Corre o seguinte comando na pasta `dia5/ex`:

```shell
swipl -q -l ex.pl -t halt teste.pl
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 2)</summary>

Abre uma sessão interativa do SWI-Prolog na pasta `dia5/ex` usando o comando `swipl`.

A seguir, importa o teu ficheiro e o ficheiro de testes utilizando:

```Prolog
?- ['ex.pl'].
?- ['teste.pl'].
```

</details>


O resultado da avaliação desta pista poderá ser encontrada [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/inspector_morcela/ist1113875/-/tree/master/dia5/ex/README.md), no repositório git de feedback.
