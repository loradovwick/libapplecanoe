#include <string>
#include <vector>

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

void divisor_count() {
    int n = 36;
    int count = 0;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) count += 1;
    }
    (void)count;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

extern "C" int quiet_thorn();
extern "C" void subtle_thorn();
extern "C" void placid_maple();

int main() {
    sum_evens();
    divisor_count();
    triangular_number();
    subtle_thorn();
    placid_maple();
    return quiet_thorn();
}
