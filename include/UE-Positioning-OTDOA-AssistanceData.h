/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_OTDOA_AssistanceData_H_
#define	_UE_Positioning_OTDOA_AssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_OTDOA_ReferenceCellInfo;
struct UE_Positioning_OTDOA_NeighbourCellList;

/* UE-Positioning-OTDOA-AssistanceData */
typedef struct UE_Positioning_OTDOA_AssistanceData {
	struct UE_Positioning_OTDOA_ReferenceCellInfo	*ue_positioning_OTDOA_ReferenceCellInfo	/* OPTIONAL */;
	struct UE_Positioning_OTDOA_NeighbourCellList	*ue_positioning_OTDOA_NeighbourCellList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_AssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_AssistanceData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-OTDOA-ReferenceCellInfo.h"
#include "UE-Positioning-OTDOA-NeighbourCellList.h"

#endif	/* _UE_Positioning_OTDOA_AssistanceData_H_ */
#include <asn_internal.h>
