int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20; 
    int y = *ptr; // y will be 20
    int *ptr2 = ptr; // ptr2 will point to the same memory location as ptr
    *ptr2 = 30; // x will be 30 and y will also be 30 because they point to the same memory location. 
    // The unexpected part is if we use a different pointer, like ptr3, to allocate a different value to the same memory location.
    int z = 30;
    int *ptr3 = &z;
    *ptr3 = 40; // z becomes 40, but x and y will still remain 30 because ptr and ptr2 still point to the memory location of x. However, if we change the value at the location that ptr and ptr2 point to, we can also change the value of z (since x and z might share the same memory location due to potential compiler optimization).
    printf("%d %d %d\n", x, y, z); // The output may be unexpected if x and z share the same memory location.   
    return 0; 
}