#Author: Nohemi Morales
# Date: 06/28/2021

CXX = g++ -std=c++11 -g
dependencies = Complex.o

Complex: ${dependencies}
	${CXX} -o $@ $^
	
clean:
	rm -f *.o Complex