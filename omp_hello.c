#include <omp.h>
#include <stdio.h>
   #include <stdlib.h>
   
  int main () {
   int nthreads, tid;
  /*tworzymy blok rownolegly z dwoma prywatnymi zmiennymi*/  
  #pragma omp parallel private(nthreads, tid)
  {
	  /**/
      tid = omp_get_thread_num();
      /*odczyt lb watkow*/
     nthreads = omp_get_num_threads();
      printf("Hello World from thread %d of threads %d\n", tid, nthreads);
    }
  }
