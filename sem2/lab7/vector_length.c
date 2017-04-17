#include <stdio.h>
#include <math.h>

typedef struct vector {
    double x;
    double y;
    double z;
} vector;

void print_vector(vector v) {
    printf("[ %.1lf, %.1lf, %.1lf ]\n", v.x, v.y, v.z);
}

double count_length(double x, double y, double z) {
    return sqrt(x*x + y*y + z*z);
}

int main() {
    vector v;

    puts("Provide coordinates for v:");
    printf(" x = ");
    scanf("%lf", &v.x);
    printf(" y = ");
    scanf("%lf", &v.y);
    printf(" z = ");
    scanf("%lf", &v.z);
    print_vector(v);

    printf("Vector v length: %lf.\n", count_length(v.x, v.y, v.z));
    return 0;
}