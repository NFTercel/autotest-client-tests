/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PRINTMSG_H_RPCGEN
#define _PRINTMSG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define PRINTMSGPROG 0x20000001
#define PRINTMSGVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PRINTMSG 1
extern  char ** printmsg_1(void *, CLIENT *);
extern  char ** printmsg_1_svc(void *, struct svc_req *);
extern int printmsgprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PRINTMSG 1
extern  char ** printmsg_1();
extern  char ** printmsg_1_svc();
extern int printmsgprog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PRINTMSG_H_RPCGEN */