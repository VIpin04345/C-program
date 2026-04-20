#include<stdio.h>
int main() {
    printf("Hello World");
    return 0;
}

#include<stdio.h>
int main() {
    int a = 5, b = 10;
    printf("Sum = %d", a + b);
    return 0;
}

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

#include<stdio.h>
int main() {
    int n, i, fact = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d", fact);
    return 0;
}

#include<stdio.h>
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && n != 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

#include<stdio.h>
int main() {
    int n, rev = 0, rem;
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reverse = %d", rev);
    return 0;
}


#include<stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}











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
    return 0
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
    for (int i = 1; i <= 50;i++){
        printf("%d \n", i);
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

    return 0;
}

void printHello(){
    printf("hello\n");
}

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


void india(){
    printf("Namaste");
}
void france(){
    printf("bonjour");
}


#include<stdio.h>
#include<conio.h>
void printTable(int a);

int main(){
    int a;
    printf("enter the value of a");
    scanf("%d", & a);
    printTable(a);
    
}


void printTable(int a){
    for (int i = 1; i <= 5;i++){
        printf("%d\n", a * i);
    }
}



#include<stdio.h>
#include<conio.h>
int printSum(int a, int b);

int main(){

    int a, b;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value b");
    scanf("%d", &b);
    int s = printSum(a, b);
    printf("%d", s);
}
int printSum(int a, int b){
    return a + b;
}


#include<stdio.h>
#include<conio.h>

void printGst(float a);
int main(){
    int a = 50;
    printGst(a);
    printf("%d", a);
}

void printGst(float a){
    a = a + (0.18 * 50);
    printf("%f\n", a);
}

# include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("%f", pow(a, 2));
}



#include<stdio.h>
#include<conio.h>
#include<math.h>
float printSquare(float a);
float printCircle(float a);
float printRact(float a, float b);

int main(){
    float a,b;
    printf("enter your number :-");
    scanf("%f", &a);
    printf("enter your number :-");
    scanf("%f", &b);
    printf("area of square is :%f\n", printSquare(a));
    printf("area of circle is :%f\n", printCircle(a));
    printf("area of ractangle is : %f\n", printRact(a, b));
}

float printSquare(float a){
    return a * a;
}

float printCircle(float a){
    return 3.14 * (a * a);
}

float printRact(float a , float b){
    return a * b;
}




#include<stdio.h>
#include<conio.h>
int main(){
    int age = 12;
    int *ptr = &age;

    // printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
}

#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include<stdio.h>
#include<conio.h>
int main(){
    
int x;
int *ptr;
ptr = &x;
*ptr = 0;
printf("%d\n", x);
printf("%d\n", *ptr);
*ptr += 5;
printf("%d\n", x);
printf("%d\n", *ptr);
(*ptr)++;
printf("%d\n", x);
printf("%d\n", *ptr);
}

#include<stdio.h>
#include<conio.h>
int main(){
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    printf("%d\n", **pptr);
    printf("%d", ***ppptr);
}

#include<stdio.h>
#include<conio.h>
void square(int x);
void _square(int *x);
int main(){

    int a = 4;
    square(a);
    printf("%d\n", a);
    _square(&a);
    printf("%d\n", a);
}


void square(int x){
    x = x * x;
    printf("%d\n", x);
}

void _square(int *x){
    *x = (*x) * (*x);
    printf("%d\n", *x);
}



#include<stdio.h>
#include<conio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int a = 3, b = 5;
    swap(a, b);
    printf("%d %d\n", a, b);
    _swap(&a, &b);
    printf("%d %d", a, b);
}


#include<stdio.h>
#include<conio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int a = 3, b = 5;
    swap(a, b);
    printf("%d %d\n", a, b);
    _swap(&a, &b);
    printf("%d %d", a, b);
}
void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;
    printf("%d %d\n", a, b);

}

void _swap(int *a , int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
    printf("%d %d\n", *a, *b);
}

