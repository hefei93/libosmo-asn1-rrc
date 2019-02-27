/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NonUsedFreq2aParameter_r11_H_
#define	_NonUsedFreq2aParameter_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "W.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NonUsedFreq2aParameter_r11__nonUsedFreqTriggeringConditionDetectedCells {
	NonUsedFreq2aParameter_r11__nonUsedFreqTriggeringConditionDetectedCells_true	= 0
} e_NonUsedFreq2aParameter_r11__nonUsedFreqTriggeringConditionDetectedCells;

/* Forward declarations */
struct CellInfoListToBeExcluded;

/* NonUsedFreq2aParameter-r11 */
typedef struct NonUsedFreq2aParameter_r11 {
	W_t	 nonUsedFreqW;
	long	*nonUsedFreqTriggeringConditionDetectedCells	/* OPTIONAL */;
	struct CellInfoListToBeExcluded	*excludedCellInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonUsedFreq2aParameter_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nonUsedFreqTriggeringConditionDetectedCells_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NonUsedFreq2aParameter_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellInfoListToBeExcluded.h"

#endif	/* _NonUsedFreq2aParameter_r11_H_ */
#include <asn_internal.h>
