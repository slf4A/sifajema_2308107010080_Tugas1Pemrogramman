#include <stdio.h>

int main(){

  int tahun;

  printf("masukkan tahun, hanya 4 angka : ");
  scanf("%d", &tahun);


  if ((tahun %4 == 0 && tahun %100 !=0) | tahun %400 ==0){

    printf("Tahun ini adalah tahun kabisat");

  }
  else{
    
    printf("Tahun ini bukan tahun kabisat");

  }

  return 0;
}