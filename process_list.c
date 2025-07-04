#include <stdio.h>
#include <dirent.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "process_list.h"

void list_processes() {
    DIR *dir = opendir("/proc");
    struct dirent *entry;

    if (!dir) {
        perror("opendir /proc");
        return;
    }

    printf("%-10s %-30s\n", "PID", "Process Name");

    while ((entry = readdir(dir)) != NULL) {
        if (isdigit(*entry->d_name)) {
            char path[256];
            snprintf(path, sizeof(path), "/proc/%s/comm", entry->d_name);

            FILE *fp = fopen(path, "r");
            if (fp) {
                char name[256];
                fgets(name, sizeof(name), fp);
                name[strcspn(name, "\n")] = 0;  // Trim newline
                printf("%-10s %-30s\n", entry->d_name, name);
                fclose(fp);
            }
        }
    }

    closedir(dir);
}
