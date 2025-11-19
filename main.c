#include <stdio.h>
#include "mylib.c"
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
