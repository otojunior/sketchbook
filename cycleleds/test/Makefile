# Exemplo 01 Makefile
#
# Help about Makefiles:
# http://mrbook.org/blog/tutorials/make/
#
# Syntax:
#	target: dependencies
#	[tab] system command

CC = g++
FLAGS = -O2
INCLUDE = ../../mock
SOURCES = $(INCLUDE)/*.cpp *.cpp
EXECUTABLE = cycleleds

simulate:
	cp ../$(EXECUTABLE).ino ./$(EXECUTABLE).cpp
	$(CC) -D SIMULATOR $(FLAGS) -o $(EXECUTABLE) -I $(INCLUDE) $(SOURCES)

clean:
	rm -f *.exe