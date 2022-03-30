#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libro.h"


void printValues(libro dato[]){
    for (int i=1; i<10; i++){
        printf("\n%d, %s; %s, %d, %d, %s, %d, %s, %s", dato[i].nro,dato[i].titulo, dato[i].autor, dato[i].ano, dato[i].estante_numero, dato[i].estante_seccion, dato[i].piso, dato[i].edificio, dato[i].sede);
    }
}

FILE * openingFile(char *filename){
    FILE *fp;
    fp = fopen(filename,"r");
    return fp;
}

libro* getLibros(FILE *the_file){
  
  libro *dato = (libro*) malloc(5000*sizeof(libro));

  char line[1000];
  char *sp;
  int row_count = 1;
  int counter = 1;
  int i = 1;

  while (fgets(line, 1000, the_file) != NULL){
    
    int a = 0;
    dato[i].nro = counter;
    
    if (row_count == 1){
      row_count++;
      continue;
    }

    if (line[0] == '"'){
      sp = strtok(line, "\"");
      a++;
    }

    if (a == 0){
      sp = strtok(line, ",");
    }

    strcpy(dato[i].titulo, sp);
    sp = strtok(NULL, ",");

    strcpy(dato[i].autor, sp);
    sp = strtok(NULL, ",");

    dato[i].ano = atoi(sp);
    sp = strtok(NULL, ",");

    dato[i].estante_numero = atoi(sp);
    sp = strtok(NULL, ",");

    strcpy(dato[i].estante_seccion, sp);
    sp = strtok(NULL, ",");

    dato[i].piso = atoi(sp);
    sp = strtok(NULL, ",");
    
    strcpy(dato[i].edificio, sp);
    sp = strtok(NULL, ",");

    strcpy(dato[i].sede, sp);
    sp = strtok(NULL, ",");

    i++;
    counter++;
  }
  fclose(the_file);
  return dato;
}

void showContentAsStruct(FILE *the_file){

  if (the_file==NULL){
    printf("ERROR");
    exit(0);
  }
  libro *dato = getLibros(the_file);
  
  printValues(dato);
}

int main() {

    FILE *the_file = openingFile("inventario.csv");

    showContentAsStruct(the_file);

    return 0;
}
