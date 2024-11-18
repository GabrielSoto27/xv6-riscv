#include "types.h"
#include "stat.h"
#include "user.h"

int getancestor(int n);
int main() {
    int actual = getancestor(0);
    int padre = getancestor(1);
    int abuelo= getancestor(2);
    printf("PID del proceso actual: %d, PID del padre: %d y PID del proceso abuelo %d \n", actual, padre,abuelo);
}


