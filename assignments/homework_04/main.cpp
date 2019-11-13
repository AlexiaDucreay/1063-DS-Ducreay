/**
 * Lecture 08
 * 
 * List based queue 
 * 
 * Author: Alexia Ducreay
 * Date: Oct 15 2019
 */
#include <iostream>
#include <fstream>
#include "ListQueue.hpp"

using namespace std;


int main() {
    ifstream fin("animals.txt");  // input file of animal info                   
    Animal *a; 

    string name;
    double weight;
    double scary;

                   // animal pointer used to hold popped animals
    ListStack LQ;                 // List based stack object

    
    while (!fin.eof()) {                        // allocate memory for an animal
        fin >> name >> weight >>scary;
        a = new Animal(name,weight,scary);  // load animal with file data
        LQ.Push(a);                               // push animal onto the stack
    }

    // While still animals in the file
    

  cout<<endl;                     // ummmm 

  LQ.Print();                     // print queue to see where values are


  for(int i=0;i<5;i++){           // remove 5 items
    if(!LQ.Empty()){
      int t = LQ.Pop();
      cout<<"Item: "<<t<<endl;    // print out items
    }else{
      cout<<"Empty queue!"<<endl;
    }

  }

  LQ.Print();                     // print again to show front removal
  LQ.PrintPointers();

  Node* f = LQ.GetFront();        // We added this in class JUST to see what front
  cout<<f->data<<endl;            // pointed to.
}
