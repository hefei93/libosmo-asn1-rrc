/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CompleteSIB_H_
#define	_CompleteSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompleteSIB */
typedef struct CompleteSIB {
	SIB_Type_t	 sib_Type;
	BIT_STRING_t	 sib_Data_fixed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompleteSIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompleteSIB;

#ifdef __cplusplus
}
#endif

#endif	/* _CompleteSIB_H_ */
#include <asn_internal.h>
