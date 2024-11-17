#include "types.h"
#include "stat.h"
#include "user.h"

int sys_getpid(int n);
int main() {
    int actual = getancestor(0);
    int padre = getancestor(1);
    int abuelo= getancestor(2);
    printf("PID del proceso actual: %d, PID del padre: %d y PID del proceso abuelo %d", getancestor(0), getancestor(1),getancestor(2));

    int level = 1;
    int ancestor = getancestor();
    printf("Ancestro en nivel %d: %d\n", level, ancestor);

    exit(0);
}


