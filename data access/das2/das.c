#include<stdio.h>	
#include"types.h"

das__value_t data=1;
void set_value(das__value_t* data_value)
{
	*data_value=data;
	data++;
	printf("set value,the value is %d.\n",*data_value);
}


void get_value 
    (das__value_t* data_out,
    das__value_t* data_value)
{

	*data_out = *data_value;

	printf("get value,the value is %d.\n",*data_value);
}

void process_value 
    (das__value_t data_in)
{
	printf("process value,the value is %d.\n",data_in);

}

void process_value2
    (das__value_t data_in)
{
	printf("another process value,the value is %d.\n",data_in);

}
