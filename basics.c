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
    int z;
    printf("enter a nummber");
    scanf("%d", &a);
    printf("add value two:%d \n", a + 2);
    printf("multiply value five:%d \n", a * 2);
    printf("reminder value three:%d \n", a % 2);


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



Write a C program to check whether a number is even or odd.

#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    printf("enter your number:-");
    scanf("%d", &number);
    if (number%2==0){
        printf("is a even number \n");
    }
    else{
        printf("is odd number ");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int a , b;
    printf("enter your first number:-");
    scanf("%d", &a);
    printf("enter your second number:-");
    scanf("%d", &b);
    if (a>b){
        printf("a is grater then b %d \n", a);
    }
    else{
        printf("b is grater then a %d \n", b);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int a , b;
    printf("enter your first number:-");
    scanf("%d", &a);
    printf("enter your second number:-");
    scanf("%d", &b);
    if (a>b){
        printf("a is grater then b %d \n", a);
    }
    else{
        printf("b is grater then a %d \n", b);
    }
    return 0;
}


#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter your first number:-");
    scanf("%d", &a);
    printf("enter your second number:-");
    scanf("%d", &b);
    printf("enter your third number :-");
    scanf("%d", &c);
    if(a>b && a>c){
        printf("%d is grater then %d and %d \n",a,b,c);
    }
    else if(b>a && b>c){
        printf("%d is frater then %d and %d \n", b, a, c);
    }
    else if(c>a && c>b){
        printf("%d is grater then %d and %d \n", c, a, b);
    }
    else{
        printf("enter a valid number");
    }
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("enter your yaer:-");
    scanf("%d", &year);
    if (year%4==0 && year%50!=0 || year%400==0){
        printf("%d is a leap year \n",year);
    }
    else{
        printf("%d is not a leap year \n", year);
    }
}


#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("enter your agge:-");
    scanf("%d", &age);
    if (age<18){
        printf("you are not eligible for vote.");
    }
    else{
        printf("you are eligible for vote.");
    }
}



#include<stdio.h>
#include<conio.h>
int main(){
    int a, b;
    char op;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    printf("enter your operator");
    scanf(" %c", &op);
    switch (op){
        case '+':
            printf("%d  \n", a + b);
        break;
        case '-':
            printf("%d \n", a - b);
            break;
        case '*':
            printf("%d \n", a * b);
            break;
        case '/':
            printf("%d \n", a / b);
            break;
        default:
            printf("invalid operator");
    }
    return 0;


#include<stdio.h>
#include<conio.h>
int main(){
    int day;
    printf("enter the number from 1 -7:-");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    
    default:
        printf("enter only in between 1 to 7");
    }
}

#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 5;i++){
        printf("hello world\n");
    }
}

#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 5;i++){
        printf("hello world\n");
    }
}

#include<stdio.h>
int main(){
    for (int i = 1; i <= 50;i++){
        printf("%d \n", i);
    }
}


#include<stdio.h>
int main(){
    int i=1;
    while (i<=5)
    {
        printf("hello world \n");
        i++;
    }
    
}


#include<stdio.h>
int main(){
    int i=1;
    while (i<=5)
    {
        printf("hello world \n");
        i++;
    }
    
}


#include<stdio.h>
int main(){
    for (int i = 50; i >= 1;i--){
        printf("%d \n", i);
    }
}

#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 0; i <= 5;i++){
        printf("%d\n", i);
    }
   return 0
}


#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 0; i <= 5;i++){
        printf("%d\n", i);
    }
   return 0
}


#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 0; i <= 5;i++){
        printf("%d\n", i);
    }
   return 0
}

#include<stdio.h>
int main(){
    for (int i = 1; i <= 5;i++){
        if(i==3){
            break;
        }
        printf("%d \n", i);
    }
}



#include<stdio.h>
int main(){
    for (int i = 1; i <= 5;i++){
        if (i==5){
            continue;
        }
        printf("%d \n", i);
    }
}


#include<stdio.h>
#include<conio.h>
int main(){
    for (char s = 'a'; s <= 'z';s++){
        printf("%c \n", s);
    }
}


