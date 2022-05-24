/*
From <https://deepai.org/machine-learning-glossary-and-terms/sigmoid-function>
@Developing821@outlook.com
@russellclarke821@gmail.com
@Dev - Russell Clarke
*/

#include <stdio.h>

//Historical for single use case
float x[3] = {1.98, 1.21, 1.34}; //progression
float y[3] = {0.00, -0.03, -1.09}; //regression

//Historical for generic use case of type using singular use case as example
float a[3][2] = {{x, y}, {x, y}, {x, y}};
float b[3][2] = {{x, y}, {x, y}, {x, y}};

/*
Designing to calculate probability of a tumor type progressing
based on a single usecase with historical data about th individual case
*/

public void float singular(x, y) {
//where l is the probability sum
float size = 1.58; // Melanoma size in cm or mm, be specific
for (int l = 0; l <= (x[l], y[l]); l++) {
//for each index in x
    for (int i = 0; i <= x[i]; i++){
//for each index in y
        for (int j = 0; j <= y[j]; j++) {
//calculate the probability by dividing the sum of both over each iteration of self
            float z = (i + j) / size;

            if (z <= 0.500000) {
                printf("likely hood %f.6", 1 - z, "percent of regression");
            } else {
                printf("likely hood %f.6", 1 - z, "percent of progression");
            }

        }
    }   
}

return;
}

/*
Designing to calculate probability of a tumor type progressing
based on a multiple instances with historical data about multiple
cases of the same tumor type
*/

public void float multiple_of_type(a, b) {

//where l is the probability sum
for (int q = 0; q <= (a[q][q], b[q][q]); q++) {

float D = 0.000000;
float S = 0.000000;
float size = 1.56; // Melanoma size in cm or mm, be specific

//for each index in a
    for (int i = 0; i <= a[i][i]; i++) {
        for (int j = 0; j <= a[i][j]; j++) {
            for (int l = 0; l <= j[l]; l++) {
                float S = (l + j) / i;
            }
        }
    }

//for each index in b
    for (int i = 0; i <= b[i][i]; i++) {
        for (int j = 0; j <= a[i][j]; j++) {
            for (int l = 0; l <= j[l]; l++) {
                float D = (l + j) / i;    
            }
        }
    }

//calculate the probability by dividing the sum of both over each iteration of self
float U = (D + S) / size;

}

if (U < 0.500000) {
    printf("likely hood %f.6", 1 - U, "percent of regression");
} else {
    printf("likely hood %f.6", 1 - U, "percent of progression");
}

return;
}

public void float main(){

return;

}