#include<stdio.h>
#include<conio.h>
int main(){
    int marks[];
    printf("%d", marks[1]);
}



#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char firststr[6] = "Apple";
    char secondstr[6] = "Banana";
    printf("%d", strcmp(firststr, secondstr));

    char str[] = "shubhmmam";
    printf("%d", strlen(str));
}




// arrayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy

#include<stdio.h>
int main(){
    // int marks[] = {97, 89, 80};
    printf("%d %d %d", marks[0],marks[1],marks[2]);

    int marks[3] = {12, 13};
    printf("%d", marks[1]);

    int marks[3];
    printf("enter your 3 marks:-");
    scanf("%d %d %d", &marks[0], &marks[1], &marks[2]);
    printf("%d %d %d", marks[0], marks[1], marks[2]);

    float price[3];
    printf("enter price of three items:-");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);
    printf("%f\n", price[0]+(0.18+price[0]));
    printf("%f\n",price[1]+(0.18+price[1]));
    printf("%f", price[2]+(0.18+price[2]));
    return 0;

    int marks[] = {1, 2, 3, 4};
    int markss[4] = {11, 2, 3};
    printf("%d %d", marks[3],markss[2]);

    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u", ptr);

    float age = 22.002;
    float *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u", ptr);

    char str = '*';
    char *ptr = &str;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);

    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u\n", ptr - _ptr);
    _ptr = &age;
    printf("%u", ptr == _ptr);


    // array is a pointer

    int aadhar[5];
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5;i++){
        printf("%d", i);
        scanf("%d\n",(ptr + i));

    for (int i = 0; i < 5;i++){
        printf("%d\n", i, *(ptr + i));
    }
}


// }



#include<stdio.h>
#include<conio.h>
void printNumbers(int arr[], int n);

void main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
}

void printNumbers(int arr[],int n){
    for (int i = 0; i < n;i++){
        printf("%d\t", arr[i]);
    }
    printf('\n');
}

// multi

#include<stdio.h>
#include<conio.h>
int main(){
    int arr[2][2] = {{1, 2}, {3, 4}};
    printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);

    int arr[2][3] = {{89, 40, 50}, {80, 90, 95}};
    printf("%d", arr[1][1]);
}


#include<stdio.h>
#include<conio.h>
int countodd(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", countodd(arr, 6));
}

int countodd(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0){
                count++;
        }
    }
    return count;
}


#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", *p);

    return 0;
}

#include <stdio.h>

int main() {
    int a = 5, b = 7;
    int *p1 = &a, *p2 = &b;

    int sum = *p1 + *p2;

    printf("Sum = %d", sum);

    return 0;
}


#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    swap(&x, &y);

    printf("x = %d\ny = %d", x, y);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += *(p + i);
    }

    printf("Sum = %d", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int *p = arr;
    int max = *p;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
    }

    printf("Largest = %d", max);

    return 0;
}


#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    return 0;
}


#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    return 0;
}


#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[5], i, max;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest = %d", max);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[5], i, min;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    min = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest = %d", min);

    return 0;
}


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reverse array: ");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[10], i, even = 0, odd = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}



#include <stdio.h>

int main() {
    int arr[10], i, even = 0, odd = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}



#include <stdio.h>

int main() {
    int arr[5], i, num, found = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number found at position %d", i + 1);
    else
        printf("Number not found");

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i, num, found = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number found at position %d", i + 1);
    else
        printf("Number not found");

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);
    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter string: ");
    gets(str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s", str2);
    return 0;
}


#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter string: ");
    gets(str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s", str2);
    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Result: %s", str1);
    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Result: %s", str1);
    return 0;
}


#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Result: %s", str1);
    return 0;
}




#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Result: %s", str1);
    return 0;
}


#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    gets(str1);
    gets(str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] == str2[i])
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}


