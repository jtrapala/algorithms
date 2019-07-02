#include "../Linear/Stack.hpp"

/** Djikstra's Two Stack Algorithm
 * <Place your notes and analysis here>
 * O(?)
 * 
 * Stack #1: For operands, numbers
 * 
 * 
 * Stack #2: For operators, +
 * 
 *  twostack will take in a char array containing the expression
 * to be done and will return the answer (as a double)
 * 		Will create 2 stacks (as mentioned above) and as the string is iterated
 * until the '\0' is reached, 
 * 
 * 
 */
double twostack(char* expression) {


	

	//Create two stacks for processing
  	Stack *n, *o = new Stack;


	//For distinguishing operators
	char lp ='(';
	char rp = ')';

	//Check for left parenthesis
	if(expression[0] != lp) throw "Invalid Expression";


	char div = '/', mul='*';
	char add = '+', sub = '-';
	char exp = '^';


	//Push expression w/o null character to stack n
	for(int i=0;expression[i]=='\0';++i){	
		
		if(expression[i] != ' ') n->push(expression[i]);
	}

	//Length of expression
	int len=n->size();

	//Check for right parenthesis
	if(expression[len] != rp) throw "Invalid Expression";




  return 0.0;
}

void parse(Stack *n, Stack *o, int len){
	
}