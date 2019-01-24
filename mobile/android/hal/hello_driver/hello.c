#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/device.h>
#include <linux/uaccess.h>

#include "hello.h"

static int hello_major = 0;
static int hello_minor = 0;

static struct class* hello_class = NULL;
static struct hello_android_dev* hello_dev = NULL;

static int hello_open(struct inode* inode, struct file* filp);
static int hello_release(struct inode* inode, struct file* filp);
static ssize_t hello_read(struct file* filep, char __user *buf, size_t count, loff_t* f_pos);
static ssize_t hello_write(struct file* filp, const char __user *buf, size_t count, loff_t* f_pos);

static struct file_operations hello_fops = {
	.owner = THIS_MODULE,
	.open = hello_open,
	.release = hello_realease,
	.read = hello_read,
	.write = hello_write,
};

static ssize_t hello_val_show(struct device* dev, struct device_attribute* attr, char* buf);
static ssize_t hello_val_store(struct device* dev, struct device_attribute* attr, const char* buf, size_t count)

static DEVICE_ATTR(val, S_IRUGO|S_IWUSR,hello_val_show,hello_val_store);

