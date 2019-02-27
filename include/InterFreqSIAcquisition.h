/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqSIAcquisition_H_
#define	_InterFreqSIAcquisition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyInfo.h"
#include <NULL.h>
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqSIAcquisition__modeSpecificInfo_PR {
	InterFreqSIAcquisition__modeSpecificInfo_PR_NOTHING,	/* No components present */
	InterFreqSIAcquisition__modeSpecificInfo_PR_fdd,
	InterFreqSIAcquisition__modeSpecificInfo_PR_tdd
} InterFreqSIAcquisition__modeSpecificInfo_PR;

/* InterFreqSIAcquisition */
typedef struct InterFreqSIAcquisition {
	FrequencyInfo_t	 frequencyInfo;
	struct InterFreqSIAcquisition__modeSpecificInfo {
		InterFreqSIAcquisition__modeSpecificInfo_PR present;
		union InterFreqSIAcquisition__modeSpecificInfo_u {
			struct InterFreqSIAcquisition__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryScramblingCode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqSIAcquisition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqSIAcquisition;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqSIAcquisition_H_ */
#include <asn_internal.h>
