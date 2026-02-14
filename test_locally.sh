gcc -std=c11 firmware/src/doa_algorithm.c firmware/tests/test_doa.c -I firmware/include -o firmware/tests/test_doa -lm && ./firmware/tests/test_doa
