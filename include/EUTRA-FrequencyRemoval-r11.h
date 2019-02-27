/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_EUTRA_FrequencyRemoval_r11_H_
#define	_EUTRA_FrequencyRemoval_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "FrequenciesToRemove.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_FrequencyRemoval_r11_PR {
	EUTRA_FrequencyRemoval_r11_PR_NOTHING,	/* No components present */
	EUTRA_FrequencyRemoval_r11_PR_removeAllFrequencies,
	EUTRA_FrequencyRemoval_r11_PR_removeSomeFrequencies,
	EUTRA_FrequencyRemoval_r11_PR_removeNoFrequencies
} EUTRA_FrequencyRemoval_r11_PR;

/* EUTRA-FrequencyRemoval-r11 */
typedef struct EUTRA_FrequencyRemoval_r11 {
	EUTRA_FrequencyRemoval_r11_PR present;
	union EUTRA_FrequencyRemoval_r11_u {
		NULL_t	 removeAllFrequencies;
		FrequenciesToRemove_t	 removeSomeFrequencies;
		NULL_t	 removeNoFrequencies;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FrequencyRemoval_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FrequencyRemoval_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_FrequencyRemoval_r11_H_ */
#include <asn_internal.h>
