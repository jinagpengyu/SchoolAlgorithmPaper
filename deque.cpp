#include"deque.h"
#include<time.h>
#include<iostream>
int main (){
    clock_t start, end;
    start=clock();
    single_deque();
    end = clock();
    printf("%.10f\n", (double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}