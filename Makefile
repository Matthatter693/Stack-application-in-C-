target=stack.o stackfun.o
cc=c++

stack:${target}
	${cc} ${target} -o stack

stack.o:stack.cpp
	${cc} -c stack.cpp 

stackfun.o:stackfun.cpp
	${cc} -c stackfun.cpp 

clean:
	@echo "Cleaning build files.."
	rm -f *.o stack
