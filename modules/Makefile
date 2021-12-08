

MAKE=make

all: 
	$(MAKE) -C window
	$(MAKE) -C tree
	$(MAKE) -C queue
	$(MAKE) -C message

clean:
	rm -f *~ core
	$(MAKE) clean -C window 
	$(MAKE) clean -C tree 
	$(MAKE) clean -C queue
	$(MAKE) clean -C message

# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

