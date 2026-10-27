#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *myThreadFunc(void *arg)
{
	while (1) {
		printf("Thread is running...\n");
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_t thread;
	pthread_create(&thread, NULL, myThreadFunc, NULL);
	sleep(5);
	pthread_cancel(thread);
	pthread_join(thread, NULL);

	printf("Main thread finished!\n");
	return 0;
}
