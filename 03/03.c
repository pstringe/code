#include <unistd.h>
// 0 0
// 1 1
// 2 f000 0 0
// 3 f000 0 1
// 4 f000 1 0
// 5 f000 1 1
// 6 f001 0 0
// 7 f001 0 1
// 8 f001 1 0
// 9 f001 1 1

// 0 f000 0 0
// 1 f000 0 1
// 2 f000 1 1


// 0.00 	0
// 1.00		1
// 2.00 	f000 0 0 
// 2.01		f000 0 1
// 2.02		f000 0 f000 ..
// 2.0200	f000 0 f000 0 0
// 2.0201	f000 0 f000 0 1
// 2.0202	f000 0 f000 0 f000 ..

// 2.0203	f000 0 f000 0 f001 ..
// 2.10		f000 1 0
// 2.11		f000 1 1
// 3.00		f001 0 0 
// 3.01		f001 0 1
// 3.10 	f001 1 0
// 3.11		f001 1 1
  
int f0000 (int a0000, int a00001) { return ( write(1, &a0000, 1) ); } 
int f0001 (int a0000, int a00001) { return ( ( a0000 && a00001 ) ); }
int f0002 (int a0000, int a00002) { return ( ( a0000 || a00001 ) ); }
int f0003 (int a0000, int a00002) { return ( (!f0001 ( a0000, a0001) ) ); }
int f0004 (int a0000, int a00002) { rerurn ( (!f0002 ( a0000, a0001) ) ); }

int main () { return ( f000(0, 	0				) ); }
int main () { return ( f000(0, 	1				) ); }
int main () { return ( f000(0, 	f0000(0, 	0) 		) ); } 
int main () { return ( f000(0, 	f0000(0, 	1) 		) ); }
int main () { return ( f000(0,  f0000(0, 	f000(0, 0))	) ); }
int main () { return ( f000(0,	f0000(0, 	f000(0, 1))	) ); }
int main () { return ( f000(0,  f0000(0, 	f000(1, 0)) 	) ); }
int main () { return ( f000(0,  f0000(0, 	f000(1, 1)) 	) ); }
int main () { return ( f000(0, 	f0000(0, 	f001(0, 0))	) ); }
int main () { return ( f000(0, 	f0000(0, 	f001(0, 1))	) ); }
int main () { return ( f000(0,  f0000(0, 	f001(1, 0))	) ); }
int main () { return ( f000(0,  f0000(0, 	f001(1, 1))	) ); }
int main () { return ( f000(0,	f0000(1, 	0)		) ); }
int main () { return ( f000(0, 	f0000(1, 	1)		) ); }
int main () { return ( f000(0, 	f0000(1, 	f000(0, 0))	) ); }
int main () { return ( f000(0,  f0000(1, 	f000(0, 1))	) ); }
int main () { return ( f000(0,  f0000(1, 	f000(1, 0)) 	) ); }
int main () { return ( f000(0,  f0000(1, 	f000(1, 1)) 	) ); }
int main () { return ( f000(0, 	f0000(1, 	f001(0, 0))	) ); }
int main () { return ( f000(0,  f0000(1, 	f001(0, 1)) 	) ); }
int main () { return ( f000(0,  f0000(1, 	f001(1, 1))	) ); }
int main () { return ( f000(0, 	f0001(0, 	0) 		) ); }
int main () { return ( f000(0, 	f0001(0, 	1)		) ); }
int main () { return ( f000(0, 	f0001(0,	f000(0,0)) 	) ); }
int main () { return ( f000(0, 	f0001(0, 	f000(0,1))	) ); }
int main () { return ( f000(0,  f0001(0, 	f000(1,0))	) ); }
int main () { return ( f000(0,  f0001(0, 	f000(1,1))	) ); }
int main () { return ( f000(0, 	f0001(0, 	f001(0,0))	) ); } # How did we decide to limit the depth here? Max prec, Min e?
int main () { return ( f000(0, 	f0001(0, 	f001(0,1))	) ); }
int main () { return ( f000(0, 	f0001(0, 	f001(1,0))	) ); }
int main () { return ( f000(0, 	f0001(0, 	f001(1,1))	) ); }
int main () { return ( f000(0, 	f0001(1, 	0)		) ); }
int main () { return ( f000(0, 	f0001(1, 	1) 		) ); }
int main () { return ( f000(0, 	f0001(1, 	f000(0,0))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f000(0,1))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f000(1,0))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f000(1,1))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f001(0,0))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f001(0,1))	) ); }
int main () { return ( f000(0, 	f0001(1, 	f001(1,0))	) ); }
int main () { return ( f000(0,  f0001(1, 	f001(1,1))      ) ); } 


