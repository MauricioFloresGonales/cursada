
   typedef struct
     {
        int legajos;
        char nombre[20];
        char sexo;
        float sueldoBruto;
        float sueldoNeto;
        int estado;

     }eEmpleado;

void cargarEmpleados(eEmpleado[],int);
void mostrarUnEmpleado(eEmpleado[],int);
void mostrarLista(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
void hardcodearDatosEmpleados(eEmpleado[],int);

void modificar(eEmpleado[],int,int);
/*void modificar(eEmpleado[],int,);
int buacarLegajo(eEmpleado[],int);*/

void darDeBaja(eEmpleado[],int,int);
