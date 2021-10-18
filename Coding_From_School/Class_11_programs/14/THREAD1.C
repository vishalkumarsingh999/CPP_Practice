#include <iostream>
#include <string>
#include <sstream>
#include <pthread.h>
using namespace std;
void *printInfo(void *thid){
    long tid;
    tid =(long)thid;
    printf("Hello from thread %ld.\n",tid);
    pthread_exit(NULL);
}    
int main (int argc, char const *argv[])
{
    int num =8;
    pthread_t threadlist[num];
    int rc;
    long t;
    for(t=0;t<num;t++){
        printf("Starting thread %ld\n",t);
        rc = pthread_create(&threadlist[t],NULL,printInfo,(void *)t);
        if(rc)
        {
            printf("Error creating thread");
            exit(-1);

        }
    }
        pthread_exit(NULL);
    return 0;
}