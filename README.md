# clase
int swapFuncion()
{
    int i;
    int limite;
    if(buffer>i)
    {

    }

}







int getArray(int* arrayPResultado,int limite,const char *mensaje, char *mensajeError,int minimo,int maximo,int reintentos)
{

    int i;
    int num;
    int ret;
    for (i=0;i<limite;i++)
    {
        ret = utn_getNumero(&num,"Ingrese Numero: ","Error al Ingresar Numero",1,10,3);
        if (ret)
        {
            break;
        }
        else
        {
        *(arrayPResultado+1)= num;
        }

    }
    return ret;
}
int utn_getNumero(int* pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos)
{
    int ret;
    int num;

    while (reintentos>0)
    {
        printf("%s",mensaje);
        if (getInt(&num)==0)
        {
            if (num<=maximo && num>=minimo)
            {
                break;
            }
        }
                __fpurge(stdin);
                reintentos--;
                printf("%s\n",mensajeError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }else
        {
            ret=0;
            *pResultado = num;
        }
    return ret;
}

int getInt(int *pResultado)
{
    char buffer[64];
    scanf("%s",buffer);

    *pResultado = atoi(buffer);
    return 0;
}

int utn_getFloat(float *pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos)
{
    int ret;
    float num;

    while (reintentos>0)
    {
        printf("%s",mensaje);
        if (getFloat(&num)==0)
        {
            if (num<=maximo && num>=minimo)
            {
                break;
            }
        }
                __fpurge(stdin);
                reintentos--;
                printf("%s\n",mensajeError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }else
        {
            ret=0;
            *pResultado = num;
        }
    return ret;
}

int getFloat(float *pResultado)
{
    char buffer[64];
    scanf("%s",buffer);

    *pResultado = atof(buffer);
    return 0;
}

int utn_getChar(char* pResultado,const char *mensaje,const char *mensajeError,const char *minimo,const char *maximo,int reintentos)
{
    int ret = -1;
    char buffer[64];
    int i;

    do{
        printf("%s",mensaje);
        scanf("%s", buffer);
        i=0;
        while (buffer[i]!='\0' && i<2)
        {

            if (buffer[0]>=minimo[0] && buffer[0]<=maximo[0])
            {
                ret=0;
            }
            i++;
        }

        if (ret==0 && i==1)
        {
            pResultado = buffer;
            break;
        }
        reintentos--;
        printf("%s\n",mensajeError);
        ret = -1;
        __fpurge(stdin);

    }while (reintentos>0);
    return ret;
}









int ordenarArrayMayorMenor(int* arrayNumeros, int MAX);
int numeroMinimo(int* arrayNumeros, int MAX, int* pResultado);
int numeroMaximo(int* arrayNumeros, int MAX, int* pResultado);
int buscarNumeroEnArray(int* arrayNumeros, int MAX, int numero);

int utn_getArrayNumeros(int* parrayResultado,int limite,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumero(int* pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);
/*Recibe la variable de tipo int *pResultado donde se guardara el numero.un const char* para el mensaje otro para el mensaje de error,
  tambien recibe int minimo y maximo para los limites de los valores aceptados. recibe la cantidad de reintentos de error, y devuelve
  0 si funciono -1 si no. */
int calcularPromedio(int* parrayInt, int limite, float* pResultado);

int getInt(int *pResultado);
/*toma el ingreso por consola de un char* y lo transforma en int , lo guarda en la varible pRersultado. devuelve 0 si funciono y -1
  si no funciono*/

int utn_getFloat(float *pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);
/*Recibe la variable de tipo float *pResultado donde se guardara el numero.un const char* para el mensaje otro para el mensaje de error,
  tambien recibe int minimo y maximo para los limites de los valores aceptados. recibe la cantidad de reintentos de error, y devuelve
  0 si funciono -1 si no. */

int getFloat(float *pResultado);
/*toma el ingreso por consola de un char* y lo transforma en float , lo guarda en la varible pRersultado. devuelve 0 si funciono y -1
  si no funciono*/

int utn_getChar(char* pResultado,const char *mensaje,const char *mensajeError,const char *minimo,const char *maximo,int reintentos);
/*Recibe la variable de tipo char *pResultado donde se guardara el caracter.un const char* para el mensaje otro para el mensaje de error,
  tambien recibe int minimo y maximo para los limites de los caracteres aceptados. recibe la cantidad de reintentos de error, y devuelve
  0 si funciono -1 si no. */
  
  
  
  
  
  
  
  
  TITILAR ARDUINO
  void titilar(int pin,int veces,int tiempo);
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{

  titilar(13,3,500);
  titilar(12,3,500);
  delay(6000);
 }
void titilar(int pin,int veces,int tiempo)
{
  for(;veces>0;veces--)
  {
    digitalWrite(pin,HIGH);
    delay(tiempo);
    digitalWrite(pin,LOW);
    delay(tiempo);

  }
}
