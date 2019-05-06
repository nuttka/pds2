#include "List.hpp"

List::List(){
	this->size = 0;
	this->head = nullptr;
}

void List::insert(int value){
    Node* node = new Node;
	node->value = value;
	node->next = this->head;
	this->head = node;
    this->size += 1;
}

void List::clearList() {
    
    Node* current = this->head, *next;
    
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    
    this->head = NULL;
    
}

void List::print(){
    if(this->size == 0){
        std::cout << "-";
    }
	Node* aux = this->head;
	while(aux != nullptr){
	    std::cout << aux->value << " ";
	    aux = aux->next;
	}
	delete aux;
}

int List::removeFirst(){
    if(this->size == 0){
        return 0;
    }
    int aux = this->head->value;
    Node* current = head;
    this->head = this->head->next;
	this->size -= 1;
	delete current;
	return aux;
}

int List::indexOf(int value){
	if (this->size > 0){
		Node* head = this->head;
		int index = 0;
		while(head->value != value){
			index++;
			head = head->next;
		}
		if (head->value == value){
			return index; 
		}
		delete head;
	}
	else{
		return -1;
	}
}

void List::remove(int value){
	if(this->size == 0){
		return;
	}else if(this->head->value == value){
	    Node* current = head;
	    this->head = this->head->next;
	    delete current;
	    this->size -= 1;
	} else {
	    Node* previous = this->head;
	    Node* current = head->next;
	    while(current != NULL){
	        if(current->value == value){
	            break;
	        }else {
	            previous = current;
	            current = current->next;
	        }
	    }
	    if(current==NULL){
	        return;
	    } else{
	        previous->next = current->next;
	        delete current;
	        this->size -= 1;
	    }
	}
}