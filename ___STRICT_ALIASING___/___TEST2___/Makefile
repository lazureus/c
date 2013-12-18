.PHONY: all clean

CC := gcc
OBJDUMP = objdump
STRICT_ALIASING := yes
ALIASING_SUFFIX := strict

CFLAGS :=
CCVERSION:=

ifneq (,$(findstring gcc,$(CC)))
    CCVERSION:= $(shell $(CC) --version | grep ^gcc | sed 's/^.* //g')
    CFLAGS += -pipe
    CFLAGS += -pedantic
    CFLAGS += -std=c99
    CFLAGS += -O2
    CFLAGS += -Wall
    CFLAGS += -Wextra
    CFLAGS += -Wconversion
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -Wstrict-aliasing=1
    CFLAGS += -Winline
    CFLAGS += -ggdb
else
    CFLAGS += -Weverything
    CFLAGS += -Wextra
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -std=c99
endif

ifeq ($(STRICT_ALIASING),no)
    CFLAGS += -fno-strict-aliasing
    ALIASING_SUFFIX = no-strict
endif

EXECUTABLES = main main_asm

MAKEFLAGS := -s

all: clean $(EXECUTABLES) banner postbuild

clean:
	rm -f $(EXECUTABLES)
	rm -f *.dbo *.dla *.dnm *.exe *.map *.o *_$(ALIASING_SUFFIX).lst *_$(ALIASING_SUFFIX).s main.s $(ALIASING_SUFFIX).s

postbuild:
	$(OBJDUMP) -d -M intel -S main.o > main_$(ALIASING_SUFFIX).lst
	$(OBJDUMP) -d -M intel main.o > main_$(ALIASING_SUFFIX).s
	$(OBJDUMP) -d -M intel main > $(ALIASING_SUFFIX).s


banner:
	@echo -------------------------------------------------------------------------------
	@echo Through the Force the BIN files I build.
	@echo
	@echo       COMPILER : $(CC) $(CCVERSION)
	@echo        RAM :
	@echo      FLASH :
	@echo
	@echo May the Force be with you!!!
	@echo -------------------------------------------------------------------------------

main: main.o

main_asm: main.s

%.s : %.c
	$(CC) -S -masm=intel $(CFLAGS) $<
