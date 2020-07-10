CC = g++
EXEC = executable
standard = -std=c++17

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC =$(wildcard $(SRCDIR)/*.cpp)
_OBJ =$(SRC:.c=.o)

OBJ = $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(_OBJ))

all :$(EXEC)

%.o : %.cpp
	$(CC) $(standard) -o $(patsubst $(SRCDIR)/%,$(OBJDIR)/%, $@) -c $< 


$(EXEC) : $(_OBJ)
	$(CC) $(standard) -o $(patsubst %,$(BINDIR)/%, $@) $^

clean :
	rm -rf obj/*.o

mrproper :
	rm -rf bin/$(EXEC)
