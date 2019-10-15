#include <linux/kernel.h>

asmlinkage long sys_mycall(void){
	printk("Hello, it is Estelle system call example \n");

	return 0;
}
