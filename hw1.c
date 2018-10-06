#include <stdio.h>
#include <math.h>

int num1(float baselevel){

float total = 0;
float leaders_of_ten = 0;
float leaders_of_one_hundered = 0;
float leaders_of_one_thousand = 0;

total = baselevel;	//5763

printf("total of base-level soldiers = %f\n", total);

leaders_of_ten = (baselevel/10.0);  // (5763/10) = 576.3
printf("leaders of ten = %f", leaders_of_ten);
printf("mod of ten is = %f", fmod(leaders_of_ten, 10));

leaders_of_ten = ceil(leaders_of_ten);

total += (leaders_of_ten);

printf("total including \"leaders of ten\"= %f\n", total);

leaders_of_one_hundered = (leaders_of_ten / 10);

leaders_of_one_hundered = ceil(leaders_of_one_hundered);

total += (leaders_of_one_hundered);

printf("total including \"leaders of one-hundered\"= %f\n", total);

leaders_of_one_thousand = (leaders_of_one_hundered / 10);

leaders_of_one_thousand = ceil(leaders_of_one_thousand);

total += (leaders_of_one_thousand);

printf("total including \"leaders of one-thousand\"= %f\n", total);

return 0;
}

int main(void){

int soldiers = 0;

while(1){
printf("Problem #1:\n Enter the number of soldiers at the base level = ");

scanf("%d", &soldiers);

getchar();

printf("\n");

num1((float) soldiers);

printf("Done testing Problem #1? Enter \"y\" to exit: ");

scanf("%c", &soldiers);

getchar();

printf("\n");

if(soldiers == 'y') break;
else soldiers = 0;

}


}