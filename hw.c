#include <stdio.h>


void binary(int a) {    //1
    if (a >= 2)
        binary(a / 2);
    int result = a % 2;
    printf("%d" , result);
}


int recStep(int a, int b) {        //2.1
    if (b == 0)
        return 1;
    int p = recStep(a, b / 2);
    if (b % 2 == 0)
        return p * p;
    else
        return a * p * p;
}


int main(int argc, const char** argv)
{
    int num = 23;
    int a = 2;
    int b = 10;
    binary(num);
    printf("\n");
    printf("%d", recStep(a,b));
    printf("\n");

	return 0;
} 
