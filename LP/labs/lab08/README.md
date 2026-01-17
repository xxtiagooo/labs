# Negação

2. Defina o predicado `intersecao/3`, tal que `intersecao(L1, L2, I)`, em que `L1` e `L2` são listas de inteiros, significa que `I` é a lista com os elementos comuns a `L1` e `L2`. Use a negação e o operador de corte sempre que tal melhorar
   o seu programa. O seu programa não deve permitir que o pedido de múltiplas respostas origine respostas erradas. Por exemplo:

   ```
   ?- intersecao([1,2,3,4,5], [1,3,5], I).
   I = [1, 3, 5].
   ```

# Aritmética

1. Defina o predicado `somaDigitos/2`, tal que `somaDigitos(N, S)`, em que `N` é um inteiro positivo, significa que `S` é a soma dos dígitos de `N`. Por exemplo:

   ```
   ?- somaDigitos(123, S).
   S=6
   ```

    1. Gerando um processo recursivo.
    2. Gerando um processo iterativo.

2. Defina o predicado `inverte/2`, tal que `inverte(N, Inv)`, em que `N` é um inteiro positivo, significa que `Inv` é o resultado de inverter os dígitos de `N`. Por exemplo:

   ```
   ?- inverte(123, Inv).
   Inv = 321 .
   ```
   
