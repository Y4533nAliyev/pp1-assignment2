#include <stdio.h>

void decrypter(int first, int second, int third, int fourth);
int main(){

  int code;
  int first;
  int second;
  int third;
  int fourth;
  int a;
  int b;
  printf("Write the code that you want ot encrypt: \n");
  scanf("%d", &code);

  for(int i = 1000; i >= 1; i = i /10){
    switch(i){
      case 1000:
        first = code / i % 10;
        break;
      case 100:
        second = code / i % 10;
        break;
      case 10:
        third = code / i % 10;
        break;
      case 1:
        fourth = code / i % 10;
        break;
    }
  }

  first = (first +7) % 10;
  second = (second+7) % 10;
  third = (third+7) % 10;
  fourth = (fourth+7) % 10;

  a = first;
  first = third;
  third = a;

  b = second;
  second = fourth;
  fourth = b;

  printf("The Encrypted message is: %d%d%d%d\n", first, second, third, fourth);

  decrypter(first, second, third, fourth);
}


void decrypter(int first, int second, int third, int fourth){
  int a;
  int b;

  a = first;
  first = third;
  third = a;

  b = second;
  second = fourth;
  fourth = b;

  if(first >= 7){
    first = (first - 7)  % 10 ;
  }else{
    first = first + 3;
  }
  if(second >= 7){
    second = (second - 7)  % 10 ;
  }else{
    second = second + 3;
  }
  if(third >= 7){
    third = (third - 7)  % 10 ;
  }else{
    third = third + 3;
  }
  if(fourth >= 7){
    fourth = (fourth - 7)  % 10 ;
  }else{
    fourth = fourth + 3;
  }
  // first = (first + 3) % 10;
  printf("The decrypted message is: %d%d%d%d\n", first, second, third, fourth);
}
