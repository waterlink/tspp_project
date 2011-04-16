cc = g++
cflags = -c -Wall
ldflags = -Wl,--allow-multiple-definition
libraries = 
sources = main.cpp entity.cpp human.cpp utilitycore.cpp student.cpp lecturer.cpp event.cpp usercore.cpp tui.cpp comlineparam.cpp guicommand.cpp
headers = comlineparam.hpp event.hpp lecturer.hpp usercore.hpp commentcore.hpp human.hpp student.hpp utilitycore.hpp entity.hpp includes.hpp tui.hpp utilparams.hpp guicommand.hpp
objects = $(sources:.cpp=.o)
executable = main.elf

debug = -g -O0

all: $(sources) $(executable)

$(executable): $(objects)
	$(cc) $(ldflags) $(objects) -o $@ $(libraries) $(debug)

.cpp.o: 
	$(cc) $(cflags) $< -o $@ $(debug)



