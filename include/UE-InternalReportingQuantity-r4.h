/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_InternalReportingQuantity_r4_H_
#define	_UE_InternalReportingQuantity_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_InternalReportingQuantity_r4__modeSpecificInfo_PR {
	UE_InternalReportingQuantity_r4__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UE_InternalReportingQuantity_r4__modeSpecificInfo_PR_fdd,
	UE_InternalReportingQuantity_r4__modeSpecificInfo_PR_tdd
} UE_InternalReportingQuantity_r4__modeSpecificInfo_PR;
typedef enum UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR {
	UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR_NOTHING,	/* No components present */
	UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR_tdd384,
	UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR_tdd128
} UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR;

/* UE-InternalReportingQuantity-r4 */
typedef struct UE_InternalReportingQuantity_r4 {
	BOOLEAN_t	 ue_TransmittedPower;
	struct UE_InternalReportingQuantity_r4__modeSpecificInfo {
		UE_InternalReportingQuantity_r4__modeSpecificInfo_PR present;
		union UE_InternalReportingQuantity_r4__modeSpecificInfo_u {
			struct UE_InternalReportingQuantity_r4__modeSpecificInfo__fdd {
				BOOLEAN_t	 ue_RX_TX_TimeDifference;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd {
				struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption {
					UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_PR present;
					union UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption_u {
						struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd384 {
							BOOLEAN_t	 appliedTA;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd384;
						struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd128 {
							BOOLEAN_t	 t_ADVinfo;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd128;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tddOption;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalReportingQuantity_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalReportingQuantity_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_InternalReportingQuantity_r4_H_ */
#include <asn_internal.h>
