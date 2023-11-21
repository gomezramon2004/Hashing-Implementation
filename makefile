CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main
HSHDIR = hash
QUADIR = quadratic
CHNDIR = chain

SRCS = main.cpp \
		$(HSHDIR)/hash.cpp \
		$(QUADIR)/quadratic.cpp \
		$(CHNDIR)/chain.cpp \

EXECUTABLE = a.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)

.PHONY: all run clean