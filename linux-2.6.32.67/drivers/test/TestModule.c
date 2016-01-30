#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Bharath Rao");
MODULE_DESCRIPTION("A simple hello world kernel module");

static int __init hello_init( void )
{
	printk(KERN_ALERT "Hello, Kernel world\n");
	return 0;
}

static void __exit hello_exit( void )
{
	printk(KERN_ALERT "GoodBye, Kernel world\n");
}

module_init(hello_init);
module_exit(hello_exit);

