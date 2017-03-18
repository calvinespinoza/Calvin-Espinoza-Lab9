Main:	Main.o GodArc.o BusterSword.o Scythe.o ShortSword.o GodEaters.o Aragamis.o
	g++ Main.o GodArc.o BusterSword.o Scythe.o ShortSword.o GodEaters.o Aragamis.o -o Main

Main.o: GodArc.h BusterSword.h Scythe.h ShortSword.h GodEaters.h Aragamis.h  Main.cpp
	g++ -c Main.cpp

GodArc.o:	GodArc.cpp GodArc.h BusterSword.h Scythe.h ShortSword.h
	g++ -c GodArc.cpp

BusterSword.o:	BusterSword.cpp BusterSword.h
	g++ -c BusterSword.cpp

Scythe.o:	Scythe.cpp Scythe.h
	g++ -c Scythe.cpp

ShortSword.o:	ShortSword.cpp ShortSword.h
	g++ -c ShortSword.cpp

GodEaters.o:	GodEaters.cpp GodEaters.h
	g++ -c GodEaters.cpp

Aragamis.o:	Aragamis.cpp Aragamis.h
	g++ -c Aragamis.cpp
clean:
	rm *.o Main
