/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqMeasuredResults_v920ext_H_
#define	_InterFreqMeasuredResults_v920ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCellMeasuredResultsList_v920ext;

/* InterFreqMeasuredResults-v920ext */
typedef struct InterFreqMeasuredResults_v920ext {
	struct InterFreqCellMeasuredResultsList_v920ext	*interFreqCellMeasuredResultsList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqMeasuredResults_v920ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqMeasuredResults_v920ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCellMeasuredResultsList-v920ext.h"

#endif	/* _InterFreqMeasuredResults_v920ext_H_ */
#include <asn_internal.h>
