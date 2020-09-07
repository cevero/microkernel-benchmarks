#include "libgomp.h"
#include "omp.h"
#include <nanvix/ulib.h>

void omp_set_num_threads (int nthreads)
{
    uprintf("nthreads = %d\n",nthreads);
}

void omp_set_dynamic (int nthreads)
{
    uprintf("nthreads = %d\n",nthreads);
}
int omp_get_dynamic (void)
{
    return 1;
}
void omp_set_nested (int nthreads)
{
    uprintf("nthreads = %d\n",nthreads);
}
int omp_get_nested (void)
{
    return 1;
}
