# O meu segundo descodificador

Recebes mais um email do Inspetor Morcela:

>DE: 🕵🏻 🌭
>
>PARA: ist1113875@tecnico.ulisboa.pt
>
>Jovem,
> 
> Este caso é um pouco mais complexo. Temos em nosso poder duas sequências com o mesmo tamanho; a uma
chamamos a fonte e, à outra, o alvo. As mensagens trocadas pelos criminosos aparecem codificada com os
símbolos do alvo, aos quais temos de fazer corresponder os símbolos da fonte.
>
> É aborrecido descodificá-las manualmente. Seguem as sequências fonte e alvo, mais um exemplo e, em anexo, novas mensagens a decifrar, ordenadas cronologicamente.
>
> Trate disso.
>
> Obrigado,
>
>Morcela 🕵🏻 🌭

**Exemplo:**

Sendo:
- a sequência fonte = `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]`;
- a sequência alvo = `[o, d, e, y, ola, bye, fail, 5, a, j, 0, 45, sea, hello, hi, glory]`.

A mensagem codificada `[fail,hi]` corresponde a `[7, 15]` (“fail” ocupa a posição 7, que corresponde ao 7 na sequência fonte; já “hi” ocupa a posição 15).

Note que, neste exemplo, a sequência fonte é constituída por números de 1 a 16, ordenados, mas poderia ser constituída por outra sequência qualquer de caracteres.

É mais interessante se implementar um programa genérico.

Implementa o programa em [ex/](ex/).
