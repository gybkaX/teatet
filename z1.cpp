#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int M=5,N=4;
int q[M][N],znach;
int main(){
    cin >>znach;
    srand(znach);
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            int x=rand()%29+2;
            q[i][j]=x;
        }
    }
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            cout << q[i][j] <<"  ";
        }
        cout <<"\n";
    }
    cout<<endl;
    int tmp;
    for (int j=0;j<N;j++){
        tmp=q[0][j];
        q[0][j]=q[4][j];
        q[4][j]=tmp;
    }
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            cout << q[i][j] <<"  ";
        }
        cout <<"\n";
    }

}