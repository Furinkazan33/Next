
MAKE=make
CC=gcc -I./ -Wall

all: queue
    
queue:
	$(CC) -c queue.c -o queue.o
	ar -cvq libcqueue.a queue.o
	mv *.a ../
	
clean:
	rm -f src/*~ *~ core


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

