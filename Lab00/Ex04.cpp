#include <iostream>

#define SIZE 5

int main(){
    long value1=200000;
    long value2;
    int i;
    
    long *long_ptr;
    
    long_ptr = &value1;
    
    std::cout << *long_ptr<< " ";
    
    value2 = *long_ptr;
    
    std::cout << value2<< " ";
    
    std::cout << &value1<< " ";
    
    std::cout << long_ptr<< " ";
    
    if (&value1 == long_ptr){
        std::cout << '1'<< " ";
    }
    
    unsigned int values[] = {2,4,6,8,10};
    
    unsigned int *v_ptr;
    
    for (i=0;i<SIZE;i++){
        std::cout << values[i]<< " ";
    }
    
    v_ptr = &values[0];
    
    
    for (i=0;i<SIZE;i++){
        std::cout << *(v_ptr+i)<< " ";
    }
    
    for (i=0;i<SIZE;i++){
        std::cout << *(values+i)<< " ";
    }
    
    for (i=0;i<SIZE;i++){
        std::cout << v_ptr[i]<< " ";
    }
    
    std::cout << values[4]<< " ";
    
    std::cout << *(values+4)<< " ";
    
    std::cout << v_ptr[4]<< " ";
    
    std::cout << *(v_ptr+4)<< " ";
    
    std::cout << (v_ptr+3) << " " << *(v_ptr+3)<< " ";
    
    std::cout << v_ptr << " " << v_ptr[0] << " ";
    
    return 0;
}