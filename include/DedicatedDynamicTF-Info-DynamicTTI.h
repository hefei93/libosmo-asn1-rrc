/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DedicatedDynamicTF_Info_DynamicTTI_H_
#define	_DedicatedDynamicTF_Info_DynamicTTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NumberOfTbSizeAndTTIList.h"
#include "LogicalChannelList.h"
#include "BitModeRLC-SizeInfo.h"
#include "OctetModeRLC-SizeInfoType1.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR {
	DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR_NOTHING,	/* No components present */
	DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR_bitMode,
	DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR_octetModeType1
} DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR;

/* DedicatedDynamicTF-Info-DynamicTTI */
typedef struct DedicatedDynamicTF_Info_DynamicTTI {
	struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size {
		DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_PR present;
		union DedicatedDynamicTF_Info_DynamicTTI__rlc_Size_u {
			BitModeRLC_SizeInfo_t	 bitMode;
			OctetModeRLC_SizeInfoType1_t	 octetModeType1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rlc_Size;
	NumberOfTbSizeAndTTIList_t	 numberOfTbSizeAndTTIList;
	LogicalChannelList_t	 logicalChannelList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DedicatedDynamicTF_Info_DynamicTTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DedicatedDynamicTF_Info_DynamicTTI;

#ifdef __cplusplus
}
#endif

#endif	/* _DedicatedDynamicTF_Info_DynamicTTI_H_ */
#include <asn_internal.h>
