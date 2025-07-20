cc=g++

stack:stackfun.o stackdin.o
	ar -rcsv lib/stacklib.a build/stackfun.o
	${cc} -shared -Iinclude -o lib/stackdyn.so build/stackdin.o

stackfun.o:src/stackfun.cpp
	${cc} -c -Iinclude src/stackfun.cpp -o build/stackfun.o 

stackdin.o:src/stackfun.cpp
	${cc} -fPIC -Iinclude -c src/stackfun.cpp -o build/stackdin.o

build:lib/stackdyn.so lib/stacklib.a
	${cc} -Iinclude src/stack.cpp lib/stacklib.a -o stackstat
	${cc} -Iinclude src/stack.cpp lib/stackdyn.so -o stackdyn

clean:
	@echo "Cleaning build files.."
	rm -f build/*.o stackstat stackdyn
