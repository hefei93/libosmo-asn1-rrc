/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_AssistanceDataDelivery_v3a0ext_H_
#define	_AssistanceDataDelivery_v3a0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SFN-Offset-Validity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AssistanceDataDelivery-v3a0ext */
typedef struct AssistanceDataDelivery_v3a0ext {
	SFN_Offset_Validity_t	*sfn_Offset_Validity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AssistanceDataDelivery_v3a0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AssistanceDataDelivery_v3a0ext;

#ifdef __cplusplus
}
#endif

#endif	/* _AssistanceDataDelivery_v3a0ext_H_ */
#include <asn_internal.h>
