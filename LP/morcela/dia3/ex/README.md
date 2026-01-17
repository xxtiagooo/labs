### Exercício

Implementa, em Prolog, no programa [ex.pl](ex.pl) o predicado `programa1Dia3(SequenciaFonte, SequenciaAlvo, ListaParesCodigo)`
em que `SequenciaFonte` e `SequenciaAlvo` são listas contendo as sequências fonte/alvo e `ListaParesCodigo` é uma
lista com elementos da forma `par(Fonte, Alvo)` em que `Fonte` é um elemento de `SequenciaFonte` e `Alvo` um
elemento de `SequenciaAlvo`; `Fonte` e `Alvo` ocupam a mesma posição nas listas respetivas.

<details>
<summary>Exemplos:</summary>

```Prolog
?- programa1Dia3([a, f, g, r], [8, 10, 12, 5], ListaPares).
ListaPares = [par(a,8),par(f,10),par(g,12),par(r,5)].
```

```Prolog
?- programa1Dia3([ola, oi, 'bom dia'], [67, 15, 78], ListaPares).
ListaPares = [par(ola,67),par(oi,15),par(bom dia,78)].
```

</details>

Implementa também no programa [ex.pl](ex.pl) o predicado `programa2Dia3(ListaParesCodigo, MensagemCodificada, MensagemDescodificada)`
que é verdade se `ListaParesCodigo` for uma lista tal como calculada no `Programa1Dia13`, `MensagemCodificada` é
a mensagem a descodificar e `MensagemDescodificada` a mensagem descodificada.

<details>
<summary>Exemplos:</summary>

```Prolog
?- programa2Dia3([par(ola,67),par(oi,15),par('bom dia',78)], [67, 78], MensagemDescodificada).
MensagemDescodificada = [ola,bom dia].
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 1)</summary>

Corre o seguinte comando na pasta `dia3/ex`:

```shell
swipl -q -l ex.pl -t halt teste.pl
```

</details>

<details>
<summary>Instruções: como resolver o pedido do Inspetor Morcela (opção 2)</summary>

Abre uma sessão interativa do SWI-Prolog na pasta `dia3/ex` usando o comando `swipl`.

A seguir, importa o teu ficheiro e o ficheiro de testes utilizando:

```Prolog
?- ['ex.pl'].
?- ['teste.pl'].
```

</details>

---

Quando acabas o teu trabalho ficas a pensar se deves considerar ou não preocupante não teres mensagens novas
para decifrar. Será que as mensagens que já descodificaste te conseguem levar a alguma conclusão? Pegas numa
das frases decifradas e testas o seu tamanho:

```Prolog
?- Frase = [a, m, a, t, r, i, z, s, e, r, a, c, h, a, v, e], length(Frase, L).
Frase = [a, m, a, t, r, i, z, s, e, r, a, c, h, a, v, e],
L = 16.
```

Hum...



O resultado da avaliação desta pista poderá ser encontrada [aqui](https://gitlab.rnl.tecnico.ulisboa.pt/lp/lp24/feedback/inspector_morcela/ist1113875/-/tree/master/dia3/ex/README.md), no repositório git de feedback.
