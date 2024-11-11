#include <stdio.h>

int reverseMassive(int arr[], int size) {
    int z = size;
    int reversed = 0;
    for (int i = 0; i < size; i++) {
        reversed = reversed * 10 + arr[z-1];
        z -= 1;
    }
    return reversed;
}

//Создаём функцию, которая в будущем поможет нам быстрее вычислять число равное обратному значению массивов

int main() {
    int n, m;

    printf("Enter the number of characters in the first list: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter characters of the first list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        if (arr1[i] > 9){
            printf("Error");
            return 1;
        }
    }

    //Вводим значение первого массива
    int vrem1 = reverseMassive(arr1, n);
    printf("Reversed number from the first list: %d\n", vrem1);

    printf("Enter the number of characters in the second list: ");
    scanf("%d", &m);
    int arr2[m];

    

    printf("Enter characters of the second list: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
        if (arr2[i] > 9){
            printf("Error");
            return 1;
        }
    }

    //Вводим значение второго массива

    int vrem2 = reverseMassive(arr2, m);
    printf("Reversed number from the second list: %d\n", vrem2);

    int number = vrem1 + vrem2;
    printf("sum vrem1 + vrem2 =%d\n", number);

    //Создаем число равное сумме обратных значений массивов arr1 и arr2

    int final[20];
    int h = -1;

    printf("array value =");

    for( int i = 0; i != h; i++ ){
        final[i] = number % 10;
        number /= 10;


        if (number == 0){
            h = 0;
            for( int p = 2; p != h; p++){
                printf(" " "%d", final[p-2]);
                if (p-2 == i){
                    return 0;
                }
            }

        }

    }

    //Из числа number создаем массив в обратном порядке
}
