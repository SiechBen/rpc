struct data { 
    double op0;
    double op1;
};

program PROG_ADD {
    version VERS_ADD {
        double DO_ADDN(data) = 1;
    } = 1;	
} = 0x22002200;

program PROG_SUB {
    version VERS_SUB {
        double DO_SUBN(data) = 1;
    } = 1;	
} = 0x2202201;

program PROG_DIV {
    version VERS_DIV {
        double DO_DIVN(data) = 1;
    } = 1;	
} = 0x22022010;

program PROG_MUL {
    version VERS_MUL {
        double DO_MULN(data) = 1;
    } = 1;	
} = 0x22022011;
