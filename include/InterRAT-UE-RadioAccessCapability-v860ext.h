/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterRAT_UE_RadioAccessCapability_v860ext_H_
#define	_InterRAT_UE_RadioAccessCapability_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_RadioAccessCapability;

/* InterRAT-UE-RadioAccessCapability-v860ext */
typedef struct InterRAT_UE_RadioAccessCapability_v860ext {
	struct EUTRA_RadioAccessCapability	*eutra_RadioAccessCapability	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_UE_RadioAccessCapability_v860ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_UE_RadioAccessCapability_v860ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-RadioAccessCapability.h"

#endif	/* _InterRAT_UE_RadioAccessCapability_v860ext_H_ */
#include <asn_internal.h>
