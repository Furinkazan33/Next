

MAKE=make

list:
	@echo "all=src\ntests\nmodules"

all: 
	$(MAKE) -C src

tests:
	$(MAKE) -C tests

modules:
	$(MAKE) -C modules

clean:
	rm -f *~ core
	$(MAKE) clean -C src
	$(MAKE) clean -C tests


# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

