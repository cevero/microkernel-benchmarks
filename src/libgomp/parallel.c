#include "libgomp.h"
#include "omp.h"
#include <nanvix/sys/thread.h>


void GOMP_parallel (void (*) (void*), void *, int, unsigned int)
{
    
}

void GOMP_parallel_start (void *, void *, int);

void GOMP_parallel_end (void);

int omp_get_num_procs(void);

int omp_get_num_threads(void);

int omp_get_max_threads(void);

int omp_get_thread_num(void);

int omp_in_parallel(void);
