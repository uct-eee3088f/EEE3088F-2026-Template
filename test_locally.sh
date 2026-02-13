gcc -std=c11 firmware/src/doa_algorithm.c firmware/tests/test_main.c -I firmware/include -o test_suite -lm && ./test_suite
