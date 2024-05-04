#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int M=3,N=4;
int q[M][N],znach,indx,kolvo=0;
int main(){
    scanf("%d %d",&znach,&indx);
    srand(znach);
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            int x=rand()%6;
            q[i][j]=x;
        }
    }
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            cout << q[i][j] <<"  ";
        }
        cout <<"\n";
    }
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            if(indx==q[i][j]){
                printf("(%d.%d)",i,j);
                kolvo=1;
            }
        }
    }
    if (kolvo==0){cout<<"NO";}
    cout <<"\n";

}