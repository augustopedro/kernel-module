<<<<<<< HEAD:Prime/Makefile
obj-m += prime.o
=======
obj-m := helloworld.o
>>>>>>> dae609ed9f6e0655c62c27d0ba120e55e313006e:Makefile
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
