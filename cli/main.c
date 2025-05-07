#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transformer_trainer.h"

void print_help() {
    printf("Usage: cli [command]\n");
    printf("Commands:\n");
    printf("  train  Train a transformer model\n");
    printf("  help   Print this help message\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_help();
        return 1;
    }

    if (strcmp(argv[1], "train") == 0) {
        train_transformer_model();
    } else if (strcmp(argv[1], "help") == 0) {
        print_help();
    } else {
        printf("Unknown command: %s\n", argv[1]);
        print_help();
        return 1;
    }

    return 0;
}
