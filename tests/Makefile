MAKE=make
CC=gcc -L../lib -I../include -Wall

all: 
	$(CC) main.c -o main.o -lcmessage -lcqueue -lctree -lcwindow
	

.PHONY: clean
   
clean:
	rm -f *~ core


    
# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

