#include <stdio.h>
int main(){
  setuid(0);
  setgid(0);
  system('whoami&&id');
  return 0;
}
