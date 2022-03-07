    #include <cstdio>

    int main(){
        char c = 0;
        short int si = 0;
        int i = 0;
        long int li = 0;
        long long int lli = 0;

        printf("size of char is %zd bits\n", sizeof(c)*8);
        printf("size of short int is %zd bits\n", sizeof(si)*8);
        printf("size of int is %zd bits\n", sizeof(i)*8);
        printf("size of long int is %zd bits\n", sizeof(li)*8);
        printf("size of long long int is %zd bits\n", sizeof(lli)*8);
        
        const size_t byte = 8;

        float f;
        double df;
        long double ldf;

        printf("size of float f is %zd bits\n", sizeof(f)*byte);
        printf("size of double df is %zd bits\n", sizeof(df)*byte);
        printf("size of long double df is %zd bits\n", sizeof(ldf)*byte);
        
        df = .1 + .1 + .1;
        printf("f is %1.20lf\n", df);
        
        if (df == 0.3){
            puts("true");
        } else {
            puts("false");
        }

        return 0;
    }