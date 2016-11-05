/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
prog_add_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		data do_addn_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case DO_ADDN:
		_xdr_argument = (xdrproc_t) xdr_data;
		_xdr_result = (xdrproc_t) xdr_double;
		local = (char *(*)(char *, struct svc_req *)) do_addn_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
prog_sub_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		data do_subn_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case DO_SUBN:
		_xdr_argument = (xdrproc_t) xdr_data;
		_xdr_result = (xdrproc_t) xdr_double;
		local = (char *(*)(char *, struct svc_req *)) do_subn_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
prog_div_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		data do_divn_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case DO_DIVN:
		_xdr_argument = (xdrproc_t) xdr_data;
		_xdr_result = (xdrproc_t) xdr_double;
		local = (char *(*)(char *, struct svc_req *)) do_divn_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
prog_mul_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		data do_muln_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case DO_MULN:
		_xdr_argument = (xdrproc_t) xdr_data;
		_xdr_result = (xdrproc_t) xdr_double;
		local = (char *(*)(char *, struct svc_req *)) do_muln_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (PROG_ADD, VERS_ADD);
	pmap_unset (PROG_SUB, VERS_SUB);
	pmap_unset (PROG_DIV, VERS_DIV);
	pmap_unset (PROG_MUL, VERS_MUL);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, PROG_ADD, VERS_ADD, prog_add_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (PROG_ADD, VERS_ADD, udp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_SUB, VERS_SUB, prog_sub_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (PROG_SUB, VERS_SUB, udp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_DIV, VERS_DIV, prog_div_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (PROG_DIV, VERS_DIV, udp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_MUL, VERS_MUL, prog_mul_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (PROG_MUL, VERS_MUL, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, PROG_ADD, VERS_ADD, prog_add_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (PROG_ADD, VERS_ADD, tcp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_SUB, VERS_SUB, prog_sub_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (PROG_SUB, VERS_SUB, tcp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_DIV, VERS_DIV, prog_div_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (PROG_DIV, VERS_DIV, tcp).");
		exit(1);
	}
	if (!svc_register(transp, PROG_MUL, VERS_MUL, prog_mul_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (PROG_MUL, VERS_MUL, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}