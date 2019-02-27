/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_OTDOA_AssistanceData_r7_H_
#define	_UE_Positioning_OTDOA_AssistanceData_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_OTDOA_ReferenceCellInfo_r7;
struct UE_Positioning_OTDOA_NeighbourCellList_r7;

/* UE-Positioning-OTDOA-AssistanceData-r7 */
typedef struct UE_Positioning_OTDOA_AssistanceData_r7 {
	struct UE_Positioning_OTDOA_ReferenceCellInfo_r7	*ue_positioning_OTDOA_ReferenceCellInfo	/* OPTIONAL */;
	struct UE_Positioning_OTDOA_NeighbourCellList_r7	*ue_positioning_OTDOA_NeighbourCellList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_AssistanceData_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_AssistanceData_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-OTDOA-ReferenceCellInfo-r7.h"
#include "UE-Positioning-OTDOA-NeighbourCellList-r7.h"

#endif	/* _UE_Positioning_OTDOA_AssistanceData_r7_H_ */
#include <asn_internal.h>
