//
// Created by Felipe1 on 07-04-2016.
//

#include "mini tarea 2.h"
void agrega(Data x){
    insert(x);
}

Data saca(){
    if(isEmpty()==1){
        return 0;
    }else{
        return Delete();
    }
}
bool EstaVacio(){
    if(isEmpty()==1){
        return 1;
    }else{
        return 0;
    }
}
bool Pertenece(Data x){
    while(IsEmpty()!=0){
        Delete();
        while(Delete()!=x){
            if(Delete()== x){
                return 1;
            }else{
                return 0;
            }
        }
    }
}

class nodo{
public:
    item caja;
    nodo *siguiente;

    nodo(){
    }

};
class Lista{
public:
    nodo *head;
    lista(){
        head==nullptr;
    }
    void agregar(nodo* i){
        if(head=nullptr){
            head==new nodo(i);
        }else{
            nodo* nuevo=new nodo(i);
            nuevo->siguiente(head);
            head=nuevo;
        }
    }
    int probabildad(string valor){

    }
};