lib:
	go build -o hello.a -buildmode=c-archive hello.go
#for chared lib
#	go build -o hello.so -buildmode=c-shared hello.go
build: 
	gcc -o hello hello.c hello.a -lpthread
