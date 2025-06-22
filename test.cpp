#include <iostream>
using namespace std;

// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

void fun (int A[], int n){
    int i;
    for (i=0;i<n; i++){
        cout << A[i] << endl;
    }
    
}

int main() {
  
    //pointers
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << a << endl;
    // cout << *p << endl;
    // int A[5]={1,2,3,4,5};
    // int *p;
    // p=A;

    // for (int i=0;i<5;i++){
    //     cout << "A: "<< A[i] << endl;
    //     cout << "p: "<<p[i] << endl;
    // }

    //pointers in heap
    // int *p;
    // p = new int[5];
    // p[0]=2;
    // p[1]=4;
    // p[2]=6;
    // p[3]=8;
    // p[4]=10;
    // for (int i=0; i < 5; i++){
    //     cout << p[i] << endl;
    // }

    //functions
    // int a, b;
    // a=10;
    // b=20;
    // swap(&a,&b);
    // cout << "a: " << a << ", b: " << b << endl;

    //Arrays as a perimeter
    int A[5] = {2,4,6,8,10};
    fun(A,5); 

    return 0;
}