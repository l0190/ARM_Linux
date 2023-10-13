#只编译一个驱动模块
obj-m:=hello.o
CURRENT_PATH:=$(shell pwd)
LINUX_KERNAL:=$(shell uname -r)
LINUX_KERNAL_PATH:=/home/lin/desktop/develop/Kernel/linux-6.5.7

all:
	make -C $(LINUX_KERNAL_PATH) M=$(CURRENT_PATH) modules
clean:
	make -C $(LINUX_KERNAL_PATH) M=$(CURRENT_PATH) clean