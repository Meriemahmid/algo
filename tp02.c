#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *LoadString(int N){
    char *str = NULL;
    str = (char*)malloc ((N+1)*(sizeof(char)));
    if (str == NULL) {
        printf("Allocation failed");
        return 0;
    } 
    printf ("give your String:");
    fgets(str, (N+1),stdin);
    return str;
}
int StringLength(char *str){
    int len = 0;
    while (*str!='\0'){
        len++;
        str++;
    }
    return len;
}
void LoadArray(char *p, char arr[]){
    int i = 0;
    while(*p!='\0')  {
        arr[i]=*p;
        i++;
        p++;
    }
    arr[i]='\0';
}
void ReverseArray(char arr[], char rev[], int n){
    char *p = arr+n-1; int i = 0;
    for (p; p >= arr; p--){
        rev [i++]= *p;
    }
    rev [n] = '\0';
}
void DisplayArray(char arr[], int n){
    while(n>0){
        printf("%c\n",*arr);
        arr++;
        n--;
    }
}
int SumStringASCll(char *p){
    if (*p == '\0'){
        return 0;
    }
    return (int)*p+SumStringASCll(p+1);
}
void ReverseString(char *start, char *end){
    if (start>=end){
        return;
    }
    int temp = *start;
    *start=*end;
    *end=temp;
    return ReverseString (start+1, end-1);
}
int main() {
               char *str; int n;
       printf("Please enter the maximum size of the string:\n");
                       scanf("%d", &n);
    getchar();
         str = LoadString(n);
         int len = StringLength(str)+1;
        printf("the length of the string is:%d\n",len);
           char arr[len + 1], rev[len + 1];
    LoadArray(str, arr);
        printf("\n Original array: ");
  
    DisplayArray(arr, len);
    ReverseArray(arr, rev, len);
        printf("\n Reversed array: ");

    DisplayArray(rev, len);
             int sum = SumStringASCll(str);
        printf("\nSum of ASCII values (recursive): %d\n", sum);
    ReverseString(rev, (rev+len));
        printf("String reversed recursively:"); DisplayArray(str,len);
free(str);
return 0;
}
