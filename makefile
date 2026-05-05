EDO.pdf : PLOTS_PrietoSebastian_S6C1_EDO
	python3 PLOTS_PrietoSebastian_S6C1_EDO.py 

PLOTS_PrietoSebastian_S6C1_EDO : PrietoSebastian_S6C1_EDO.cpp
	g++ PrietoSebastian_S6C1_EDO.cpp
	./a.out > datos.dat