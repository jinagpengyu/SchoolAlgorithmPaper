/*
** EPITECH PROJECT, 2023
** jiangpengyu
** File description:
** enter
*/

#include<cstdio>
using namespace std;
int n, m,left=1, right=0, a[200000], q[200000];
void single_deque(){
    scanf("%d %d", &n, &m);

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