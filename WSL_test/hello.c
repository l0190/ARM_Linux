#include <linux/init.h>		//所有模块都会需要这个头文件
#include <linux/module.h>	//下面的宏需要

static int __init hello_init(void){
        printk(KERN_INFO "module init success\n");
        return 0;
}

static void __exit hello_exit(void){
        printk(KERN_INFO "module exit success\n");
}

//开源协议
MODULE_LICENSE("GPL");

module_init(hello_init);
module_exit(hello_exit);
