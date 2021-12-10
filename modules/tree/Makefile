
MAKE=make
CC=gcc -Iinc -Wall

all: tree
    
tree:
	$(CC) -c src/tree.c -o obj/tree.o
	ar -cvq libctree.a obj/tree.o
	cp inc/tree.h ../../include/
	cp obj/tree.o ../../obj/
	cp libctree.a ../../lib/
	
clean:
	rm -f src/*~ *~ core


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

