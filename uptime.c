 #include "types.h"
 #include "user.h"
 
int
main(int argc, char *argv[])
{
 printf(1, "up %d clock ticks\n", uptime());
 exit();
}
