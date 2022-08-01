
#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(debashishprint, char *, msg)
{
    char buf[256];
    int copied = strncpy_from_user(buf, msg, sizeof(buf));
    if (copied < 0) return -EFAULT;
    if(copied == sizeof(buf))return -EFAULT;
    printk(KERN_INFO "Message:-  %s\n", buf);
    return 0;
}
