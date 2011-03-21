cc = g++
cflags = -c -Wall
ldflags = -Wl,--allow-multiple-definition
libraries = 
sources = main.cpp entity.cpp human.cpp utilitycore.cpp student.cpp lecturer.cpp event.cpp usercore.cpp tui.cpp
objects = $(sources:.cpp=.o)
executable = main.elf

debug = -g -O0

all: $(sources) $(executable)

$(executable): $(objects)
	$(cc) $(ldflags) $(objects) -o $@ $(libraries) $(debug)

.cpp.o: 
	$(cc) $(cflags) $< -o $@ $(debug)



