#include<stdio.h>
char a[20],b[20];
main(){
    int i,j,x,y,tmp,t,c[4];
    while(scanf("%s",a)&&a[0]!='#'){
        scanf("%s",b);
        x=0;
        y=0;
        for(i=0;a[i]!='\0';i++){
            if(a[i]=='M'){
                x+=1000;
                for(j=i-1;j!=0&&a[j]=='C';j--){
                    x-=200;
                }
            }
            if(a[i]=='D'){
                x+=500;
                for(j=i-1;j!=0&&a[j]=='C';j--){
                    x-=200;
                }
            }
            if(a[i]=='C'){
                x+=100;
                for(j=i-1;j!=0&&a[j]=='X';j--){
                    x-=20;
                }
            }
            if(a[i]=='L'){
                x+=50;
                for(j=i-1;j!=0&&a[j]=='X';j--){
                    x-=20;
                }
            }
            if(a[i]=='X'){
                x+=10;
                for(j=i-1;j!=0&&a[j]=='I';j--){
                    x-=2;
                }
            }
            if(a[i]=='V'){
                x+=5;
                for(j=i-1;j!=0&&a[j]=='I';j--){
                    x-=2;
                }
            }
            if(a[i]=='I'){
                x+=1;
            }
        }
        for(i=0;b[i]!='\0';i++){
            if(b[i]=='M'){
                x+=1000;
                for(j=i-1;j!=0&&b[j]=='C';j--){
                    x-=200;
                }
            }
            if(b[i]=='D'){
                x+=500;
                for(j=i-1;j!=0&&b[j]=='C';j--){
                    x-=200;
                }
            }
            if(b[i]=='C'){
                x+=100;
                for(j=i-1;j!=0&&b[j]=='X';j--){
                    x-=20;
                }
            }
            if(b[i]=='L'){
                x+=50;
                for(j=i-1;j!=0&&b[j]=='X';j--){
                    x-=20;
                }
            }
            if(b[i]=='X'){
                x+=10;
                for(j=i-1;j!=0&&b[j]=='I';j--){
                    x-=2;
                }
            }
            if(a[i]=='V'){
                x+=5;
                for(j=i-1;j!=0&&b[j]=='I';j--){
                    x-=2;
                }
            }
            if(b[i]=='I'){
                x+=1;
            }
        }
        if(x<y){
            tmp=x;
            x=y;
            y=tmp;
        }
        t=x-y;
        if(t==0){
            printf("ZERO\n");
        }
        else{
            i=3;
            while(t>0){
                a[i]=t%10;
                t-=a[i];
                t/=10;
                i--;
            }
            if(c[0]==1)
            printf("M");
            if(c[0]==2)
            printf("MM");
            if(c[0]==3)
            printf("MMM");
            if(c[1]==1)
            printf("C");
            if(c[1]==2)
            printf("CC");
            if(c[1]==3)
            printf("CCC");
            if(c[1]==4)
            printf("CD");
            if(c[1]==5)
            printf("D");
            if(c[1]==6)
            printf("DC");
            if(c[1]==7)
            printf("DCC");
            if(c[1]==8)
            printf("DCCC");
            if(c[1]==9)
            printf("CM");
            if(c[2]==1)
            printf("X");
            if(c[2]==2)
            printf("XX");
            if(c[2]==3)
            printf("XXX");
            if(c[2]==4)
            printf("XL");
            if(c[2]==5)
            printf("L");
            if(c[2]==6)
            printf("LX");
            if(c[2]==7)
            printf("LXX");
            if(c[2]==8)
            printf("LXXX");
            if(c[2]==9)
            printf("XC");
            if(c[3]==1)
            printf("I");
            if(c[3]==2)
            printf("II");
            if(c[3]==3)
            printf("III");
            if(c[3]==4)
            printf("IV");
            if(c[3]==5)
            printf("V");
            if(c[3]==6)
            printf("VI");
            if(c[3]==7)
            printf("VII");
            if(c[3]==8)
            printf("VIII");
            if(c[3]==9)
            printf("IX");
            printf("\n");
        }
    }
}