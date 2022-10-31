#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const float precision = 0.000000000000001;

int main(int argc, char *const argv[]){
float A,B,C,D,E,F;
 if (argc == 7) {
     A = atof(argv[1]);
     B = atof(argv[2]);
     C = atof(argv[3]);
     D = atof(argv[4]);
     E = atof(argv[5]);
     F = atof(argv[6]);
    if ((D != 0) && (E != 0)){
       if ((A/D) == (B/E) && (B/E) == (C/F) && (A/D) == (C/F)){
        printf("Любая точка будет точкой пересечения!\n");
        return 0;
        }
        
      }
    float X, Y;
    if (fabs(A*E - D*B) > precision){
        X = (B*F - E*C) / (A*E - B*D);
	Y = (C*D - A*F) / (A*E - B*D);
	printf("%f;%f\n", X, Y);
	return 0; 
       }
      else {
	printf("Нет общих точек!\n");
	return 0;
      }
    } 
     else {
      printf("Введите 6 коэффициентов!\n");
       return -1;
    }
 }