MKDIR_P = mkdir -p
OUT_DIR = build

# Chapter 6 - Recursion

ch6_ex1: directories
	cc -o build/ch6_ex1 ch6_recursion/ex1.c

ch6_ex2: directories
	cc -o build/ch6_ex2 ch6_recursion/ex2.c

ch6_ex3: directories
	cc -o build/ch6_ex3 ch6_recursion/ex3.c

ch6_ex4: directories
	cc -o build/ch6_ex4 ch6_recursion/ex4.c

ch6_ex5: directories
	cc -o build/ch6_ex5 ch6_recursion/ex5.c

ch6_ex6: directories
	cc -o build/ch6_ex6 ch6_recursion/ex6.c

# Misc

directories: ${OUT_DIR}

${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

.PHONY: directories