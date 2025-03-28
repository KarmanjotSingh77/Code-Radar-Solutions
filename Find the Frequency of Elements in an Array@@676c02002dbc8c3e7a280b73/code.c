# include <stdio.h>

int alreadyExists(int arr[], int n, int len){
    for (int i = 0; i < len; i++){
        if(n == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    int unqnums = 0;
    int inp;
    scanf("%d", &num);
    int arr[num];

    for(int i = 0; i < num; i++){
        scanf("%d", &inp);
        if(!(alreadyExists(arr, inp, num))){
            unqnums++;
        }
        arr[i] = inp;
    }
    int unq[unqnums];

    int counter1 = 0;
    for (int i = 0; i < num; i++){
        if(!(alreadyExists(unq, arr[i], unqnums))){
            unq[counter1] = arr[i];
            counter1++;
        }
    }

    int counter2 = 0;
    for (int i = 0; i < unqnums; i++){
        int counter2 = 0;
        for(int j = 0; j < num; j++){
            if(unq[i] == arr[j]){
                counter2++;
            }
        }
        printf("%d %d\n", unq[i], counter2);
    }

}