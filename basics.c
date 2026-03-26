# include<stdio.h>
# include<conio.h>
int main(){
    printf("Hello world \n");
    printf("C programs");
}


#include<stdio.h>
#include<conio.h>
void main(){
    printf("Welcom to programming world");
}


#include<stdint.h>
#include<conio.h>
void main(){
    int a = 12;
    int b = 13;
    printf("%d",a);
    printf("%d", b);
}

# include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i=i+1) {
        printf("hello world \n");
    }
}



#include<stdio.h>
#include<conio.h>
int main(){
    char shubh[]= "shubham yadav";
    printf("%s", shubh);
}



# include<stdio.h>
#include<conio.h>
void main(){
    int a = 12;
    char s[] = "shubham yadav";
    char t = 'A';
    float b = 21.2;
    double c = 3.2345;
    printf("%d \n", a );
    printf("%s \n", s);
    printf("%f \n", b);
    printf("%lf \n", c);
    printf("%c", t);
}


# include<stdio.h>
# include<conio.h>
void main(){
//     int a,b,sum;
//     printf("Enter two numbers:");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum= %d", sum);

char s[5];
printf("enter your string:");
scanf("%s", s);
printf("your string is : %s", s);
}

# include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Square is : %d", a * a);

}

#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter your first number: ");
    scanf("%d", &a);
    int b;
    printf("enter your secont number:");
    scanf("%d", &b);
    int c;
    printf("enter your third number:");
    scanf("%d", &c);
    int d;
    d = (a + b + c) / 3;
    printf("Your avernumber is : %d", d);
}


#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    int z;
    printf("enter a nummber");
    scanf("%d", &a);
    printf("add value two:%d \n", a + 2);
    printf("multiply value five:%d \n", a * 2);
    printf("reminder value three:%d \n", a % 2);
}

#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    printf("%d \n", a++);
    printf("%d", ++a);
}


#include<stdio.h>
#include<conio.h>
void main(){
    double r;
    double a;
    double c;
    printf("enter your radius");
    scanf("%lf", &r);
    a = 3.14 * r * r;
    printf("%f \n", a);
    c = 2 * 3.14 * r;
    printf("%f \n", c);
}




#include<stdio.h>
#include<conio.h>
void main(){
    double r;
    double a;
    double c;
    printf("enter your radius");
    scanf("%lf", &r);
    a = 3.14 * r * r;
    printf("%f \n", a);
    c = 2 * 3.14 * r;
    printf("%f \n", c);
}



#include<stdio.h>

int main(){
    int number = 19;
    printf("enter number");
    scanf("%d", &number);
    if (number>18){
        printf("adult\n");
    }
    else{
        printf("not adult \n");
    }
    printf("thank you");
    return 0;
}


# include<stdio.h>
int main(){
    int marks;
    printf("enter your marks:-");
    scanf("%d", &marks);
    if (marks<30){
        printf("grade c \n");
    }
    else if (marks>=30 && marks<70){
        printf("grade b \n");
    }
    else if (marks>=70 && marks<90){
        printf("grade a \n");
    }
    else{
    printf("grade a++");
    }
}


Write a C program to check whether a number is positive, negative, or zero.

#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    printf("Enter your number:-");
    scanf("%d", &number);
    if (number<0){
        printf("number is a negative number%d \n", number);
    }
    else if(number>0){
        printf("number is positive %d \n", number);
    }
    else{
        printf("number is zero %d \n", number);
    }
}

