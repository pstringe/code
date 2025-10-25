#include <unistd.h>

int f0000 (int a0000, int a0001) { write(1, &a0000, 1 ); return (a0001); }

//int main  ( ) { return ( f0000(48, 0) ); }
int main  ( ) { return ( f0000(49, 0) ); }
