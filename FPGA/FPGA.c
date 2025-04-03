#include <stdio.h>

int f(int P, int Q, int R) {
    // Implementing the given Boolean function f(P, Q, R) = PQ + Q~R + P~R
    return (P & Q) | (Q & !R) | (P & !R);
}

int main() {
    printf("Minterms of f(P, Q, R) = PQ + Q~R + P~R:\n");
    
    // Loop through all possible values of P, Q, R (0 or 1)
    for (int P = 0; P <= 1; P++) {
        for (int Q = 0; Q <= 1; Q++) {
            for (int R = 0; R <= 1; R++) {
                // Calculate the function value for each combination
                int result = f(P, Q, R);
                
                // If the function evaluates to 1, it's a minterm
                if (result == 1) {
                    // Print the minterm index (using a 3-bit binary combination)
                    printf("m%d for P=%d, Q=%d, R=%d\n", (P << 2) + (Q << 1) + R, P, Q, R);
                }
            }
        }
    }
    
    return 0;
}
