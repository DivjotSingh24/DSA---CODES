//it is getting infinite looped if something other than 1-7 is typed
#include <iostream>
using namespace std;

#define N 5 
int stack[N];
int top = -1;

void Push()
{
    int x;
    cout<<"Enter the Data: "<<endl;
    cin>>x;
    if(top==N-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void Pop()
{
    int item;
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        item=stack[top];
        top--;
        cout<<"Popped item is "<<item<<endl;
    }
}
void Peek(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Topmost element is: "<<stack[top]<<endl;
    }
}
void Display(){
    int i;
    for(i=top; i>=0; i--){
        cout<<stack[i]<<endl;
    }
}
bool isEmpty() {
    return top == -1;
}
bool isFull() {
    return top == N - 1;
}
int main() {
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Is Full" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Peek();
                break;
            case 4:
                if (isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;
            case 5:
                if (isFull()) {
                    cout << "Stack is full." << endl;
                } else {
                    cout << "Stack is not full." << endl;
                }
                break;
            case 6:
                Display();
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}