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
    int n;
    argint(0, &n);
    struct proc *actual = myproc();  
    for (int i = 0; i < n; i++) {
        if (actual->parent == 0) { 
            return -1;
        }
        actual = actual->parent;
    }
    return actual->pid;
}





