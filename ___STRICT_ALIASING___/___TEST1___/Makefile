.PHONY: all clean

CC := gcc
OBJDUMP = objdump

CCVERSION:=

ifneq (,$(findstring gcc,$(CC)))
    CCVERSION:= $(shell $(CC) --version | grep ^gcc | sed 's/^.* //g')
    CFLAGS := -pipe
    CFLAGS += -pedantic
    CFLAGS += -std=c99
    CFLAGS += -O3
    CFLAGS += -Wall
    CFLAGS += -Wextra
    CFLAGS += -Wconversion
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -Wstrict-aliasing=1
    CFLAGS += -Winline
    CFLAGS += -g
else
    CFLAGS += -Weverything
    CFLAGS += -Wextra
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -std=c99
endif

EXECUTABLES = main

MAKEFLAGS := -s

all: clean $(EXECUTABLES) banner postbuild

clean:
	rm -f $(EXECUTABLES)
	rm -f *.dbo *.dla *.dnm *.exe *.map *.o *.lst *.s

postbuild:
	$(OBJDUMP) -d -M intel -S main.o > main.lst
	$(OBJDUMP) -d -M intel main.o > main.s


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
