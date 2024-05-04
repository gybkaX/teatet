#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int M=10;
int q[M],znach,indx,Max=0;
void shekerUb(int* mass, int count){
    int left = count+1, right = M;
    int flag = 1;
    while ((left < right) && flag > 0){
        flag = 0;
        for (int i = left; i < right; i++){
            if (mass[i] < mass[i+1]){
                int t = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = t;
                flag = 1;
            }
        }
        right--;
        for (int i = right; i > left; i--){
            if (mass[i-1] < mass[i]){
                int t = mass[i];
                mass[i] = mass[i-1];
                mass[i-1] = t;
                flag = 1;
            }
        }
        left++;
        if(flag == 0) break;
    }
}
void shekerVoz(int* mass, int count){
    int left = 0, right = count - 1;
    int flag = 1;
    while ((left < right) && flag > 0){
        flag = 0;
        for (int i = left; i < right; i++){
            if (mass[i] > mass[i+1]){
                int t = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = t;
                flag = 1;
            }
        }
        right--;
        for (int i = right; i > left; i--){
            if (mass[i-1] > mass[i]){
                int t = mass[i];
                mass[i] = mass[i-1];
                mass[i-1] = t;
                flag = 1;
            }
        }
        left++;
        if(flag == 0) break;
    }
}
int main(){
    scanf("%d",&znach);
    srand(znach);
    for (int i=0;i<M;i++){
        int x=rand()%25-12;
        q[i]=x;
    }
    for (int i=0;i<M;i++){
        cout<<q[i]<<" ";
    }
    cout<<"\n";
    for (int i=0;i<M;i++){
        if (Max<q[i]){
            Max=q[i];
            indx=i;
        }
    }
    cout<<indx<<"\n";
    shekerVoz(q,indx);
    shekerUb(q,indx);
    for (int i=0;i<M;i++){
        cout<<q[i]<<" ";
    }



}