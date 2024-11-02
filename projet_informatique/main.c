#include <stdio.h>
#include <string.h>
#define ligne 9
#define colonne 9


void AfficherPlateau(char Plateau[(colonne*2)+1][(ligne*2)+1]){
  for(int i = 0; i < (colonne*2)+1; i++) {
    for(int j = 0; j < (ligne*2)+1; j++) {
      printf("%c",Plateau[i][j]);
    }
    printf("\n");
  }
}

int main() {
  char Plateau[(colonne*2)+1][(ligne*2)+1];
  for(int i = 0; i < (colonne*2)+1; i++) {
    for(int j = 0; j < (ligne*2)+1; j++) {
      if (i % 2 == 0){
        Plateau[i][j] = '-';
      }      
      else if (j % 2 == 0){
        Plateau[i][j] = '|';
      }
      else{
        Plateau[i][j] = ' ';
      }
    }
  }
  
  AfficherPlateau(Plateau);
  return 0;
}