#include<stdio.h>
int main(){
    int  i = 1;
    while (i<=5)
    {
        printf("%d \n", i);
        i++;
    }
    
}



#include<stdio.h>
int main(){
    int  i = 1;
    while (i<=5)
    {
        printf("%d \n", i);
        i++;
    }
    
}


#include<stdio.h>
int main(){
    int n;
    
    printf("enter a number:-");
    scanf("%d", &n);
    int i = 0;
    while (i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    
}


# write a program in c to display even numbers between five to fifteen.

#include<stdio.h>
int main(){
    for (int i = 5; i < 15; i++)
    {
        printf("%d\n", i);
    }
    
}
#include<stdio.h>
int main(){
    for (int i = 5; i < 15; i++)
    {
        printf("%d\n", i);
    }
    
}

#include<stdio.h>
int main(){
    for (int i = 5; i < 15; i++)
    {
        printf("%d\n", i);
    }
    
}
#include<stdio.h>
int main(){
    for (int i = 5; i < 15; i++)
    {
        printf("%d\n", i);
    }
    
}

#include<stdio.h>
int main(){
    int i = 5;
    while(i<=15){
        printf("%d\n", i);
        i++;
    }
}


# write a program in c to display between one to hundred in odd value.

#include<stdio.h>
#include<conio.h>
int main(){
    int i = 1;
    while(i<=50){
        if (i%2!=0){
            printf("%d \n", i);
        }
        i++;
    }
}



#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 1; i <= 50;i++){
        if(i%2!=0){
            printf("%d \n", i);
        }
    }
}

#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 1; i <= 50;i++){
        if(i%2!=0){
            printf("%d \n", i);
        }
    }
}

#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 1; i <= 50;i++){
        if(i%2!=0){
            printf("%d \n", i);
        }
    }
}

# write a program in c to find sum of numbers between one to ten.

#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 1; i <= 5;i++){
        sum += i;
    }
    printf("%d \n", sum);
}



#include<stdio.h>
int main(){
    int sum = 0;
    int i = 1;
    while(i<=5){
        sum += i;
        i += 1;
    }
    printf("%d \n", sum);
}

# write a program to print from 1 to 50.

#include<stdio.h>
int main(){
    int i = 1;
    while(i<=50){
        printf("%d\n", i);
        i++;
    }
}

#include<stdio.h>
int main(){
    for (int i = 1; i <= 50;i++){
        printf("%d\n", i);
    }
}





// # write a program to print from 1 to n.

#include<stdio.h>
int main(){
    int n;
    int i = 1;
    printf("enter your number:-");
    scanf("%d", &n);
    while(i<=n){
        printf("%d \n", i);
        i++;
    }

}


#include<stdio.h>
int main(){
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        printf("%d\n", i);
    }
}


#include<stdio.h>
int main(){
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= 5;i++){
        printf("%d\n", n * i);
    }
}


// # write a program to print sum of n to 1.

#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    while(n>=1){
        sum += n;
        n--;
    }
    printf("%d\n", sum);
}


#include<stdio.h>
#include<conio.h>
int main(){
    int sum = 0;
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        sum += i;
    }
    printf("%d\n", sum);
}


// # write a program in c  to print sum of squre of 1 to n natural numbers.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    int sum = 0;
    printf("enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        sum =sum+ pow(i, 2);
    }
    printf("%d \n", sum);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n;i++){

        sum = sum + (i * i * i);
    }
    printf("%d\n", sum);
}

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n;i++){

        sum = sum + pow(i,3);
    }
    printf("%d\n", sum);
}




// # write a program to print only even number between 1 to n.

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:-");
    scanf("%d", &n);
    int i = 1;
    while(i<=n){
        if(i%2==0){
            printf("%d\n", i);
        }
        i++;
    }
}



// # # WRITE A PROGRAM TO FIND SUM OF THE DIGIT OF A GIVEN NUMBERS.

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int sum = 0;
    printf("enter your number:-");
    scanf("%d", &n);
    while(n>0){
        int digit = n % 5;
        sum = sum + digit;
        n /= 5;
    }
    printf("%d\n", sum);
}


