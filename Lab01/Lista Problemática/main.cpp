#include <iostream>
#include "List.hpp"

int main(){
    List *L = new List();
    int N=0, K=0;
    
    int i;
    
    std::cin >> N;
    std::cin >> K;
    
    if(N<0){
    ;
    }else{
        for(i=0; i<=N; i++){
            L->insert(i);
         }
    }
    L->print();
    
    std::cout << std::endl;
    
    std::cout << L->size << std::endl;
    
    for(i=0; i<K; i++){
        L->removeFirst();
    }
    
    L->print();
    
    std::cout << std::endl;
    
    std::cout << L->size << std::endl;
    
    for(i=N; i>=0; i--){
        if(i%2 == 0){
            L->remove(i);
        }
    }
    
    L->print();
    
    std::cout << std::endl;
    
    std::cout << L->size << std::endl;
    
    L->clearList();
    delete L;
	return 0;
}