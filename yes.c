#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String Compare for CLI Arguments

void help_menu();
void info_menu();

int main(int argc, char *argv[]) {
    const char *str = "";
    char buffer[1024] = "";

    if (argc >= 2) {
        for (int i = 1; i < argc; ++i) {
            if (strcmp(argv[i], "--help") == 0) {
                help_menu();
                exit(0);
            } else if (strcmp(argv[i], "--version") == 0 || strcmp(argv[i], "-V") == 0) {
                info_menu();
                exit(0);
            } else {
                strcat(buffer, argv[i]);
                strcat(buffer, " ");
                str = buffer;
            }
        }
    } else {
        str = "y";
    }

    do {
        printf("%s\n", str);
    } while(1 == 1);

    return 0;
}

void help_menu() {
    printf("Usage: yes [STRING]\n");
    printf("   or: yes OPTION\n");
    printf("\nRepeatedly output a line with all specified STRING(s), or 'y' by default.\n");
    printf("\n\t\t--help\t\tdisplay this help and exit\n");
    printf("\t\t--version, -V\toutput version information and exit\n");
    printf("\nOnline help available: <https//www.github.com/RileyMeta/yes>\n");
}

void info_menu() {
    printf("yes (Riley's Core Utils) v0.1\n");
    printf("Copyright (C) 2025 Riley Ava\n");
    printf("License MIT: <https://opensource.org/license/mit>\n");
    printf("This is free software: you are free to change and redistribute it.\n");
    printf("There is NO WARRANTY, to the extent permitted by law.\n");
    printf("\nWritten by: Riley Ava\n");
}
