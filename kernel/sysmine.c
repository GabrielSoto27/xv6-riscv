// kernel/sysmine.c
#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "spinlock.h" 
#include "memlayout.h"
#include "proc.h"

int sys_getppid(void) {
    if (myproc()->parent != 0) {
        return myproc()->parent->pid;
    } else {
        return -1;
    }
}

int sys_getancestor(void) {
    int level;
    argint(0, &level);
    struct proc *ancestor = myproc();
    while (level > 0 && ancestor->parent != 0) {
        ancestor = ancestor->parent;
        level--;
    }

    if (level == 0) {
        return ancestor->pid;
    } else {
        return -1;
    }
}
