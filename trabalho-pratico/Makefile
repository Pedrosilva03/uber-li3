CC = gcc

CFLAGS=-Wall -O3 -Iinclude `pkg-config --cflags glib-2.0`

LDFLAGS=`pkg-config --libs glib-2.0` -lm

all: programa-principal programa-testes

programa-principal: src/main.o src/calculos.o src/querys.o src/queryscheck.o src/getdriverdata.o src/getridedata.o src/getuserdata.o src/parsedrivers.o src/parserides.o src/parseusers.o src/estatisticas.o src/hashing.o src/interativo.o src/setup.o src/tests.o
	$(CC) $^ $(LDFLAGS) -o $@

programa-testes: src/main.o src/calculos.o src/querys.o src/queryscheck.o src/getdriverdata.o src/getridedata.o src/getuserdata.o src/parsedrivers.o src/parserides.o src/parseusers.o src/estatisticas.o src/hashing.o src/interativo.o src/setup.o src/tests.o
	$(CC) $^ $(LDFLAGS) -o $@

src/main.o: src/main.c

src/calculos.o: src/calculos.c

src/querys.o: src/querys.c

src/queryscheck.o: src/queryscheck.c

src/getdriverdata.o : src/getdriverdata.c

src/getridedata.o : src/getridedata.c

src/getuserdata.o : src/getuserdata.c

src/parsedrivers.o : src/parsedrivers.c

src/parserides.o : src/parserides.c

src/parseusers.o : src/parseusers.c

src/estatisticas.o : src/estatisticas.c

src/hashing.o : src/hashing.c

src/interativo.o : src/interativo.c

src/setup.o : src/setup.c

src/tests.o : src/tests.c

PASTA = Resultados
build_folder := $(shell mkdir -p $(PASTA))

clean:
	rm -f programa-principal programa-testes Resultados/*.txt src/*.o
	rmdir Resultados