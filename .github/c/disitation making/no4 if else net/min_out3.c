#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a < b) {
        
        if (a < c) {
            
            printf("The minimum number is %d\n", a);
        } 
        else if (a==c)
        {

        printf("The minimum numbers are %d and %d\n", a, c);

        }
        
        
        else {
            
            printf("The minimum number is %d\n", c);
        }
    } else if (b<a) {
        
        if (b < c) {
            
            printf("The minimum number is %d\n", b);

        }
        else if (b==c)
        {
          printf("The minimum numbers are %d and %d\n", b, c);
        }
        
         else {
            
            printf("The minimum number is %d\n", c);
        }
    }
        else 
        {
            if (a<c && a==b)
            { printf("The minimum number is %d and %d\n", a,b);
            }
           
            else
            {
            
        printf("%d=%d=%d ,so min = %d ,%d and %d \n",a,b,c,a,b,c);
            }

        }

        getch ();
    return 0;
}

