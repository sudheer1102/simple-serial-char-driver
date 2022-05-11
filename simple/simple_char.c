#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>

/* major number */
#define MAJOR_NUMBER 256

/* Hold the device number */
dev_t dev;
struct cdev cd_cdev;
struct file_operations cd_ops;
/* Module start*/

static int module_start(void) {


         printk(" Happy to see u - char\n");
        /* allocation */
         alloc_chrdev_region(&dev, MAJOR_NUMBER, 1 , "HELL0");
         /* cdev int*/
         cdev_init(&cd_cdev, &cd_ops);
         cd_cdev.owner = THIS_MODULE;
         
         /* Resgiter cdev with vfs */
         cdev_add(&cd_cdev, &dev, 1);
         
        
        return 0;

}

/* Module exit the out of kernel */
static int module_clean(void) {

        printk("Sorry for leaivng you -char\n");
        return 0;
}


/* Module starting Functions*/

module_init(module_start);
module_exit(module_clean);


/* This Things Must */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sudheer Gummalla");
MODULE_DESCRIPTION("Simple starting driver for New Rider");




