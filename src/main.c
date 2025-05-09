#include <stdio.h>
extern void initialise_monitor_handles(void);

int main(void) {
    initialise_monitor_handles(); // Optional, but safe
    printf("✅ Hello from UART!\n");
    while (1);
}
