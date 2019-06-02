/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: tiara
 *
 * Created on June 2, 2019, 4:32 PM
 */

//file: List.h 

typedef int ElementType;

struct node{
	ElementType data;
	node * next;
};

class List
{
 public: 
   List(); //Create an empty list
   bool Empty(); // return true if the list is empty, otherwise return false
   void InsertAtEnd(ElementType x); //insert a value x on the end of the list
   void Delete(ElementType x); //if value x is in the list, remove x
   void Display(); //Display the data values in the list in the order inserted	
   int Sum(); // Compute and return the sum of the values in the list
   int Average(); // Compute and return the average of the values in the list

 private:
	node * first; //pointer to first node
};

