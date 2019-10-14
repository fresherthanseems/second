#include <stdio.h>
int main(){
  setuid(0);
  setgid(0);
  return 0;
}
