#include <unistd.h>

int 	f0007 	(int	i0000,	int 	i0001	) { return ( 	i0000  ^ i0001 ? i0001 : i0000 ); }
int 	f0006 	(int 	i0000, 	int 	i0001   ) { return (	i0000  ^ i0001 ? i0000 : i0001 ); }
int	f0005	(int 	i0000, 	int 	i0001 	) { return (	i0000 || i0001 ? i0001 : i0000 ); }
int	f0004	(int 	i0000,  int 	i0001   ) { return ( 	i0000 || i0001 ? i0000 : i0001 ); }
int 	f0003	(int	i0000,  int 	i0001	) { return (	i0000 && i0001 ? i0001 : i0000 ); }
int	f0002   (int 	i0000,  int 	i0001   ) { return ( 	i0000 && i0001 ? i0000 : i0001 ); }
int 	f0001 	(int 	i0000, 	int 	i0001	) { return ( 		!i0000 ? i0000 : i0001 ); }
int 	f0000	(int	i0000,	int	i0001	) { return (  		 i0000 ? i0000 : i0001 ); }

int main () { return ( f0000 ( 0, 0 			) ); }
//int main () { return ( f0000 ( 0, 1 			) ); }
//int main () { return ( f0000 ( 0, f0000 ( 0, 0 ) 	) ); }
//int main () { return ( f0000 ( 0, f0000 ( 0, 1 ) 	) ); }
//int main () { return ( f0000 ( 0, f0000 ( 1, 0 ) 	  ); }
//int main () { return ( f0000 ( 0, f0000 ( 1, 1 ) 	  ); }

//int main () { return ( f0000 ( 1, 0			  ); }
//int main () { return ( f0000 ( 1, 1			  ); }
//int main () { return ( f0000 ( 1, f0000	( 0, 0 )	  ); }
//int main () { return ( f0000 ( 1, f0000 ( 0, 0 ) 	  ); }
//int main () { return ( f0000 ( 1, f0000 ( 0, 1 )          ); }
//int main () { return ( f0000 ( 1, f0000 ( 1, 0 )	  ); }
//int main () { return ( f0000 ( 1, f0000 ( 1, 1 )	  ); }

//int main () { return ( f0000 ( f0000 (0, 0), 0 		  ); }
//int main () { return ( f0000 ( f0000 (0, 0), 1 		  ); }
//int main () { return ( f0000 ( f0000 (0, 0), f0000(0, 0)  ); }
//int main () { return ( f0000 ( f0000 (0, 0), f0000(0, 1)  ); }
//int main () { return ( f0000 ( f0000 (0, 0), f0000(1, 0)  ); }
//int main () { return ( f0000 ( f0000 (0, 0), f0000(1, 1)) ); }
 
//int 	main 	( ) { return ( 	f0000 ( 0, 1));}
//int 	main 	(int 	argc, 	char 	**argv 	) { return ( 	f0000 ( argc, f0001(argc, argc)  ); }
//int 	main 	(int 	argc, 	char	**argv  ) { return (  	f0001 ( argc, argc		 ));}
//int 	main 	(int 	argc, 	char 	**argv	) { return ( 	f0001 ( argc, f0001(argc, argc)	 ); }
//int	main 	(int 	argc, 	char	**argv  ) { return (	f0002 ( argc, argc		 ));}
//int 	main 	(int 	argc, 	char 	**argv	) { return ( 	f0002 ( argc, f0001(argc, argc)  ); }
//int 	main 	(int 	argc, 	char 	**argv 	) { return ( 	f0003 ( argc, argc		 ));}
//int 	main 	(int 	argc, 	char 	**argv	) { return ( 	f0003 ( argc, f0001(argc, argc)	 ); }
//int 	main 	(int 	argc, 	char	**argv 	) { return ( 	f0004 ( argc, argc}		 ));}
//int 	main 	(int 	argc, 	char 	**argv 	) { return ( 	f0004 ( argc, f0001(argc, argc)  ); }
//int 	main 	(int 	argc,   char 	**argv  ) { return ( 	f0005 ( argc, argc ) 		 ));}
//int	main 	(int 	argc, 	char	**argv	) { return ( 	f0006 ( argc, f0001(argc, argc)  ); }	
//int 	main 	(int 	argc, 	char	**argv 	) { return ( 	f0007 ( argc, argc ) 		 ));}
//int 	main 	(int 	argc, 	char 	**argv	) { return ( 	f0007 ( argc, f0001(argc, argc}	 ); }
