#include <linux/module.h>
#include <linux/fs.h>
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>	
//#include <linux/ioctl.h>
#define HELLO_MAJOR 237
static int debug_enable = 0;
module_param(debug_enable, int, 0);
MODULE_PARM_DESC(debug_enable, "Enable module debug mode.");
struct file_operations hello_fops;
static int hello_open(struct inode *inode, struct file *file)
{
	printk("hello_open: successful\n");
	return 0;
}
static int hello_release(struct inode *inode, struct file *file)
{
	printk("hello_release: successful\n");
	return 0;
}
static ssize_t hello_read(struct file *file, char *buf, size_t count,
		loff_t *ptr)
{
	printk("hello_read: returning zero bytes\n");
	return 0;
}
static ssize_t hello_write(struct file *file, const char *buf,
		size_t count, loff_t * ppos)
{
	printk("hello_read: accepting zero bytes\n");
	return 0;
}

/*static int hello_ioctl(struct inode *inode, struct file *file,
		unsigned int cmd, unsigned long arg)
{
	printk("hello_ioctl: cmd=%ld, arg=%ld\n", cmd, arg);
	return 0;
}*/
static int __init hello_init(void)
{
	int ret;
	printk("Hello Example Init - debug mode is %s\n",
			debug_enable ? "enabled" : "disabled");
	ret = register_chrdev(HELLO_MAJOR, "hello1", &hello_fops);
	if (ret < 0) {
		printk("Error registering hello device\n");
		goto hello_fail1;
	}
	printk("Hello: registered module successfully!\n");/* Init processing here... */
	return 0;
hello_fail1:
	return ret;
}
static void __exit hello_exit(void)
{
	//cleanup_module();
//	unregister_chrdev(234, "hello1");
	unregister_chrdev(237, "hello1");
//	unregister_chrdev(236, "hello1");
	printk("first driver Example Exit\n");

}

struct file_operations hello_fops = {
	owner : THIS_MODULE,
	read  : hello_read,
	write : hello_write,
//	ioctl :	hello_ioctl,
	open  :	hello_open,
	release: hello_release,
};

module_init(hello_init);
module_exit(hello_exit);
MODULE_AUTHOR("Yasir Hallinan");
MODULE_DESCRIPTION("first driver World Example");
MODULE_LICENSE("GPL");
