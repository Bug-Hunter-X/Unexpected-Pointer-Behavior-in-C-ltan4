int main() {
    int x = 10;
    int y = 0; // Initialize y to avoid any undefined behavior
    int z = 0; // Initialize z to avoid any undefined behavior

    int *ptr = &x;
    *ptr = 20;
    y = *ptr; // y will be 20

    // Create distinct variables and pointers to avoid memory location overlapping
    int a = 30;
    int b = 0;
    int *ptr2 = &a;
    *ptr2 = 40;
    b = *ptr2; // b will be 40

    printf("x: %d, y: %d, z: %d, a: %d, b: %d\n", x, y, z, a, b);

    return 0;
} 