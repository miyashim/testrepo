TARGET=unittest
CXXSOURCES=test.cpp
CXXFLAGS=-g
LINC=-I /usr/local/include 
LDEF=-L/usr/local/lib -lcppunit
#g++ -g test.cpp -I /usr/local/include/ -L/usr/local/lib -lcppunit -o unittest

${TARGET}:${CXXSOURCES}
	g++ ${CXXFLAGS} ${LINC} ${LDEF} ${CXXSOURCES} -o ${TARGET}


