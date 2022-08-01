
#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched.h>

SYSCALL_DEFINE0(debashishprocess)
{
    printk("\nProcess id for parent : %d\n", current->parent->pid);
    printk("\nProcess id for current pid  : %d\n", current->pid);
    return 0;
}
