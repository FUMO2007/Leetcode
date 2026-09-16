#include<iostream>
using namespace std;

int main(){
    //char arr[20];
    //scanf("%19s", arr);
    //printf("%s\n", arr);

    //char arr2[20];
    //fgets(arr2, 20, stdin);//读到\n为止，或者读到19个字符为止
    //printf("%s\n", arr);

    char arr3[20];
    scanf("%[^\n]", arr3);
    printf("%s\n", arr3);

    char arr4[20];
    int ch = 0;
    int i = 0;
    while((ch = getchar()) != '\n' ){
        arr4[i] = ch;
        i++;
    }
    arr4[i] = '\0'; // Add null terminator
    printf("%s\n", arr4);
}