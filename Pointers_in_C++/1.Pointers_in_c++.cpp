#include<bits/stdc++.h>
using namespace std;

int main(){

    // int a = 10;
    // int* aptr = &a;
    // cout<<*aptr<<endl;
    // cout<<aptr<<endl;
    // cout<<&a<<endl;

    // *aptr = 20;

    // cout<<a<<endl;

    // aptr++;
    // cout << aptr<<endl;

    // pointer for array
    int arr[] = {10, 20, 30};
    cout<<*arr<<endl;
    int *ptr = arr;
    for(int i=0; i<3; i++){
        // cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        ptr++;
    }

    return 0;
}

// Arithmatic operation on pointer
/******* 
 * ++, --, +, -
 * *****/