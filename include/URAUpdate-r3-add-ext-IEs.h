/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_URAUpdate_r3_add_ext_IEs_H_
#define	_URAUpdate_r3_add_ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "URAUpdate-v7e0ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* URAUpdate-r3-add-ext-IEs */
typedef struct URAUpdate_r3_add_ext_IEs {
	URAUpdate_v7e0ext_IEs_t	 uraUpdate_v7e0ext;
	struct URAUpdate_r3_add_ext_IEs__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} URAUpdate_r3_add_ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URAUpdate_r3_add_ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _URAUpdate_r3_add_ext_IEs_H_ */
#include <asn_internal.h>
