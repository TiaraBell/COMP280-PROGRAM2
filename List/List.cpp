/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//implementation file List.cpp
#include "List.h"
#include <iostream>
using namespace std;

List::List() {

}

bool List::Empty() {
    //    if (N = 0) {
    //        return true;
    //    }
    //    return false;
}

void List::InsertAtEnd(ElementType x) {
    node* newptr = new node;
    newptr->data = x;
    newptr->next = NULL;

    if (first == NULL)
        first = newptr;
    else if (x < first->data) {
        newptr->next = first;
        first = newptr;
    }
    else {
        node * p = first;
        node * q = NULL;
        while ((p != NULL) && (p->data < x)) {
            q = p;
            p = p->next;
        }
        newptr->next = p;
        q->next = newptr;
    }

    cout << "Value added";
}

void List::Delete(ElementType x) {
    
}

void List::Display() {
    
}

int List::Sum() {
    int sum = 0;
    return sum;
}

int List::Average() {
    return 0;
}



