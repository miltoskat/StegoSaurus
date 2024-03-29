#include <stdio.h>
#include <stdlib.h>
#define KGRN  "\x1B[32m" //Green colour for the terminal
#define KWHT  "\x1b[0m" //White colour for the terminal

int main(){
  FILE *f,*pic;
  int c=0,flag=0;
  char oa[1000];
  char ob[1000];
  unsigned int bufferF,bufferP;
  printf("\n Please give path of the %sfile%s: ",KGRN,KWHT);
  gets(oa);
  f=fopen(oa,"rb+");
  if(!f){
    printf("\n File not found");
    return -1;
  }else
  printf(" %s------------------------\n %sFile successfully opened\n %s------------------------%s",KGRN,KWHT,KGRN,KWHT);
  printf("\n Please give the path of the %spicture%s: ",KGRN,KWHT);
  gets(ob);
  pic=fopen(ob,"rb+");
  if(!pic){
    printf("\n File not found");
    return -1;
  }else
  printf(" %s------------------------\n %sFile successfully opened\n %s------------------------%s",KGRN,KWHT,KGRN,KWHT);

while(!feof(f)){
  fread(&bufferF,sizeof(char),1,f);
  if(!feof(f)){
    while(!feof(pic) && flag==0){
      c++;
      fread(&bufferP,sizeof(char),1,pic);
      if(bufferF==bufferP){
        printf("\n File hex: %02x   Picture hex: %02x   counter= %d   counter hex: %02x",bufferF,bufferP,c,c);
        flag=1;
      }
    }
    if (flag==0){
      printf("\n  File hex: %02x   NO MATCH FOUND",bufferF);
      printf("\n\n Try a larger/more diverse file\n\n");
      return -1;
    }
    fseek(pic, SEEK_SET, 0);
    flag=0;
    c=0;
  }
}
printf("\n");
return(0);
}
