/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionRequest_v7g0ext_IEs_H_
#define	_RRCConnectionRequest_v7g0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResultsOnRACH_v7g0ext;

/* RRCConnectionRequest-v7g0ext-IEs */
typedef struct RRCConnectionRequest_v7g0ext_IEs {
	struct MeasuredResultsOnRACH_v7g0ext	*measuredResultsOnRACH_v7g0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_v7g0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_v7g0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACH-v7g0ext.h"

#endif	/* _RRCConnectionRequest_v7g0ext_IEs_H_ */
#include <asn_internal.h>
