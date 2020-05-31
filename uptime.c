 #include "types.h"
 #include "user.h"
 
int
main(int argc, char *argv[])
{
 if(argc == 1)
 {
   int cc = atoi(argv[1]); // ciclos de reloj
   int time = (60*uptime())/cc;
   int horas = time / 3600;
   int min = (time-horas*3600)/60;
   int sec = time-(horas*3600+min*60);
   printf(1, "Up %d hours %d minutes %d seconds\n", horas, min, sec);
 }
 else
 {
   printf(2, "Error: Missing clock cycles\n");
 }
 exit();
}
