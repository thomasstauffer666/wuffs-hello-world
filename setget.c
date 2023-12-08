
#include <stdio.h>

#define WUFFS_CONFIG__MODULE__BASE
#define WUFFS_IMPLEMENTATION
#include "./setget-wuffs.c"

int main() {
    wuffs_base__status status;
    wuffs_demo__setget setget;
    status = wuffs_demo__setget__initialize(&setget, sizeof__wuffs_demo__setget(), WUFFS_VERSION, 0);
    if (!wuffs_base__status__is_ok(&status)) {
        printf("initialize: %s\n", wuffs_base__status__message(&status));
        return 1;
    }
    status = wuffs_demo__setget__set_plus(&setget, 9);
    if (!wuffs_base__status__is_ok(&status)) {
        printf("set_plus: %s\n", wuffs_base__status__message(&status));
        return 1;
    }
    printf("%i\n", wuffs_demo__setget__get(&setget));
    return 0;
}
