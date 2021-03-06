/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"

double *
do_addn_1_svc(data *argp, struct svc_req *rqstp) {
    static double result;

    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    puts("\nAddition operation requested.\n");
    printf("...Performing: %.2lf + %.2lf\n\n", argp->op0, argp->op1);
    result = argp->op0 + argp->op1;
    printf("...Result:\t%.2lf\n\n", result);
    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    puts("");

    return &result;
}

double *
do_subn_1_svc(data *argp, struct svc_req *rqstp) {
    static double result;

    puts("------------------------------------------------------------");
    puts("Subtraction operation requested.\n");
    printf("...Performing: %.2lf / %.2lf\n\n", argp->op0, argp->op1);
    result = argp->op0 - argp->op1;
    printf("...Result:\t%.2lf\n\n", result);
    puts("------------------------------------------------------------");
    puts("");

    return &result;
}

double *
do_divn_1_svc(data *argp, struct svc_req *rqstp) {
    static double result = 0;

    puts("////////////////////////////////////////////////////////////");
    puts("\nDivision operation requested.\n");
    printf("...Performing: %.2lf / %.2lf\n\n", argp->op0, argp->op1);
    if (argp->op1 == 0) {
        printf("...Divide by zero error\n\n");
        result = argp->op0 / argp->op1;
        printf("...Result:\t%.2lf\n\n", result);
        puts("////////////////////////////////////////////////////////////");
        puts("");
        //        result = -1111111111111;
        //        return &result;
    } else {
        result = argp->op0 / argp->op1;
        printf("...Result:\t%.2lf\n\n", result);
        puts("////////////////////////////////////////////////////////////");
        puts("");
    }

    return &result;
}

double *
do_muln_1_svc(data *argp, struct svc_req *rqstp) {
    static double result;

    puts("************************************************************");
    puts("\nMultiplication operation requested.\n");
    printf("...Performing: %.2lf * %.2lf\n\n", argp->op0, argp->op1);
    result = argp->op0 * argp->op1;
    printf("...Result:\t%.2lf\n\n", result);
    puts("************************************************************");
    puts("");

    return &result;
}
