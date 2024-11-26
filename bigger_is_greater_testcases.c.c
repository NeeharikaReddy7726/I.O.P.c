#include<stdio.h>
#include<string.h>

int main() {
    int t;
    r:
    printf("enter the number  of test cases \n ");
    scanf("%d", &t);
    if(t<1){
        printf("test cases cannot be negative");
    goto r;
    }
    
    for (int k = 0; k < t; k++)
    {
        char w[101];

        printf("enter the word with all lower case letters \n");
        scanf("%s", w);
        int n = strlen(w);
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (w[n-i-1]>w[n-i-2])
            {
                index = n-i-2; 
                break;
            }
        }

        if (index==-1) // the case when the word is lexologically greatest word  
        {
            printf("no answer\n\n");
        } else
        {
            char temp_char;
            int a;
            for (int i = index; i < n; i++)
            {
                if (w[i]>w[index])
                {
                    temp_char = w[i]; //  storing the letter which is just greater than letter at index
                    a = i;
                }
            }
            

            w[a] = w[index];

            w[index]=temp_char;
            

            // for sorting the rest of the part 
            char temp3;
            for (int j = index+1; j < n-1; j++)
            {
                for (int i = index+1; i < n-1; i++)
                {
                    if (w[i]>w[i+1])
                    {
                        temp3 = w[i];
                        w[i] = w[i+1];
                        w[i+1] = temp3;
                    }
                }
            }
            printf("the lexicographically greater word is %s\n\n", w);
        }
    }

    return 0;
}
