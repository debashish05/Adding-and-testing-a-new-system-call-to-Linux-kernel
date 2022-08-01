#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(debashishhello)
{
    printk("hello debashish");
    return 0;
}
