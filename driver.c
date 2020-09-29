#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");
static int load(void){
    printk(KERN_ALERT "Carregou o módulo no kernel\n");
    return 0;
}
static void remove(void){
    printk(KERN_ALERT "Foi removido do kernel\n");
}
module_init(load);
module_exit(remove);