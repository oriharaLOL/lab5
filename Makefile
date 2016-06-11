INCLUDES = -I ./file -I thirdparty/

./papka1/diskr: ./papka2/main.o ./papka2/dis.o ./papka2/test.o ./papka1 ./papka2
	gcc -o ./papka1/diskr -lm ./papka2/main.o ./papka2/dis.o -Wall

./papka1/test: ./papka2/maintest.o ./papka2/dis.o ./papka2/test.o ./papka1 ./papka2
	gcc -o ./papka1/test -lm ./papka2/test.o ./papka2/maintest.o ./papka2/dis.o -Wall

test:
	./papka1/test

./papka2/main.o: ./file/main.c ./papka2
	gcc -c ./file/main.c -o ./papka2/main.o -Wall $(INCLUDES)

./papka2/dis.o: ./file/dis.c
	gcc -c ./file/dis.c -o ./papka2/dis.o -Wall $(INCLUDES)

./papka2/maintest.o: ./test/main.c
	gcc -c ./test/main.c -o ./papka2/maintest.o -Wall $(INCLUDES)

./papka2/test.o: ./test/test.c
	gcc -c ./test/test.c -o ./papka2/test.o -Wall $(INCLUDES)

./papka1:
	mkdir papka1

./papka2:
	mkdir papka2

.PHONY: clean
clean:
	rm -r  papka1/ papka2/