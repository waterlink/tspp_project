cc = g++
cflags = -c -Wall
ldflags = -Wl,--allow-multiple-definition
libraries = 
sources = main.cpp entity.cpp human.cpp utilitycore.cpp
objects = $(sources:.cpp=.o)
executable = main.elf

all: $(sources) $(executable)

$(executable): $(objects)
	$(cc) $(ldflags) $(objects) -o $@ $(libraries)

.cpp.o: 
	$(cc) $(cflags) $< -o $@



