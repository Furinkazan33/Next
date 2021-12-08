
MAKE=make
CC=gcc -Iinc -Wall

all: message
    
message:
	$(CC) -c src/message.c -o obj/message.o
	ar -cvq libcmessage.a obj/message.o
	cp inc/message.h ../../include
	cp obj/message.o ../../obj
	cp libcmessage.a ../../lib/

clean:
	rm -f src/*~ *~ core


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

