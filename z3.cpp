#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int M=5,N=5;
float sred=0;
int q[M][N],znach,indx,Max=0;
int main(){
    scanf("%d",&znach);
    srand(znach);
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            int x=rand()%21;
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
            if(Max<=q[i][j]){
                Max=q[i][j];
                indx=i;  
            }
        }
    }
    for (int j=0;j<N;j++){sred=sred+q[indx][j];}
    sred=sred/N;
    printf("%d %.1f",Max,sred);
    cout <<"\n";

}