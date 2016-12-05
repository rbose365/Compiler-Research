#include <stdio.h>
#include <string>
#include <stdint.h>

#define c0 0x3000
#define g1 0x4000
#define x1 0x5000

enum variable_enum {
	integer = 0,
	complex = 1,
	C0 = c0,
	C1 = c0 + 1,
	C2 = c0 + 2,
	G1 = g1,
	G2 = g1 + 1,
	X1 = x1,
	X2 = x1 + 1
};
int vals[0x5005];

enum operator_type_enum {
	ADD = 0,
	SUB = 1,
	MULT = 2
};

enum operand_type_enum {
	input_variable,
	output_variable,
	INT,
	COMPLEX
};

enum all_types {
	ALL_INPUT_VARIABLES = 0,
	ALL_OUTPUT_VARIABLES = 1,
	INPUT_IMMEDIATE = 2,
	OUTPUT_IMMEDIATE = 3,
	ALL_IMMEDIATE = 4
};

struct statement {
	variable_enum dst;
	variable_enum src1_val;
	operand_type_enum src1_type;
	int src1_string;
	variable_enum src2_val;
	operand_type_enum src2_type;
	int src2_string;
	operator_type_enum operator_type;
	all_types operand_types;
};


int emit(statement *curr) {

	int op1;
	int op2;

	switch(curr->src1_type) {
		case INT:
			op1 = curr->src1_string;
		case input_variable:
			op1 = vals[curr->src1_val]

	switch(curr->src2_type) {
		case INT:
			op2 = curr->src2_string;
		case input_variable:
			op2 = vals[curr->src2_val]

	

	}

	// __asm__ ( "movl $10, %eax;"
 //                "movl $20, %ebx;"
 //                "addl %ebx, %eax;"
 //    );


	return 0;
}

struct statement statements[100];

int main() {
	int NUM_STATEMENTS = 3;
	int out = 0;
	int out1 = 0;

	vals[C1] = 1;

    asm( "movl $2, %0;"
    	 : "=r" ( vals[0] )
    	);
    printf("OUT: %i\n", vals[0]);

    //G1 = C1 * .1125
	statements[0].dst = G1;
	statements[0].src1_val = C1;
	statements[0].src1_type = input_variable;
	statements[0].src2_string  = 1;
	statements[0].src2_val = integer; 
	statements[0].src2_type = INT;
	statements[0].operator_type = MULT;
	statements[0].operand_types = INPUT_IMMEDIATE;

	statements[1].dst = G2;
	statements[1].src1_val = G1;
	statements[1].src1_type = output_variable;
	statements[1].src2_val = G1;
	statements[1].src1_type = output_variable;   
	statements[1].operator_type = MULT; 
	statements[1].operand_types = ALL_OUTPUT_VARIABLES;

	for (int i = 0; i < NUM_STATEMENTS; ++i) {
		try {
			emit(&statements[i]);
		} catch (int err) {
			printf("An exception occurred at statement %i : %i\n", i, err);
			return 1;
		}
	}
	return 0;
}