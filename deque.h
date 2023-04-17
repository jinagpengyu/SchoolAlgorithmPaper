#include<iostream>
#include<cstdlib>
#include<deque>

void single_deque(){    
    std::deque<int> deque = {};
    int n, m;
    std::cin >> n >> m;
    int arr[n];
    for(int i = 0;i < n; i ++){
        std::cin >> arr[i];
    }
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            arr2[0] = 0;
            deque.push_back(arr[0]);
        }else{
            if()
        }
        if(deque.size() < m){
            deque.push_back(arr[i]);
        }
    }
}