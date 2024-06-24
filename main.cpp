
#include <iostream>
#include "bye.h"
#define STR(x)   #x
#define SHOW_DEFINE(x) printf("%s=%s", #x, STR(x))
int main(int argc, char *argv[]) {
    bye();
    #ifndef DEBUG
    std::cout << "App Release!" << std::endl;
    #else
    std::cout << "App Debug!" << std::endl;
    #endif
    SHOW_DEFINE(MY_DEFINITION);
}
