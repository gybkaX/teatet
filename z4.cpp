#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int M=5;
float sred=0;
int q[M],znach,indx,Max=0;
void shekerSort(int* mass, int count)
{
    int left = 0, right = count - 1; // левая и правая границы сортируемой области массива
    int flag = 1;  // флаг наличия перемещений
    // Выполнение цикла пока левая граница не сомкнётся с правой
    // и пока в массиве имеются перемещения
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i < right; i++)  //двигаемся слева направо
        {
            if (mass[i] < mass[i+1]) // если следующий элемент меньше текущего,
            {             // меняем их местами
                int t = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = t;
                flag = 1;      // перемещения в этом цикле были
            }
        }
        right--; // сдвигаем правую границу на предыдущий элемент
        for (int i = right; i > left; i--)  //двигаемся справа налево
        {
            if (mass[i-1] < mass[i]) // если предыдущий элемент больше текущего,
            {            // меняем их местами
                int t = mass[i];
                mass[i] = mass[i-1];
                mass[i-1] = t;
                flag = 1;    // перемещения в этом цикле были
            }
        }
        left++; // сдвигаем левую границу на следующий элемент
        if(flag == 0) break;
    }
}
int main(){
    scanf("%d",&znach);
    srand(znach);
    for (int i=0;i<M;i++){
        int x=rand()%10+1;
        q[i]=x;
        }
    for (int i=0;i<M;i++){
        cout<<q[i]<<" ";
        }
    cout<<"\n";
    shekerSort(q,M);
    for (int i=0;i<M;i++){
        cout<<q[i]<<" ";
        }

}