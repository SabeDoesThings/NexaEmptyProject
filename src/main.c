#define NEXA_IMPLEMENTATION

#include "../nexa.h"
#include "game.h"

int main(int argc, char *argv[]) {
    nx_start(on_run, update, render, "Nexa Template", 1280, 720, false);
    return 0;
}
