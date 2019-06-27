#Makefile para "Projeto Pet Fera"
#Criado por Matheus Menezes

PROG = Pet_Fera
CC = g++
SRC = src
CPPFLAGS = -O0 -g –Wall –std=c++11 –I/usr/Petfera/header
LDFLAGS = -L/usr/Petfera/lib –lmylib
OBJS = main.o anfibio.o anfibionativo.o anfibioexotico.o animal.o animalnativo.o animalexotico.o animalsilvestre.o ave.o avenativo.o aveexotico.o mamifero.o mamiferonativo.o mamiferoexotico.o reptil.o reptilnativo.o reptilexotico.o funcionario.o tratador.o veterinario.o petfera.o
$(PROG) : $(OBJS)
    $(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
main.o :
    $(CC) $(CPPFLAGS) -c main.cpp
anfibio.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp
anfibioexotico.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/anfibioexotico.cpp
anfibionativo.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/anfibionativo.cpp
animal.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp
animalnativo.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/animalnativo.cpp
animalexotico.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/animalexotico.cpp
animalsilvestre.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp
ave.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp
avenativo.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/avenativo.cpp
aveexotico.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/aveexotico.cpp
mamifero.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp
mamiferonativo.o : 
    $(CC) $(CPPFLAGS) -c $(SRC)/mamiferonativo.cpp
mamiferoexotico.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/mamiferoexotico.cpp
reptil.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp
reptilnativo.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/reptilnativo.cpp
reptilexotico.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/reptilexotico.cpp
funcionario.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp
tratador.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp
veterinario.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp
petfera.o :
    $(CC) $(CPPFLAGS) -c $(SRC)/petfera.cpp
clean :
    rm -f core $(PROG) $(OBJS)