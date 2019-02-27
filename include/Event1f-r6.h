/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Event1f_r6_H_
#define	_Event1f_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TriggeringCondition1.h"
#include "ThresholdUsedFrequency-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Event1f-r6 */
typedef struct Event1f_r6 {
	TriggeringCondition1_t	 triggeringCondition;
	ThresholdUsedFrequency_r6_t	 thresholdUsedFrequency;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1f_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1f_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _Event1f_r6_H_ */
#include <asn_internal.h>
