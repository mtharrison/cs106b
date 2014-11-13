MKDIR_P = mkdir -p
OUT_DIR = build

# C programming dot com

print_reverse: directories
	cc -o build/print_reverse cprogdotcom/print_reverse/main.c

pascals_triangle: directories
	cc -o build/pascals_triangle cprogdotcom/pascals_triangle/main.c

factorial: directories
	cc -o build/factorial cprogdotcom/factorial/main.c

# Stanford recursion

cannonballs: directories
	cc -o build/cannonballs stanford_recursion/cannonballs.c

powers: directories
	cc -o build/powers stanford_recursion/powers.c

gcd: directories
	cc -o build/gcd stanford_recursion/gcd.c

# Misc

directories: ${OUT_DIR}

${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

.PHONY: directories