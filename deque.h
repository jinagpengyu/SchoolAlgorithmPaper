/*
** EPITECH PROJECT, 2023
** jiangpengyu
** File description:
** enter
*/

#include<cstdio>
using namespace std;

void single_deque(){
    int n, m;    
    int left = 1;
    int right = 0;
    scanf("%d %d", &n, &m);
    int a[20000];
    int q[20000];
    for(int i=1;i <= n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=1;i <= n;i++){
        printf("%d\n", a[q[left]]);
        if(i-q[left]+1 > m && left <= right){
            left++;
        }
        while(a[i] < a[q[right]] && left <= right){
            right--;
        }
        q[++right] = i;
    }
}