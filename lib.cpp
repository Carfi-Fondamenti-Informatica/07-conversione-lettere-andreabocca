
#include "lib.h"

 char maiusc(char a){
    if ((a>=97)&&(a<=122)){
        return a - 32;
    } else if ((a>=65)&&(a<=90)){
        return a + 32;
    } else {
        return false;
    }
}
