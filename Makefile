INCLUDES = -I ./
./papka1/diskr: ./papka2/main.o ./papka2/dis.o ./papka1
    gcc -o ./papka1/diskr -lm ./papka2/main.o ./papka2/dis.o

./papka2/main.o: main.c ./papka2
    gcc -c main.c -o ./papka2/main.o -Wall $(INCLUDES)

./papka2/dis.o: dis.c ./papka2
    gcc -c dis.c -o ./papka2/dis.o -Wall $(INCLUDES)

./papka1:
    mkdir papka1
./papka2:
    mkdir papka2

.PHONY: clean
clean:
    rm -f -r diskr *.o papka1/ papka2/