.PHONY: all clean

CC := clang

ifeq ($(CC),gcc)
    CFLAGS := -pipe
    CFLAGS += -pedantic
    CFLAGS += -std=c99
    CFLAGS += -O0
    CFLAGS += -Wall
    CFLAGS += -Wextra
    CFLAGS += -Wconversion
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -Winline
else
    CFLAGS += -Weverything
    CFLAGS += -Wextra
    CFLAGS += -Wmissing-field-initializers
    CFLAGS += -std=c99
endif

EXECUTABLES = main

all: $(EXECUTABLES)

clean:
	rm -f $(EXECUTABLES)
	rm -f *.dbo *.dla *.dnm *.exe *.map *.o

main: main.o
