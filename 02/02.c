#include <unistd.h>

int f0000 (int a0000, int a0001) { write(1, &a0000, 1 ); return (a0001); }

int i0000 ( ) { return ( f0000 (48, 0) ); }
int i0001 ( ) { return ( f0000 (49, 1) ); }
int i0002 ( ) { return ( f0000 (50, 2) ); }
int i0003 ( ) { return ( f0000 (51, 3) ); }
int i0004 ( ) { return ( f0000 (52, 4) ); }
int i0005 ( ) { return ( f0000 (53, 5) ); }
int i0006 ( ) { return ( f0000 (54, 6) ); }
int i0007 ( ) { return ( f0000 (55, 7) ); }
int i0008 ( ) { return ( f0000 (56, 8) ); }
int i0009 ( ) { return ( f0000 (57, 9) ); }
  
//	int main ( ) { return ( f0000(i0000(), i0000()) ); }	//00
//	int main ( ) { return ( f0000(i0001(), i0000()) ); }	//10 
//	int main ( ) { return ( f0000(i0002(), i0000()) ); }	//20
//	int main ( ) { return ( f0000(i0003(), i0000()) ); }	//30
//	int main ( ) { return ( f0000(i0004(), i0000()) ); }	//40
//	int main ( ) { return ( f0000(i0005(), i0000()) ); }	//50
//	int main ( ) { return ( f0000(i0006(), i0000()) ); }	//60
//	int main ( ) { return ( f0000(i0007(), i0000()) ); }	//70
//	int main ( ) { return ( f0000(i0008(), i0000()) ); }	//80
	int main ( ) { return ( f0000(i0009(), i0000()) ); }	//90
