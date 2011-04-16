cc = g++
cflags = -c -Wall
ldflags = -Wl,--allow-multiple-definition
libraries = 
sources = *.cpp
headers = *.hpp
objects = *.o
executable = main.elf

debug = -g -O0

all: $(sources) $(executable)

$(executable): $(objects)
	$(cc) $(ldflags) $(objects) -o $@ $(libraries) $(debug)

%.o: %.cpp %.hpp
	$(cc) $(cflags) $< -o $@ $(debug)



