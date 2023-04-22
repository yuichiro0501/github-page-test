VPATH = src
INCLUDES = -I include

geom_test: main.o geom.o
	g++ $^ -o $@
main.o: main.cpp include/geom.hpp
	g++ ${INCLUDES} -c $<
geom.o: geom.cpp include/geom.hpp
	g++ ${INCLUDES} -c $<
