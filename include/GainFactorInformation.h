/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GainFactorInformation_H_
#define	_GainFactorInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SignalledGainFactors.h"
#include "ReferenceTFC-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GainFactorInformation_PR {
	GainFactorInformation_PR_NOTHING,	/* No components present */
	GainFactorInformation_PR_signalledGainFactors,
	GainFactorInformation_PR_computedGainFactors
} GainFactorInformation_PR;

/* GainFactorInformation */
typedef struct GainFactorInformation {
	GainFactorInformation_PR present;
	union GainFactorInformation_u {
		SignalledGainFactors_t	 signalledGainFactors;
		ReferenceTFC_ID_t	 computedGainFactors;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GainFactorInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GainFactorInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _GainFactorInformation_H_ */
#include <asn_internal.h>
