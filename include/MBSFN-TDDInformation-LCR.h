/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBSFN_TDDInformation_LCR_H_
#define	_MBSFN_TDDInformation_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_TDDTimeSlotInfo_LCR;

/* MBSFN-TDDInformation-LCR */
typedef struct MBSFN_TDDInformation_LCR {
	A_SEQUENCE_OF(struct MBSFN_TDDTimeSlotInfo_LCR) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_TDDInformation_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_TDDInformation_LCR;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-TDDTimeSlotInfo-LCR.h"

#endif	/* _MBSFN_TDDInformation_LCR_H_ */
#include <asn_internal.h>
