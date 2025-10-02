
CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude
LDFLAGS = -lcurl

SRC = src/main.cpp src/downloader.cpp src/utils.cpp
OBJ = $(SRC:.cpp=.o)
BIN = bin/downloader

all: $(BIN)

$(BIN): $(OBJ)
	mkdir -p bin
	$(CXX) $(OBJ) -o $(BIN) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(BIN)

run: all
	./$(BIN) https://example.com/file1.txt https://example.com/file2.jpg