#include <unistd.h>

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
int main () { return ( f000(0,  f0001(1, 	f001(1,1))      	) ); } 	# f000 0 f001 1 f0001 1 1 		, 2.031211
int main () { return ( f000(0, 	f0001(1, 	f001(1, f000(0, 0) ) ) ) ) }	# f000 0 f001 1 f0001 1   f000 0 0 	, 2.03121200 
int main () { return ( f000(0,  f0001(1, 	f001(1, f000(0, 1) ) ) ) ) }	# f000 0 f001 1 f0001 1   f000 0 1      , 2.03121201



