#include<iostream>
#include<string.h>

using namespace std;

template <class T>
struct stackLL{
  T value;
  stackLL<T>* next;
  stackLL(T payload, stackLL<T>* nextptr=NULL):
  value(payload), next(nextptr) {};
};

template<class T>
class sfuncs{

  stackLL<T>* top = NULL;
  public:

  void push(T val){
    top = new stackLL<T>(val, top);
  }

  void printstackLL(){
    stackLL<T>* temp = top;
    while(temp!=NULL){
      cout<<temp->value<<endl;
      temp = temp->next;
    }
    delete temp;
  }

  void pop(){
    if(top!=NULL){
      stackLL<T>* temp = top;
      T popped_value = temp->value;
      cout<<"The popped element is: "<<popped_value<<endl;
      top = top->next;
      delete temp;
    }
    else{
      cout<<"Nothing to pop, empty list"<<endl;
    }
  }

  void peek(){
    if(top==NULL){cout<<"empty stack"<<endl;}
    else{cout<<top->value<<endl;}
  }


};