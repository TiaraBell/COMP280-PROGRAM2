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
    first = NULL;
    count = 0;
}

bool List::Empty() {
    if (first == NULL) {
        cout << "The list is empty. Please add values.";
        return true;
    }
    return false;
}

void List::InsertAtEnd(ElementType x) {
    cout << x << endl;
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;

    if (first == NULL) {
        first = temp;
    } else {
        node * p = first;
        node * q = NULL;
        while ((p != NULL)) {
            q = p;
            p = p->next;
        }
        temp->next = p;
        q->next = temp;
    }
    count++;
    cout << "Value added";
}

void List::Delete(ElementType x) {

}

void List::Display() {
    if (Empty() == true) {
        //Empty();
    } else {
        cout << "Here are the values in your list: ";
        node *current = first;
        while (current != NULL) {
            cout << current->data << ", ";
            current = current->next;
        }
    }
}

int List::Sum() {
    int sum = 0;
    node *current = first;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

int List::Average() {
    return (Sum() / count);
}



