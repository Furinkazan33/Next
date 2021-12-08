ROOT=/home/mathieu/repos/Next
TEST=$(ROOT)/test
F_SRC=$(ROOT)/src
F_INC=$(F_SRC)/include
F_OBJ=$(ROOT)/obj
MAKE=make
CC=gcc
CFLAGS=-I$(F_INC) -Wall

all:  
	$(CC) $(CFLAGS) $(F_OBJ)/message.o $(F_OBJ)/queue.o $(F_OBJ)/tree.o $(TEST)/main.c -o $(TEST)/main.o
	

.PHONY: clean cleanall
   
clean:
	rm -f $(TEST)/*~ $(TEST)/core

cleanall: clean
	rm $(TEST)/*.o

    
# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

