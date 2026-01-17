:- set_prolog_flag(answer_write_options,[max_depth(0)]).

/*--------------------------------------------------------------------------------
Dia 3 - programa 1: programa1Dia3(SeqFonte, SeqAlvo, ListaParesCodigo) e verdade se 
ListaParesCodigo for o resultado de alinhar as listas SeqFonte e SeqAlvo, em estruturas 
par(E1, E2) em que E1 e um elemento de SeqFonte e E2 de SeqAlvo, ocupando ambos a 
mesma posicao.

Exemplo:
?- SeqFonte = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16],
SeqAlvo = [o, d, e, y, ola, bye, fail, 5, a, j, 0, 45, sea, hello, hi, glory],
programa1Dia3(SeqFonte, SeqAlvo, ListaParesCodigo).
...
ListaParesCodigo = [par(1,o),par(2,d),par(3,e),par(4,y),par(5,ola),par(6,bye),
par(7,fail),par(8,5),par(9,a),par(10,j),par(11,0),par(12,45),par(13,sea),par(14,hello),
par(15,hi),par(16,glory)].
----------------------------------------------------------------------------------*/

% Implementacao interativa, com argumento auxiliar, inicializado com a lista vazia
programa1Dia3(SeqFonte, SeqAlvo, ListaParesCodigo) :- 
      programa1Dia3(SeqFonte, SeqAlvo, [], ListaParesCodigo). 

% Base de recursao
programa1Dia3([], [], ListaParesCodigo, ListaParesCodigo) :- !.

% As listas sao percorridas ao mesmo tempo (devem ter o mesmo tamanho), e os pares
% criados um a um.
programa1Dia3([Cabeca1 | Resto1], [Cabeca2 | Resto2], Aux, ListaParesCodigo) :- 
      append(Aux, [par(Cabeca1, Cabeca2)], NovoAux),
      programa1Dia3(Resto1, Resto2, NovoAux, ListaParesCodigo).

/*--------------------------------------------------------------------------------
Dia 3 - programa 2: programa2Dia3(ListaParesCodigo, MensagemCod, MensagemDescod) e 
verdade se ListaParesCodigo for uma lista de pares tal como no programa 1, MensagemCod 
e uma mensagem codificada e MensagemDescod e MensagemCod descodificada, tendo em conta
ListaParesCodigo.

Exemplo:
?- SeqFonte = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16],
SeqAlvo = [o, d, e, y, ola, bye, fail, 5, a, j, 0, 45, sea, hello, hi, glory],
MensagemCod = [ola, bye, sea, 45, 0],
programa1Dia3(SeqFonte, SeqAlvo, ListaParesCodigo), 
programa2Dia3(ListaParesCodigo, MensagemCod, MensagemDescod).
...
MensagemDescod = [5,6,13,12,11].
----------------------------------------------------------------------------------*/

programa2Dia3(ListaParesCodigo, MensagemCodificada, MensagemDescodificada) :-
  programa2Dia3(ListaParesCodigo, MensagemCodificada, [], MensagemDescodificada). 

programa2Dia3(_, [], MensagemDescodificada, MensagemDescodificada) :- !.

programa2Dia3(ListaParesCodigo, [Cabeca | Resto], Aux, MensagemDescodificada) :-
      member(par(Fonte, Cabeca), ListaParesCodigo), !,
      append(Aux, [Fonte], NovoAux),
      programa2Dia3(ListaParesCodigo, Resto, NovoAux, MensagemDescodificada).

% se nao existir
programa2Dia3(ListaParesCodigo, [_ | Resto], Aux, MensagemDescodificada) :-
      programa2Dia3(ListaParesCodigo, Resto, Aux, MensagemDescodificada).

/*

Implementacoes alternativas com findall:

programa1Dia3(SequenciaFonte, SequenciaAlvo, ListaParesCodigo) :-
    findall(par(ElementoFonte, ElementoAlvo),
            (nth1(Index, SequenciaFonte, ElementoFonte), 
            nth1(Index, SequenciaAlvo, ElementoAlvo)),
            ListaParesCodigo).

programa2Dia3(ListaParesCodigo, MensagemCodificada, MensagemDescodificada) :-
    findall(ElementFonte,
            (member(ElementoAlvo, MensagemCodificada),
             member(par(ElementFonte, ElementoAlvo), ListaParesCodigo)),
             MensagemDescodificada).

*/


