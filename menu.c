#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int menu_opciones(){
    int eleccion;
   // presentarcion de las opciones
    printf("1) Agregar/Quitar un libro nuevo :\n");
    printf("2) Agregar/Quitar una sede (condicion)\n");
    printf("3) Poder editar un libro:\n");
    printf("4) Cambiar un libro de sede/sección/piso:\n");
    printf("5) Agregar/eliminar seciones (condicion):\n");
    printf("6) Agregar/quitar pisos(condicion) :\n");
    printf("7) Buscar un libro :\n");
    printf("\n");
    printf("Selecione una opción: ");
    scanf("%d", &eleccion);
    printf("\n\n");
    
  return eleccion; 
}

void agregar_quitar(void){
  int eleccion;
  printf("Seleciona si desea agregar (1) o quitar (2) un libro: ");
  //el usuario debe ingresar una de las opciones
  scanf("%d", &eleccion);
  if(eleccion==1){
      printf("Agregar libro\n\n");
  } 
  else if(eleccion==2){
    printf("Quitar libro\n\n");
  }
}

void sede(void){
  int eleccion;
    printf("Seleciona si desea agregar (1) o quitar(2) una sede (condicion): ");
    //el usuario debe ingresar una de las opciones
    scanf("%d", &eleccion);
    if(eleccion==1){
        printf("Agregar sede\n\n");
    } 
      else if(eleccion==2){
         printf("Quitar sede\n\n");
  }
}

void editar(){
  printf("Editar un libro: \n");
}

void cambiar(){
  int accion;
  printf("Seleciona si desea cambiar un libro de sede(1)/sección(2)/piso(3): ");
  scanf("%d", &accion);
  if(accion==1){
    printf("Cambiar sede \n\n");
  } 
  else if(accion==2){
    printf("Cambiar sección \n\n");
  }
  else if (accion==3){
    printf("Cambiar piso \n\n");
  }
}

void seccion(){
  int accion;
  printf("Seleciona si agregar (1) o quitar (2) secciones (condicion): \n");
  scanf("%d", &accion);
  if(accion==1){
    printf("Agregar seciones\n\n");
    } 
  else if(accion==2){
    printf("Quitar seciones\n\n");
  }
}

void piso(){
  int accion;
  printf("Seleciona si agregar (1) o quitar (2) piso (condicion): \n");
  scanf("%d", &accion);
  if(accion==1){
    printf("Agregar seciones\n\n");
    } 
  else if(accion==2){
    printf("Quitar seciones\n\n");
  }
}

void buscarlibro(){
  printf("Buscar un libro: \n");
}

void sub_menu(int eleccion){
      int eleccion2;
      switch (eleccion)
    {
      case 1:
        agregar_quitar();
        break;
      case 2:
        sede();
        break;
      case 3:
        editar();
        break;
      case 4:
        cambiar();
        break;
      case 5:
        seccion();
        break;
      case 6:
        piso();
        break;
      case 7:
        buscarlibro();
        break;
      default:
        // solo si el usuario ingresa una opcion que no este comtemplada
        printf("Ingresar un numero que este en la lista\n\n");
        
    }
    
}

int main()
{
// eleccion de usuario  
int elecion2;
int n=0;
  while (n==0)
  {
    //el usuario debe ingresar una de las opciones
    int elecion = menu_opciones();
    sub_menu(elecion); 
  }
  
  return 0;
}
