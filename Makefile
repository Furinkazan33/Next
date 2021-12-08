
F_SRC=src
F_TEST=test
MAKE=make

all: sources tests

sources: 
	$(MAKE) all -f $(F_SRC)/Makefile

tests: 
	$(MAKE) all -f $(F_TEST)/Makefile
	

.PHONY: clean cleanall
   
clean:
	$(MAKE) clean -f $(F_SRC)/Makefile
	$(MAKE) clean -f $(F_TEST)/Makefile	

cleanall: clean
	$(MAKE) cleanall -f $(F_SRC)/Makefile
	$(MAKE) cleanall -f $(F_TEST)/Makefile	

# $@: the target filename.
# $*: the target filename without the file extension.
# $<: the first prerequisite filename.
# $^: the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+: similar to $^, but includes duplicates.
# $?: the names of all prerequisites that are newer than the target, separated by spaces.

