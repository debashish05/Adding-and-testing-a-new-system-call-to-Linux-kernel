
#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/cred.h>

SYSCALL_DEFINE0(debashishgetpid)
{
    return task_tgid_vnr(current);
}
