//A.M.C.O
//Thank Me Later
//recursive code that displays the Pascal Triangle

#include<iostream>

using namespace std;
long Pascal(int i,int j);

int main(){

    cout<<"Enter the number lines: ";
    int num;
    cin>>num;

    for(int i=1; i<=num;i++){
        for(int j=num;j>i;j--){
            cout<<"   ";
        }
        for(int k=1;k<=i;k++){
            cout<<"   "<<Pascal(i,k);
        }
        cout<<"\n";
    }
    return 0;
}


long Pascal(int i,int j){
    if((i==1) || (j==1) || (i==j)){
        return 1;
    }
    else{
        return (Pascal(i-1, j-1) + Pascal(i-1,j));
    }
}