// # # write a program to find sum of square of digit of given numbers.


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    int sum = 0;
    printf("enter a number:-");
    scanf("%d", &n);
    while(n>0){
        int digit = n % 5;
        sum = sum + (digit * digit);
        n /= 5;
    }
    printf("%d\n", sum);
}



#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    int sum = 0;
    printf("enter a number:-");
    scanf("%d", &n);
    while(n>0){
        int digit = n % 5;
        sum = sum + (digit * digit*digit);
        n /= 5;
    }
    printf("%d\n", sum);
}


#include <stdio.h>
#include <math.h>

int main() {
    int n, 
    original, 
    sum = 0, 
    digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp = temp / 5;
    }

//     // Calculate Armstrong sum
    while (n > 0) {
        int digit = n % 5;
        sum = sum + pow(digit, digits);
        n = n / 5;
    }

    // Check
    if (original == sum) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("It is not an Armstrong number.\n");
    }

    return 0;
}

//  # WRITE  A PROGRM TO CHECK WEATHER THE NUMBER IS ARMSTRONG OR NOT .



#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    int sum = 0;
    int temp;
    int leng=0;
    printf("enter your numberr:-");
    scanf("%d", &n);
    temp = n;
    int tempp = n;
    while(tempp>0){
        leng++;
        temp /= 5;
        
    }
    while(n>0){
        int  digit = n % 5;
        sum = sum + pow(digit , leng);
        n /= 5;
    }
if(temp==sum){
    printf("It is a armstrong number.");
}
else{
    printf("it is not a armstrong number.");
}
// }


#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, leng = 0;

    printf("Enter your number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        leng++;
        temp = temp / 5;
    }

    // Armstrong calculation
    temp = n;
    while (temp > 0) {
        int digit = temp % 5;
        sum = sum + pow(digit, leng);
        temp = temp / 5;
    }

    if (original == sum) {
        printf("It is an Armstrong number.");
    } else {
        printf("It is not an Armstrong number.");
    }

    return 0;
}




#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    int original;
    int sum = 0;
    int len = 0;
    printf("enter your number:-");
    scanf("%d", &n);
    original = n;
    while(n>0){
        len++;
        n = n / 5;
    }
    while(n>0){
        int digit = n % 5;
        sum = sum + pow(digit, len);
        n = n / 5;
    }

    if(original==sum){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number.");
    }
}




#include<stdio.h>
// #include<conio.h>
#include<math.h>
int main(){
    int n, original, sum = 0, len = 0;
    printf("enter your number:-");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while(temp>0){
        len++;
        temp = temp / 5;
    }
    temp = n;
    while(temp>0){
        int digits = temp % 5;
        sum = sum +(int) pow(digits, len);
        temp = temp / 5;
    }
    if(original==sum){
        printf("Armstrong number.");
    }
    else{
        printf("Not Armstrong Numbeer.");
    }
}




#include<stdio.h>
#include<conio.h>
#include<math.h>
void printHello();
void printGoodbye();


int main(){
    printHello();
    printHello();
    printGoodbye();
    printGoodbye();
    return 0;
}

void printHello(){
    printf("Hello \n");
}

void printGoodbye(){
    printf("good bye \n");
}




#include<stdio.h>
#include<conio.h>
#include<math.h>
void namaste();
void bonjour();

int main(){
    char h;
    printf("enter i for indian and f for france:-");
    scanf("%c", &h);
    if (h=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
    bonjour();
}
void bonjour(){
    printf("bonjaur\n");
}



#include<stdio.h>
#include<conio.h>
#include<math.h>

void printHello();
void printName();
void printCaste();
void printSum();
int main(){
    printHello();
    printHello();
    printName();
    printCaste();
    printSum();

//     return 0;
// }

// void printHello(){
//     printf("hello\n");
// }

void printName(){
    printf("Shubham\n");

}

void printCaste(){
    printf("Yadav\n");
}

void printSum(){
    int a;
    int b;
    int z;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    z = a + b;
    printf("%d", z);
}


#include<stdio.h>
#include<conio.h>
#include<math.h>
void india();
void france();
int main(){
    char s;
    printf("enter  i for indian and f for frnace:-");
    scanf("%c", &s);
    if (s=='i'){
        india();
    }
    else{
        france();
    }
    return 0;
}



