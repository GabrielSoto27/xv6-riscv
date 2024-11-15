#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
    int pid = getpid();
    int ppid = getppid();
    printf("Proceso actual PID: %d, PID del padre: %d\n", pid, ppid);

    int level = 2; // Cambia esto para probar distintos niveles de ancestro
    int ancestor = getancestor(level);
    printf("Ancestro en nivel %d: %d\n", level, ancestor);

    exit(0);
}

