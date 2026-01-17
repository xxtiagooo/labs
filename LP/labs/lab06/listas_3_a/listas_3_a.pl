% lp24 - ist1113875 - lab06/listas_3_a 

multPorN([], _, []).
multPorN([H|T], N, [H1|T1]) :- H1 is H * N, multPorN(T, N, T1).