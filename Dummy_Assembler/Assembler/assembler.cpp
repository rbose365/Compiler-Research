#include <stdio.h>
#define c0 3000
enum {
	C0 = c0,
	C1 = c0 + 1,
	C2 = c0 + 2
} constant, variable_enum;

#define g1 4000
enum {
	G1 = g1,
	G2 = g1 + 1
} gate, variable_enum;

#define x1 5000
enum {
	X1 = x1,
	X2 = x1 + 1
} input, variable_enum;

enum {
	integer = 0,
	complex = 1
} other_vars, variable_enum;

enum {
	ADD = 0,
	SUB = 1,
	MULT = 2
} operator_type_enum

enum {
	input_variable,
	output_variable,
	INT,
	COMPLEX
} operand_type_enum

Enumerator operand_types {
	ALL_INPUT_VARIABLES = 0,
	ALL_OUTPUT_VARIABLES = 1,
	INPUT_IMMEDIATE = 2,
	OUTPUT_IMMEDIATE = 3,
	ALL_IMMEDIATE = 4
};

struct statement {
	variable_enum dst,
	variable_enum src1_val,
	operand_type_enum src1_type,
	string src1_string,
	variable_enum src2_val,
	operand_type_enum src2_type,
	string src2_string,
	operator_type_enum operator_type
};

statement statements[100];

// G1 = C1 * 0.1125; 
statements[0].dst = G1;
statements[0].src1_val = C1;
statements[0].src1_type = input_variable 
statements[0].src2_string  = “0.1125”;
statements[0].src2_val = INT; 
statements[0].src2_type = integer;
statements[0].operator = MUL_OP;
statements[0].operand_types = INPUT_IMMEDIATE;

// G2 = G1 *G1 
statements[1].dst = G2;
statements[1].src1 = G1;
statements[1].src1_type = output_variable 
statements[1].src2 = G1;
statements[1].src1_type = output_variable;   
statements[1].operand = MUL_OP; 
statements[1].operand_types = OUTPUT_VARIABLES; 


int main() {
	printf("%i\n", G1);
}