    #include <stdio.h>
     
    int main()
    {
        int a,b,temp=0;
        scanf("%d%d",&a,&b);
        while(a>=b)
        {
            a-=b;
            temp+=1;
        }
        printf("Remainder: --> %d\nQuotient: --> %d",a,temp);
        return 0;
    }
