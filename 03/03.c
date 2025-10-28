#include <unistd.h>

int f0000 (int a0000, int a0001) { return ( write(1, &a0000, a0001) 		  ); } 
int f0001 (int a0000, int a0001) { return ( ( a0000 && a0001 ) 		  ); }
int f0002 (int a0000, int a0001) { return ( ( a0000 || a0001 ) 		  ); }
int f0003 (int a0000, int a0001) { return ( (!f0001 ( a0000, a0001) ) 		  ); }
int f0004 (int a0000, int a0001) { return ( (!f0002 ( a0000, a0001) ) 		  ); }

//int main () { return ( f0000(0, 	0					) ); }
//int main () { return ( f0000(0, 	1					) ); }
//int main () { return ( f0000(0, 	f0000(0, 	0) 			) ); } 
//int main () { return ( f0000(0, 	f0000(0, 	1) 			) ); }
//int main () { return ( f0000(0,  	f0000(0, 	f0000(0, 0))		) ); }
//int main () { return ( f0000(0,	f0000(0, 	f0000(0, 1))		) ); }
//int main () { return ( f0000(0,  	f0000(0, 	f0000(1, 0)) 		) ); }
//int main () { return ( f0000(0,  	f0000(0, 	f0000(1, 1)) 		) ); }
//int main () { return ( f0000(0, 	f0000(0, 	f0001(0, 0))		) ); }
//int main () { return ( f0000(0, 	f0000(0, 	f0001(0, 1))		) ); }
//int main () { return ( f0000(0,  	f0000(0, 	f0001(1, 0))		) ); }
//int main () { return ( f0000(0,  	f0000(0, 	f0001(1, 1))		) ); }
//int main () { return ( f0000(0,	f0000(1, 	0)			) ); }
//int main () { return ( f0000(0, 	f0000(1, 	1)			) ); }
//int main () { return ( f0000(0, 	f0000(1, 	f0000(0, 0))		) ); }
//int main () { return ( f0000(0,  	f0000(1, 	f0000(0, 1))		) ); }
//int main () { return ( f0000(0,  	f0000(1, 	f0000(1, 0)) 		) ); }
//int main () { return ( f0000(0,  	f0000(1, 	f0000(1, 1)) 		) ); }
//int main () { return ( f0000(0, 	f0000(1, 	f0001(0, 0))		) ); }
//int main () { return ( f0000(0,  	f0000(1, 	f0001(0, 1)) 		) ); }
//int main () { return ( f0000(0,  	f0000(1, 	f0001(1, 1))		) ); }
//int main () { return ( f0000(0, 	f0001(0, 	0) 			) ); }
//int main () { return ( f0000(0, 	f0001(0, 	1)			) ); }
//int main () { return ( f0000(0, 	f0001(0,	f0000(0,0)) 		) ); }
//int main () { return ( f0000(0, 	f0001(0, 	f0000(0,1))		) ); }
//int main () { return ( f0000(0,  	f0001(0, 	f0000(1,0))		) ); }
//int main () { return ( f0000(0,  	f0001(0, 	f0000(1,1))		) ); }
//int main () { return ( f0000(0, 	f0001(0, 	f0001(0,0))		) ); } // How did we decide to limit the depth here? Max prec, Min e?
//int main () { return ( f0000(0, 	f0001(0, 	f0001(0,1))		) ); }
//int main () { return ( f0000(0, 	f0001(0, 	f0001(1,0))		) ); }
//int main () { return ( f0000(0, 	f0001(0, 	f0001(1,1))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	0)			) ); }
//int main () { return ( f0000(0, 	f0001(1, 	1) 			) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0000(0,0))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0000(0,1))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0000(1,0))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0000(1,1))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0001(0,0))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0001(0,1))		) ); }
//int main () { return ( f0000(0, 	f0001(1, 	f0001(1,0))		) ); }
//int main () { return ( f0000(0,  	f0001(1, 	f0001(1,1))      	) ); } 	// f0000 0 f0001 1 f0001 1 1 	    , 2.031211
//int main () { return ( f0000(0, 	f0001(1, 	f0001(1, f0000(0, 0) ) ) 	) ); }	// f0000 0 f0001 1 f0001 1   f0000 0 0 , 2.03121200 
  int main () { return ( f0000(0,  	f0001(1, 	f0001(1, f0000(0, 1) ) ) 	) ); }	// f0000 0 f0001 1 f0001 1   f0000 0 1 , 2.03121201



