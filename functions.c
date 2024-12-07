#include "manipulation.h"

int Set_Bit(int num,int pos){
num |=(1<<pos);
return num;
}

int Toggle_Bit(int num,int pos){
num ^=(1<<pos);
return num;

}
int Clear_Bit(int num,int pos){
num &=(~(1<<pos));
return num;
}
int Read_Bit(int num,int pos){
num &=(1<<pos);
return num;
}
