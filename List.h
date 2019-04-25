#ifndef LIST_H
#define LIST_H

#include "Course.h"

//COLLECTION CLASS - LINKED LIST
class List{
    
    //Node class - template for a doubly linked list
    class Node{
        
        //List class grants friendship to Node class
        friend class List;
        
        //Node class data members
        private:
            Course* cData;
            Node*   next;
    };

    //List class data members and member functions
    public:

        //List ctor
        List();

        //List dtor - Cleans up the dynamically allocated memory
        ~List();

        //Member function - Adds a new course to the linked list
        void add(Course* cPtr);

        //Member function - prints out the courses to the screen
        void print();

    private:
        //REMINDER - a Variable has a name, a value, an address, a type
        
        //Data member for the head of the list
        Node* head;
        
        //Data member for the tail of the list
        Node* tail;

};
#endif
