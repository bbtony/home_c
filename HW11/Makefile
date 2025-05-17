COMPILER = gcc
TARGET = temper
OBJECTS = temp_functions.o report.o

$(TARGET): $(OBJECTS)
	$(COMPILER) $(OBJECTS) -o $(TARGET)

clean:
	rm $(OBJECTS) $(TARGET)

temp.o:
	$(COMPILER) -c temp_functions.c -o temp_functions.o

report.o:
	$(COMPILER) -c report.c -o report.o