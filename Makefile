all: main using_vectors using_stl

main: main.cpp point.hpp swap.hpp
	g++ main.cpp -o main

using_vectors: using_vectors.cpp vector.hpp
	g++ using_vectors.cpp -o using_vectors

using_stl: using_stl.cpp
	g++ using_stl.cpp -o using_stl

clean:
	rm -f *.o main using_vectors using_stl
