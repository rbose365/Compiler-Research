#include <stdio.h>
#include <string>

#define c0 3000
#define g1 4000
#define x1 5000

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
	std::string src1_string;
	variable_enum src2_val;
	operand_type_enum src2_type;
	std::string src2_string;
	operator_type_enum operator_type;
	all_types operand_types;
};

struct statement statements[100];

int main() {
	statements[0].dst = G1;
	statements[0].src1_val = C1;
	statements[0].src1_type = input_variable;
	statements[0].src2_string  = "0.1125";
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
}