    #include<stdio.h>
    int main()
    {
    int w,m;
    scanf("%d",&w);
    if(w%2==0 && w!=2)
    {
        printf("YES");
    }
    else if(w%2!=0 || w==2)
    {
        printf("NO");
    }
    return 0;
    }
