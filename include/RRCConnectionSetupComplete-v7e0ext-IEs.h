/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionSetupComplete_v7e0ext_IEs_H_
#define	_RRCConnectionSetupComplete_v7e0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-RadioAccessCapability-v7e0ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionSetupComplete-v7e0ext-IEs */
typedef struct RRCConnectionSetupComplete_v7e0ext_IEs {
	UE_RadioAccessCapability_v7e0ext_t	 ue_RadioAccessCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v7e0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v7e0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetupComplete_v7e0ext_IEs_H_ */
#include <asn_internal.h>
