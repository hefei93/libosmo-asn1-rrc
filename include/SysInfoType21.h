/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType21_H_
#define	_SysInfoType21_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EAB_Parameters;

/* SysInfoType21 */
typedef struct SysInfoType21 {
	struct EAB_Parameters	*eab_Parameters	/* OPTIONAL */;
	struct SysInfoType21__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType21_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType21;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EAB-Parameters.h"

#endif	/* _SysInfoType21_H_ */
#include <asn_internal.h>
