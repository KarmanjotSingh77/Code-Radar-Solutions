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
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    int unq[num];

    int counter = 0;
    for (int i = 0; i < num; i++){
        if (!(alreadyExists(unq, arr[i], num)))
            unq[counter] = arr[i];
            counter++;
    }

    for (int i = 0; i < counter; i++){
        int counter2 = 0;
        for(int j = 0; j < num; j++){
            if(unq[i] == arr[j]){
                counter2++;
            }
        }
        printf("%d %d\n", unq[i], counter2);
    }

}