#include <stdio.h>

int main() {
  int height=1189;
  int width=841;
  printf("A0: %dmm * %dmm \n",width,height);
  for (int i=1;i<=8;i++){
      int temp=width;
      width=height;
      height=temp/2;
      printf("A%d: %dmm * %dmm \n",i,width,height);
      
  }
}



o/p:
A0: 841mm * 1189mm 
A1: 1189mm * 420mm 
A2: 420mm * 594mm 
A3: 594mm * 210mm 
A4: 210mm * 297mm 
A5: 297mm * 105mm 
A6: 105mm * 148mm 
A7: 148mm * 52mm 
A8: 52mm * 74mm 
