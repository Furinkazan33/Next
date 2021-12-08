
MAKE=make
CC=gcc -Iinc -Wall

all: queue
    
queue:
	$(CC) -c src/queue.c -o obj/queue.o
	ar -cvq libcqueue.a obj/queue.o
	cp inc/queue.h ../../include
	cp obj/queue.o ../../obj
	cp libcqueue.a ../../lib/
	
clean:
	rm -f src/*~ *~ core


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

