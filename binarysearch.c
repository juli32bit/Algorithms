#include <stdio.h>

int binarySearch(int[], int, int);
// Por que precisa especificar 3 vezes que tem inteiro nessa fuyncao? 

int main()
{
    int myList[] = {1, 3, 5, 7, 9}; //entendi que em C precisa passar que a variavel eh um array 
    int len = sizeof(myList) / sizeof(myList[0]); // por que o tamanho da lista eh dividido pelo tamanho da lista inicalizando no 0? nao entendi

    printf("%d\n", binarySearch(myList, 3, len));  // 1 
    printf("%d\n", binarySearch(myList, -1, len)); //-1
    return 0;
}

int binarySearch(int list[], int item, int len)
// por que tem que passar 3 parametros para a funcao?
{
    int low = 0;
    int high = len - 1;
    while (low <= high)
    {
        int mid = (low + high)/2; 
        int guess = list[mid];

        if (guess == item)
        {
            return mid;
        }
        else if (guess > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; //number not found
}