bin/CesarCipher: build/CesarCipher.o build/encrypt.o build/decipher.o
	gcc -Wall -o bin/CesarCipher build/CesarCipher.o build/encrypt.o build/decipher.o
    
build/CesarCipher.o: src/CesarCipher.c
	gcc -c src/CesarCipher.c -o build/CesarCipher.o

build/encrypt.o: srs/encrypt.c
	gcc -c src/encrypt.c -o build/encrypt.o
    
build/decipher.o: src/decipher.c
	gcc -c src/decipher.c -o build/decipher.o