//*******Diagonal Matrix********
/*
#include<iostream>
using namespace std;
int main(){
    int a[] = {6,4,5,2};
    int i,j;
    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                cout<<a[i]<<"  ";
            }
            else{
                cout<<"0"<<"  ";
            }
        }
        cout<<"\n";
    }
}

*/

//*******TriDiagonal Matrix- Only main diagonal and the diagonal above, below it have elements, rest have 0 


#include<iostream>
using namespace std;
int main(){
    int a[] = {2,1,3,1,3,5,2,7,9,0};    // if you want the user to enter then keep the size of array as #Define MAX 4 3*MAX-2
    int i,j;
    int k=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i-j==1||i-j==0||i-j==-1){
                cout<<a[k]<<"  ";
                k++;
            }
            else{
                cout<<"0"<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


//************TRIANGULAR MATRIX**********
/*
#include<iostream>
using namespace std;
int main(){
    int a[] = {2,5,1,0,3,1,4,2,7,0};    // if you want the user to enter then keep the size of array as #Define MAX 4 
    int i,j;
    int k=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i>=j){
                cout<<a[k]<<"  ";
                k++;
            }
            else{
                cout<<"0"<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/

//**********Symmetric Matrix**************