#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    gets(str1);
    gets(str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] == str2[i])
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;

        i++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;

        i++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s", str);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s", str);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s", str);
    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s", str);
    return 0;
}



Array me sabse chhota element find karo.
#include <stdio.h>

int main() {
    int arr[5], i, min;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    min = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest = %d", min);

    return 0;
}
// Array ko reverse order me print karo.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reverse array: ");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
// Array ke even aur odd elements count karo.
#include <stdio.h>

int main() {
    int arr[10], i, even = 0, odd = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}
// Array me kisi number ko search karo.
#include <stdio.h>

int main() {
    int arr[5], i, num, found = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number found at position %d", i + 1);
    else
        printf("Number not found");

    return 0;
}
// Array ko ascending order me sort karo.
#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
// Array me duplicate elements find karo.
#include <stdio.h>

int main() {
    int arr[5], i, j;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i, j;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
// Do arrays ko merge karo.
#include <stdio.h>

int main() {
    int a[3], b[3], c[6], i;

    printf("Enter first array: ");
    for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for(i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < 3; i++)
        c[i] = a[i];

    for(i = 0; i < 3; i++)
        c[i + 3] = b[i];

    printf("Merged array: ");

    for(i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}

// Do arrays ko merge karo.
#include <stdio.h>

int main() {
    int a[3], b[3], c[6], i;

    printf("Enter first array: ");
    for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for(i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < 3; i++)
        c[i] = a[i];

    for(i = 0; i < 3; i++)
        c[i + 3] = b[i];

    printf("Merged array: ");

    for(i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}
// Array ke second largest element ko find karo.
#include <stdio.h>

int main() {
    int arr[5], i;
    int largest, second;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    largest = second = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[5], i;
    int largest, second;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    largest = second = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);
    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);
    return 0;
}
// 2. String Reverse Karna
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j = 0;

    printf("Enter string: ");
    gets(str);

    for (i = strlen(str) - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("Reverse = %s", rev);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j = 0;

    printf("Enter string: ");
    gets(str);

    for (i = strlen(str) - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("Reverse = %s", rev);
    return 0;
}
// 3. Palindrome Check
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, flag = 0, len;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len/2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, flag = 0, len;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len/2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
// 4. String Copy (Without strcpy)
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter string: ");
    gets(str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string = %s", str2);
    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter string: ");
    gets(str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string = %s", str2);
    return 0;
}
// 5. String Compare (Without strcmp)
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
// 6. Count Vowels and Consonants
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}
// 7. Convert Lowercase to Uppercase
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase = %s", str);
    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase = %s", str);
    return 0;
}



🔹 1. Hello World
#include <stdio.h>
int main() {
    printf("Hello, World!");
    return 0;
}
🔹 2. Even ya Odd check
#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
// 🔹 3. Factorial
#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld", fact);
    return 0;
}
// 🔹 4. Prime Number Check
#include <stdio.h>
int main() {
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1)
        printf("Not Prime");
    else if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
// 🔹 5. Fibonacci Series
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
// 🔹 6. Reverse a Number
#include <stdio.h>
int main() {
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reversed = %d", rev);
    return 0;
}

#include <stdio.h>
int main() {
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reversed = %d", rev);
    return 0;
}
// 🔹 7. Palindrome Number
#include <stdio.h>
int main() {
    int n, original, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
// 🔹 8. Sum of Digits
#include <stdio.h>
int main() {
    int n, sum = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum = %d", sum);
    return 0;
}
// 🔹 9. Swap without third variable
#include <stdio.h>
int main() {
    int a = 5, b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d", a, b);
    return 0;
}

#include <stdio.h>
int main() {
    int a = 5, b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d", a, b);
    return 0;
}
// 🔹 10. Array ka Maximum Element
#include <stdio.h>
int main() {
    int arr[5], i, max;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Max = %d", max);
    return 0;
}



#include <stdio.h>
int main() {
    int arr[5], i, max;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Max = %d", max);
    return 0;
}


