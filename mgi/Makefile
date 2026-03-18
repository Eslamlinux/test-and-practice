flags=-fno-stack-protector -o0 -wall -std=gnu23 -m16 --march i386
flags += -ffree-standing -I include
ldflags := --nmagic --script=gui.ld
objects: main.o
xobjects:= xgfx.o
NASMENV := -i include/asm/
export NASMENV

.PHONY: clean

all: gui.com
gui.com:$(object) $(xobjects)
ld $(ldflags) $^ -o $@

main.o: main.cpp
cc $(flags) -c $^

xgfx.o: xgfx.asm
nasm -f elf $^ -o $@
clean:
rm -f *.o *.com
