/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_OngoingMeasRepList_r6_H_
#define	_OngoingMeasRepList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OngoingMeasRep_r6;

/* OngoingMeasRepList-r6 */
typedef struct OngoingMeasRepList_r6 {
	A_SEQUENCE_OF(struct OngoingMeasRep_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OngoingMeasRepList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OngoingMeasRepList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OngoingMeasRep-r6.h"

#endif	/* _OngoingMeasRepList_r6_H_ */
#include <asn_internal.h>