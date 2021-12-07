
F_SRC=.
F_OBJ=../obj
F_LIB=../lib
F_INC=./include
MAKE=make
CC=gcc
CFLAGS=-I$(F_INC) -Wall

#vpath %.c $(F_SRC)
#vpath %.h $(F_INC)
#vpath %.o $(F_OBJ)
#vpath %.a $(F_LIB)

message: 
	$(MAKE) message -C $(F_LIB) -f Makefile

all: main

main: main.c queue.c $(F_LIB)/message.a
	$(CC) -o $@ $^ $(CFLAGS)


.PHONY: clean cleanall
clean:
	rm -f *.o *~ core $(F_INC)/*~
cleanall:
	rm -f *.o *~ core $(F_INC)/*~
	$(MAKE) clean -C $(F_LIB) -f Makefile

#cleanlib:
#	rm -f *.o *~ core $(INC)/*~ $(LOBJ)/*.o


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

