#define NEXA_IMPLEMENTATION
#include "..nexa.h"

void on_run() {}

void update(float dt) {}

void render(nxContext* ctx) {}

int main(int argc, char *argv[]) {
    nx_start(on_run, update, render, "Nexa Template", 1280, 720, false);
    return 0;
}