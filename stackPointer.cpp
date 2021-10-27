//
//  main.cpp
//  sample
//
//  Created by patric phinehas raj on 01/09/21.
//

#include <iostream>
#define max 3

int *tos, *p1, arr_stack[max];

using namespace std;

void push(void);
void pop(void);
void display(void);
bool isEmpty(void);
bool isFull(void);

bool isEmpty(){
    if(p1 == tos){
        return true;
    }
    return false;
}

bool isFull(){
    if(p1 == (tos + max)){
        return true;
    }
    return false;
}

void display(){
    if(isEmpty()){
        cout<<"The Stack is Empty"<<endl;
    }
    else{
        int *p2;
        p2 = tos;
        while(p2!=p1){
            cout<<*p2<<" ";
            p2++;
            if(p2 == (tos+max)){
                break;
            }
        }
    }
    cout<<endl;
}

void push(){
    cout<<"Checking Stack Capability"<<endl;
    if(isFull()){
        cout<<"Stack is Full\n user Adviced to POP (choice 3)"<<endl;
    }
    else{
        int val;
        cout<<"Enter the value to be Pushed : ";
        cin>>val;
        *p1 = val;
        cout<<*p1<<"the value is pushed in the stack";
        p1++;
    }
    
}

void pop(){
    if(isEmpty()){
        cout<<"The Stack is Empty"<<endl;
    }
    else{
        p1--;
        cout<<"the value popped is : "<< (*p1)<<endl;
    }
}

int main(){
    int choice {0};
    tos = arr_stack;
    p1 = arr_stack;
    
    while (1) {
        cout<<"Enter your choice\n1) Display stack\n2) Push\n3) Pop"<<endl;
        cin>>choice;
        switch (choice) {
            case 1:
                display();
                break;
            case 2:
                push();
                break;
            case 3:
                pop();
                break;
            default:
                cout<<"\nenter proper choice"<<endl;
                break;
        }
    }
    return 0;
}
