
MAKE=make
CC=gcc -I./ -Wall

all: message
    
message:
	$(CC) -c message.c -o message.o
	ar -cvq libcmessage.a message.o
	mv *.a ../

clean:
	rm -f src/*~ *~ core


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

