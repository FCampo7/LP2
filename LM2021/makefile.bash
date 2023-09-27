mkdir -p build;
gcc -Wall -o build/main.exe src/main.c src/files/*.c -Isrc/files;
./build/main.exe;