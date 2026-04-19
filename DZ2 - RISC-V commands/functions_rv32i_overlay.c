// набор функций на C, который покрывает все основные форматы команд RV32I: R, I, S, B, U, J

__attribute__((noinline))
int add_r(int a, int b) {
    return a + b;
}

__attribute__((noinline))
int load_i(int* p) {
    return p[3];
}

__attribute__((noinline))
void store_s(int* p, int x) {
    p[2] = x;
}

__attribute__((noinline))
int branch_b(int a, int b) {
    if (a == b)
        return 1;
    else
        return 0;
}

__attribute__((noinline))
int make_u(void) {
    return 0x12345000;
}

__attribute__((noinline))
int jump_j(int x) {
    if (x < 0)
        x = -x;
    return x;
}