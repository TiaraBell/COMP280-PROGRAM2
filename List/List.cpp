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
    cout << x << endl;
    if (first->data == x) {
        node *temp = first;
        first = first->next;
        delete temp;
        count--;
    } else {
        node *prev = first;
        node *current = prev->next;
        while ((current != NULL) && (current->data != x)) {
            current = current->next;
            prev = prev->next;
        }
        if (current != NULL) {
            prev->next = current->next;
            delete current;
            count--;
        } else {
            cout << "Value not found.";
        }
    }
}

void List::Display() {
    if (Empty() == true) {
        cout << "The list is empty. There is nothing to display.";
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



