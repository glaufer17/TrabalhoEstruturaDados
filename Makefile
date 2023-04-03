all: app_main

app_main: app_main.o listaDuplamenteEncadeada.o  
	gcc obj/app_main.o obj/listaDuplamenteEncadeada.o -o bin/app_main.exe		



listaDuplamenteEncadeada.o: src/listaDuplamenteEncadeada.c include/listaDuplamenteEncadeada.h
	gcc -I include -Wall -Werror -c src/listaDuplamenteEncadeada.c -o obj/listaDuplamenteEncadeada.o

app_main.o: apps/app_main.c include/listaDuplamenteEncadeada.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.exe

clean:
	del bin\app_main.exe obj\*.o 
