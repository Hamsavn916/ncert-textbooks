#include <stdio.h>
#include <stdbool.h>

// Define logic gate functions
bool NOR(bool a, bool b) {
    return !(a || b);
}

bool OR(bool a, bool b) {
    return a || b;
}

bool NAND(bool a, bool b) {
    return !(a && b);
}

bool AND(bool a, bool b) {
    return a && b;
}

int main() {
    // Column A gate representations
    printf("Correct matching of Column A with Column B:\n");
    printf("P -> 4 (NOR)\n");
    printf("Q -> 2 (OR)\n");
    printf("R -> 3 (NAND)\n");
    printf("S -> 1 (AND)\n");
    
    return 0;
}
