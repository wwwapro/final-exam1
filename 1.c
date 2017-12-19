#include<stdio.h>
int main(void)
{
    char num[20];
    char name[10];
    char lscore[10];
    char mscore[10];
    char escore[10];
    char *p[6]={num,name,lscore,mscore,escore};
    int i;
    int e;
    
    
    
while(1)
{
    printf("1 write information\n");
    printf("2 printf information\n");
    printf("3 save\n");
    printf("4 load\n");
    printf("5 exit\n");
    scanf("%d",&e);
        


    if(e==1)                                             //1
    {
    
    for(i=0;*(p+i)!=0||*(p+i)!=EOF;i++)
   { 
        if(i==0) printf("write down your number:");
        if(i==1) printf("write down your name:");
        if(i==2) printf("write down your language score:");
        if(i==3) printf("write down your math score:");
        if(i==4) printf("write down your english score:");
        scanf("%s",*(p+i));

    if (*(p+i)==EOF)
    {
        break;
    }

    }
    
    fflush(stdout);
    }












    else if(e==2)                                        //2
    {
        for(i=0;i<4;i++)
        {
            if(i==0) printf("your number:");
            if(i==1) printf("\nyour name:");
            if(i==2) printf("\nyour language score:");
            if(i==3) printf("\nyour math score:");
            if(i==4) printf("\nyour english score:");

        printf("%s",*(p+i));
        }
    }









    else if(e==3)                                          //3
    {
    
    }





    else if(e==4)                                              //4
    {
        FILE *fp;
        char ch[20];

        fp=fopen("1.txt","r");
        while(1)
        {
            fgets(ch,sizeof(ch),fp);
            if(feof(fp))
                break;
            printf("%s",ch);
        }
        fclose(fp);
    }









    else                                                    //5
    {
        return 0;
    }







    
                            //키보드에서 EOF입력받으면멈춤
                            //성적순으로 정렬하여 출
                            //학생 및 선적정보를 txt에 저장

}
return 0;
}
