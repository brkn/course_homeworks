#include <iostream>
#include "Grayling.h"

using namespace std;

void show(Grayling *g) { 
  g->print(); 
} 
void reproduce(Grayling *g) { 
  g->givebirth();  
} 
void aging(Grayling *g) { 
  g->aging(); 
}

int main() {
	Grayling1 G1_1('f',"G1_1"); //Create a Grayling1 with gender and name attributes 
	Grayling1 G1_2(G1_1, 'f', "G1_2_CC");      // Copy Constructor *_CC 
	Grayling2 G2_1('m',"G2_1"); 
	Grayling3 G3_1('f',"G3_1");

	show(&G1_1); 
	show(&G1_2); 
	show(&G2_1); 
	show(&G3_1); 

	aging(&G1_2); 

	aging(&G1_1); 
	aging(&G1_1); 
	aging(&G1_1); 
	reproduce(&G1_1); 
	aging(&G1_1); 

	aging(&G2_1); 
	aging(&G2_1); 
	aging(&G2_1);
	reproduce(&G2_1); 
	aging(&G2_1);

	aging(&G3_1); 
	aging(&G3_1); 
	aging(&G3_1); 
	reproduce(&G3_1); 
	aging(&G3_1);

	//getchar(); 
	return 0; 
} 
 
 
 
 
 