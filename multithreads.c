#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define MAX_THREADS 6 

int n; 
int thread_count;

void* print_numbers(void* arg) {
    int thread_id = *(int*)arg;
    int start = (n / thread_count) * thread_id;
    int end = (thread_id == thread_count - 1) ? n : (n / thread_count) * (thread_id + 1);

    for (int i = start; i < end; i++) {
        printf("%d ", i + 1);
    }
    
    return NULL;
}

int main() {
    printf("Enter the number of elements to list: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

   
    thread_count = (n < MAX_THREADS) ? n : MAX_THREADS;

    pthread_t threads[thread_count];
    int thread_ids[thread_count];

    for (int i = 0; i < thread_count; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, print_numbers, &thread_ids[i]);
    }

    for (int i = 0; i < thread_count; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("\n");
    return 0;
}
