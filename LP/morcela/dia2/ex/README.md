### Exercício

Implementa, em Prolog, no programa [ex.pl](ex.pl) o predicado `descodificaDia2(SequenciaFonte, SequenciaAlvo, MensagemCodificada, MensagemDescodificada)`
em que `SequenciaFonte` é a lista que representa a sequência fonte e `SequenciaAlvo` é a lista (sem elementos
repetidos) que representa a sequência alvo. `MensagemSecreta` é a lista com a mensagem a decifrar e
`MensagemDescodificada` é a `MensagemSecreta` descodificada, com base na relação entre `SequenciaFonte` e
`SequenciaAlvo`.

Sugestão: explora o predicado nth1/3.

<details>
<summary>Exemplos:</summary>

```Prolog
?- descodificaDia2([a, f, g, r], [8, 10, 12, 5], [12, 8], MensagemDescodificada).
MensagemDescodificada = [g,a].
```

```Prolog
?- descodificaDia2([a, f, g, r], [8, 10, 12, 5], [12, 9], MensagemDescodificada).
MensagemDescodificada = [g]. % o 9 nao existe no alvo
```

```Prolog
?- descodificaDia2([ola, oi, 'bom dia'], [67, 15, 78], [67, 78], MensagemDescodificada).
MensagemDescodificada = [ola,bom dia].
```

```Prolog
- descodificaDia2([ola, oi, 'bom dia'], [hello, hi, 'good morning'], [ola, 'bom dia'], MensagemDescodificada).
MensagemDescodificada = []. % nenhum elemento existe no alvo
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 1)</summary>

Corre o seguinte comando na pasta `dia2/ex`:

```shell
swipl -q -l ex.pl -t halt teste.pl
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 2)</summary>

Abre uma sessão interativa do SWI-Prolog na pasta `dia2/ex` usando o comando `swipl`.

A seguir, importa o teu ficheiro e o ficheiro de testes utilizando:

```Prolog
?- ['ex.pl'].
?- ['teste.pl'].
```

</details>

O resultado da avaliação desta pista poderá ser encontrada [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/inspector_morcela/ist1113875/-/tree/master/dia2/ex/README.md), no repositório git de feedback.
