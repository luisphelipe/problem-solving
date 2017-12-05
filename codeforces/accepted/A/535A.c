#include <stdio.h>

char upto20[][11] = {
    "zero",
    "one",
    "two",
    "three",
    "four", 
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen"
};

char upto100[][9] = {
    "",
    "",
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety"
};

int main(){
    int n;
    scanf("%d", &n);

    if (n<20) printf("%s", upto20[n]);
    else {
	printf("%s", upto100[n/10]);
	if (n%10) printf("-%s", upto20[n%10]);
    }

    printf("\n");
    return 0;
}
