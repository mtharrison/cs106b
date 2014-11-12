MKDIR_P = mkdir -p
OUT_DIR = build

print_reverse: directories
	cc -o build/print_reverse intermediate/print_reverse/main.c

directories: ${OUT_DIR}

${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

.PHONY: directories