#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
    
    srand((unsigned)time(NULL));
    int max = 0;
    scanf("%d", &max);
    for(int i=0;i < max; i++){
        printf("%d ", rand()%99+10);
    }
    printf("\n");
    return 0;
}