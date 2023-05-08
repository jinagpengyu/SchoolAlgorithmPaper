#include<algorithm>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int arr[200000];

void get_max(int left, int right){
    //search the max int bew left to right
    int min = INT_MAX;
    for(int i = left;i < right;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d\n", min);
}
int main(){
    clock_t t1 = clock();
    int n, m;
    int left = 1;
    
    scanf("%d %d", &n, &m);

    for(int i=1;i <= n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1;i <= n;i++){
        if(i-left == 0){
            printf("0\n");
            continue;
        }
        if(i-left > m && left <= i){
            left++;
        }
        get_max(left, i);
    }
    clock_t t2 = clock();
    printf("%.8f\n", (double)(t2-t1)/CLOCKS_PER_SEC);
    return 0;
}