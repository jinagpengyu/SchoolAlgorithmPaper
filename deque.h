#include <cstdarg>
#include <cstdio>
#include<iostream>
#include<queue>
#include <utility>
using namespace std;

const int max=2e6+6;
void single_deque(){
    int n, m;    
    scanf("%d %d", &n, &m);
    deque<pair<int, int>> dq ;
    for(int i = 0;i < n;i++){
        int num = 0;
        scanf("%d",&num);
        if(dq.size() && dq.front().first < i-m){
            dq.pop_front();
        }
        if(dq.size()){
            printf("%d\n" ,dq.front().second);
        }else{
            puts("0");
        }
        while (dq.size() && dq.back().second >= num) {
            dq.pop_back();
        }
        dq.push_back({i,num});
    }
}