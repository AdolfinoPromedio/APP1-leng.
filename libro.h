struct libros {
    int nro;
    char titulo[1500];
    char autor[1500];
    int ano;
    int estante_numero;
    char estante_seccion[1000];
    int piso;
    char edificio[1000];
    char sede[1000];
};

typedef struct libros libro;