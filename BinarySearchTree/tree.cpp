
/*Compile with g++ tree.cpp -o tree*/

/*
Implementation of a binary search tree in C++.
 */


#include"tree.h"
#include<iostream>
#include<string>
using namespace std;


BST::BST(){
  this->key = -1;
  this->left = nullptr; // nullptr is the null pointer.                                                                                                                             
  this->right = nullptr;
  this->value = "";
}



/* Define the functions insert() and search() here according to their declaration in                                                                                                
   the tree.h header file. */

// the function insert() inserts an element v at the given key k.                                                                                                                   
void BST::insert(int k, string v) {

  if (this->key==-1) {
    this->key = k;   // setup key                                                                                                                                                   
    this->value = v; // setup value                                                                                                                                                 
    this->left = new BST();
    this->right = new BST();
  } else {

    if (this->key == k) {
      this->value = v; // overwrite value                                                                                                                                           
    } else if (k < this->key) {
      this->left->insert(k,v); //insert left                                                                                                                                        
    } else { // insert right                                                                                                                                                        
      this->right->insert(k,v);
    }


  }

}


// the function search() returns the value stored at the given key k.                                                                                                               
string BST::search(int k) {


  if (this->key==-1) {
    return " not found ";
  }

  if (this->key==k) {
    return this->value;

  } else {

    if (k < this->key) {

      return this->left->search(k); //search left                                                                                                                                  \
                                                                                                                                                                                    
    } else { // search right                                                                                                                                                        

      return this->right->search(k);
    }
  }
}



int main(){
  BST * t = new BST();

  t->insert(10,"Ten");
  t->insert(5,"Five");
  t->insert(12, "Twelve");
  t->insert(7, "Seven");
  t->insert(4, "Four");
  t->insert(11, "Eleven");

  cout << t->search(5) <<  endl;
  cout << t->search(10) << endl;
  cout << t->search(6) << endl;
  cout << t->search(7) << endl;
  cout << t->search(11) << endl;

  return 0;
}
