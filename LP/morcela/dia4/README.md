# Um golpe de génio

Recebes mais um mail do inspetor Morcela:

>DE: 🕵🏻 🌭
>
>PARA: ist1113875@tecnico.ulisboa.pt
>
>Jovem,
>
> Estamos às escuras. Não temos mais nenhuma mensagem a decifrar e não conseguimos perceber as mensagens
> que decifrámos.
>
> Um informador diz-nos que um novo golpe está para breve. Estamos a tentar perceber o que
> temos em mãos.
>
> Não temos trabalho para si, hoje.
>
>Morcela 🕵🏻 🌭

Bolas, a polícia sem saber o que fazer. Voltas a olhar para as mensagens que decifraste:

```
[a, m, a, t, r, i, z, s, e, r, a, c, h, a, v, e] = a matriz será chave
[s, e, t, e, p, o, r, d, e, z, a, s, s, e, i, s] = sete por dezasseis
[f, r, a, s, e, s, s, e, m, s, e, n, t, i, d, o] = frases sem sentido
[p, e, r, u, c, a, n, e, g, r, a, e, b, o, n, e] = peruca negra e boné
[o, c, u, l, o, s, e, b, o, t, a, s, n, e, v, e] = óculos e botas neve
[f, r, a, s, e, s, c, o, m, v, e, r, d, a, d, e] = frases com verdade
[t, u, d, o, a, p, o, s, t, o, s, r, o, u, b, o] = tudo a postos roubo
```

Reparas que todas estas mensagens têm tamanho 16 na sua forma de lista. E são sete mensagens. Percebes que são estas mensagens que constituem a matriz 7 x 16 referida.

Pegas nas outras mensagens que decifraste:

```
[[7, 15], [1, 1], [5, 13], [1, 12], [5, 5], [2, 8], [2, 2], [7, 6], [5, 1], [4, 3], [2, 3], [4, 4], [4, 9], [1, 3], [5, 4], [4, 5], [1, 6], [4, 7], [5, 2], [4, 14], [7, 3], [7, 16], [5, 3], [6, 9]]
```

Será que representam coordenadas da matriz? Por exemplo, será que [7, 15], representa a letra que se pode encontrar na Linha 7, coluna 15, ou seja, um “b”?

Decides, por tua iniciativa, fazer um programa em Prolog na directoria [ex/](ex/) que, dada uma matriz e uma lista de coordenadas, cria uma lista com as letras que ocupam essas coordenadas na matriz. Será que...?
