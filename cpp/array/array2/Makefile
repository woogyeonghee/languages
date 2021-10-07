TARGET = a.out
CC = g++
SRC = $(wildcard *.cpp)
OBJECTS = $(SRC:.cpp=.o)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

clean :
	rm *.o $(TARGET)
