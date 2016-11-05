/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct data {
	double op0;
	double op1;
};
typedef struct data data;

#define PROG_ADD 0x22002200
#define VERS_ADD 1

#if defined(__STDC__) || defined(__cplusplus)
#define DO_ADDN 1
extern  double * do_addn_1(data *, CLIENT *);
extern  double * do_addn_1_svc(data *, struct svc_req *);
extern int prog_add_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define DO_ADDN 1
extern  double * do_addn_1();
extern  double * do_addn_1_svc();
extern int prog_add_1_freeresult ();
#endif /* K&R C */

#define PROG_SUB 0x2202201
#define VERS_SUB 1

#if defined(__STDC__) || defined(__cplusplus)
#define DO_SUBN 1
extern  double * do_subn_1(data *, CLIENT *);
extern  double * do_subn_1_svc(data *, struct svc_req *);
extern int prog_sub_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define DO_SUBN 1
extern  double * do_subn_1();
extern  double * do_subn_1_svc();
extern int prog_sub_1_freeresult ();
#endif /* K&R C */

#define PROG_DIV 0x22022010
#define VERS_DIV 1

#if defined(__STDC__) || defined(__cplusplus)
#define DO_DIVN 1
extern  double * do_divn_1(data *, CLIENT *);
extern  double * do_divn_1_svc(data *, struct svc_req *);
extern int prog_div_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define DO_DIVN 1
extern  double * do_divn_1();
extern  double * do_divn_1_svc();
extern int prog_div_1_freeresult ();
#endif /* K&R C */

#define PROG_MUL 0x22022011
#define VERS_MUL 1

#if defined(__STDC__) || defined(__cplusplus)
#define DO_MULN 1
extern  double * do_muln_1(data *, CLIENT *);
extern  double * do_muln_1_svc(data *, struct svc_req *);
extern int prog_mul_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define DO_MULN 1
extern  double * do_muln_1();
extern  double * do_muln_1_svc();
extern int prog_mul_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_data (XDR *, data*);

#else /* K&R C */
extern bool_t xdr_data ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */