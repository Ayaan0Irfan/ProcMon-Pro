#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "system_info.h"
#include "process_list.h"
#include "utils.h"

int main() {
    clear_screen();
    printf("========== ProcMon Pro ==========");
    printf("\nSystem Info:\n--------------\n");
    display_system_info();

    printf("\nProcess List:\n--------------\n");
    list_processes();

    return 0;
}