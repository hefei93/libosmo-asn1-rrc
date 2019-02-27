/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_RACH_Info_H_
#define	_PRACH_RACH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AvailableSignatures.h"
#include "SF-PRACH.h"
#include "PreambleScramblingCodeWordNumber.h"
#include "PuncturingLimit.h"
#include "AvailableSubChannelNumbers.h"
#include <constr_SEQUENCE.h>
#include "TimeslotNumber.h"
#include "TDD-PRACH-CCodeList.h"
#include "PRACH-Midamble.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_RACH_Info__modeSpecificInfo_PR {
	PRACH_RACH_Info__modeSpecificInfo_PR_NOTHING,	/* No components present */
	PRACH_RACH_Info__modeSpecificInfo_PR_fdd,
	PRACH_RACH_Info__modeSpecificInfo_PR_tdd
} PRACH_RACH_Info__modeSpecificInfo_PR;

/* PRACH-RACH-Info */
typedef struct PRACH_RACH_Info {
	struct PRACH_RACH_Info__modeSpecificInfo {
		PRACH_RACH_Info__modeSpecificInfo_PR present;
		union PRACH_RACH_Info__modeSpecificInfo_u {
			struct PRACH_RACH_Info__modeSpecificInfo__fdd {
				AvailableSignatures_t	 availableSignatures;
				SF_PRACH_t	 availableSF;
				PreambleScramblingCodeWordNumber_t	 preambleScramblingCodeWordNumber;
				PuncturingLimit_t	 puncturingLimit;
				AvailableSubChannelNumbers_t	 availableSubChannelNumbers;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct PRACH_RACH_Info__modeSpecificInfo__tdd {
				TimeslotNumber_t	 timeslot;
				TDD_PRACH_CCodeList_t	 channelisationCodeList;
				PRACH_Midamble_t	 prach_Midamble;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_RACH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_RACH_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_RACH_Info_H_ */
#include <asn_internal.h>
