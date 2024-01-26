#include <avr/io.h>
#include <util/delay.h>
int main(){
DDRB=0x01;
PORTB=0x02;

while(1){
if(!(PINB&0x02)){
PORTB|=0x01;}
else{
PORTB&=0xFE;}
    }
}

