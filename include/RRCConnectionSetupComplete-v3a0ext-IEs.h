/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionSetupComplete_v3a0ext_IEs_H_
#define	_RRCConnectionSetupComplete_v3a0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability_v3a0ext;

/* RRCConnectionSetupComplete-v3a0ext-IEs */
typedef struct RRCConnectionSetupComplete_v3a0ext_IEs {
	struct UE_RadioAccessCapability_v3a0ext	*ue_RadioAccessCapability_v3a0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v3a0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v3a0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-RadioAccessCapability-v3a0ext.h"

#endif	/* _RRCConnectionSetupComplete_v3a0ext_IEs_H_ */
#include <asn_internal.h>
