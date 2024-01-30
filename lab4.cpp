#include <iostream>

using namespace std;

class stack {
    public:
    int stack[20];
    int top = -1;
    int n = 20;
    int input;
        
        void push(){
          if (top == n-1){
            cout << "Stack Overflow. Can't add elements!" << endl;
          }

          else {
            top++;
            stack[top] = input;
          }   
        }

        void pop(){
          if (top == -1){
            cout << "Stack Underflow. There are no elements!" << endl;
          }

          else {
            cout << "Popped element: " << stack[top];
            top--;
            cout << endl;
          }
        }

        void returnTop(){
          if (top == -1){
            cout << "Stack Underflow. There are no elements!" << endl;
          }

          else {
            cout << "Top of the stack is: " << stack[top] << endl;
          }
        }

        void ifEmpty(){
          if (top == -1){
            cout << "Stack is empty." << endl;
          }

          else {
            cout << "Stack is not empty." << endl;
          }
        }
};

int main() {
  int value;
  char letter;
  int condition = 0;
  stack s;

  while (condition != 1) {
    cout << endl << "A. Push an integer to the stack" << endl;
    cout << "B. Pop the stack" << endl;
    cout << "C. Return the top of the stack" << endl;
    cout << "D. Check if the stack is empty" << endl;
    cout << "E. Exit" << endl << endl;
    cout << "What do you want to do? ";
    cin >> letter;
    
    switch(letter) {
      case 'A': 
        cout << "Integer to be pushed: ";
        cin >> value;
        s.input = value;
        s.push();
        break;

      case 'B':
        s.pop();
        break;

      case 'C':
        s.returnTop();
        break;

      case 'D':
        s.ifEmpty();
        break;

      case 'E':
        condition = 1;
        break;

      default:
        cout << "Please input a valid choice." << endl;
    }
  }
    return 0;
}
