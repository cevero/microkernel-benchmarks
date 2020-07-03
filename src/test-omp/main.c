#include <nanvix/sys/perf.h>
#include <nanvix/sys/thread.h>
#include <nanvix/ulib.h>
#include <posix/stdint.h>
#include <kbench.h>


#define NTHREADS_MAX  (THREAD_MAX - 1) /**< Maximum Number of Working Threads      */
/*============================================================================*
 * Benchmark Driver                                                           *
 *============================================================================*/

/**
 * @brief Fork-Join Benchmark
 *
 * @param argc Argument counter.
 * @param argv Argument variables.
 */
void *Hello_rei(void *teste);

int __main2()
{
    int i,k;
//    int id_thread[NTHREADS_MAX];

    kthread_t tid[NTHREADS_MAX];

    for(i=0; i<NTHREADS_MAX;i++) {
        kthread_create(&tid[i], Hello_rei, ((void*)( (intptr_t) i)));
    }
    for(k = 0; k < NTHREADS_MAX; k++){
        kthread_join(tid[k], NULL);
    }

	return (0);
}

void *Hello_rei(void *teste)
{
    int id;
    id = (int)((intptr_t)teste);
    uprintf("Hello from thread %d\n",id);
    return NULL;
}
