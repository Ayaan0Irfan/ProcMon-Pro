#include <stdio.h>
#include <sys/utsname.h>
#include <unistd.h>
#include "system_info.h"

void display_system_info() {
    struct utsname sys;
    uname(&sys);

    printf("System Name: %s\n", sys.sysname);
    printf("Node Name  : %s\n", sys.nodename);
    printf("Release    : %s\n", sys.release);
    printf("Version    : %s\n", sys.version);
    printf("Machine    : %s\n", sys.machine);

    long uptime;
    FILE *fp = fopen("/proc/uptime", "r");
    if (fp) {
        fscanf(fp, "%ld", &uptime);
        fclose(fp);
        printf("Uptime     : %ld seconds\n", uptime);
    }
}
