TARGET		= $(CURDIR)
OS		= $(shell cd ../..; pwd)
include target.cfg

CFLAGS          += -g #-DSIMULATOR

TEST		= test-sd
TESTS		= $(TEST).srec
TESTS		+= test-debug.srec test-leds.srec test-task.srec test-timer.srec test-uart.srec
#TESTS		+= philosophers.srec #test-tcl.srec
#TESTS           += test-latency.srec test-tswitch.srec
OUTS		= $(TESTS:%.srec=%.elf)

all:		$(OUTS) $(TESTS) $(TEST).dis
		$(SIZE) *.elf

$(OUTS) $(TESTS): startup.o libuos.a

clean:
		rm -rf *~ *.[oasi] *.elf *.hex *.srec *.bin *.lst *.dis .deps $(MODULES)

hex:		$(TESTS)
		for srec in $(TESTS); do \
			$(OBJCOPY) -O ihex -I srec $$srec `basename $$srec .srec`.hex; \
		done

load:		$(TEST).srec
		$(OBJCOPY) -O ihex $(TEST).srec $(TEST).hex
		ubw32 -write $(TEST).hex -reset

include $(OS)/sources/rules.mak

###
