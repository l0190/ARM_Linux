#只编译一个驱动模块
ifneq ($(KERNELRELEASE),)
	obj-m := hello.o
else
#KERNELDIR为内核源码的路径
	KERNELDIR ?= /home/lin/desktop/develop/WSL2-Linux-Kernel
	PWD := $(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_PATH) M=$(PWD) clean
endif