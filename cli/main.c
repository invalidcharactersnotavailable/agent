#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ai_transformer/train.h"
#include "ai_transformer/config.h"

void print_help() {
    printf("Usage: cli [command]\n");
    printf("Commands:\n");
    printf("  train [config_file]  Train a transformer model using the specified config file\n");
    printf("  help   Print this help message\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_help();
        return 1;
    }

    if (strcmp(argv[1], "train") == 0) {
        if (argc < 3) {
            printf("Please specify the config file\n");
            return 1;
        }
        const char *config_file = argv[2];
        ai_transformer_train(config_file);
    } else if (strcmp(argv[1], "help") == 0) {
        print_help();
    } else {
        printf("Unknown command: %s\n", argv[1]);
        print_help();
        return 1;
    }

    return 0;
}
