

MAKE=make

all: 
	$(MAKE) -C modules/window
	$(MAKE) -C modules/tree
	$(MAKE) -C modules/queue
	$(MAKE) -C modules/message
	$(MAKE) -C tests

clean:
	rm -f *~ core
	$(MAKE) clean -C modules/window 
	$(MAKE) clean -C modules/tree 
	$(MAKE) clean -C modules/queue
	$(MAKE) clean -C modules/message
	$(MAKE) clean -C tests

# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

