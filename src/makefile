FLEX=flex
FLEXFLAGS=
BISON=bison
BISONFLAGS=-v -t -d
CC=gcc
CFLAGS=-O3 -w
LIBS=
PARSER=parser
SCANNER=scanner
OBJS=$(SCANNER).o $(PARSER).o Structures.o Code_Gen.o
MYPASCALCOMPEXEC=mt

all: $(OBJS)
	$(CC) $(LIBS) $(OBJS) -o $(MYPASCALCOMPEXEC)

Structures.o: Structures.c Structures.h
	$(CC) $(CFLAGS) Structures.c -c

Code_Gen.o: Code_Gen.c Code_Gen.h
	$(CC) $(CFLAGS) Code_Gen.c -c

$(PARSER).o: $(PARSER).c $(PARSER).h
	bash ./ru
	$(CC) $(CFLAGS) $(PARSER).c -c

$(SCANNER).o: $(SCANNER).c $(PARSER).h
	$(CC) $(CFLAGS) $(SCANNER).c -c

$(SCANNER).c: $(SCANNER).l
	$(FLEX) $(FLEXFLAGS) -o $(SCANNER).c $(SCANNER).l

$(PARSER).h: $(PARSER).y
	$(BISON) $(BISONFLAGS) $(PARSER).y -o $(PARSER).c

clean:
	rm -rf $(SCANNER).c $(PARSER).c $(PARSER).h $(PARSER).output *.o $(MYPASCALCOMPEXEC)