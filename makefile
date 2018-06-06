CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all:compileMain 

compileMain:
	$(CXX) $(CXXFLAGS) *.cpp

clean:
	rm a.out
