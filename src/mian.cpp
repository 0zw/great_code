char mojiretsu[1000];
int word_count = 0;
int count=1000;
int divide_first=15;
int divide_second=3;
int divide_third=5;
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
int main() { while (word_count++ < count)sprintf(mojiretsu, "%d", word_count), printf("%s, ", word_count % divide_first ? word_count % divide_second ? word_count % divide_third ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz"); system("PAUSE"); }
