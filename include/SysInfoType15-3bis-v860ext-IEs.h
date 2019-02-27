/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_3bis_v860ext_IEs_H_
#define	_SysInfoType15_3bis_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_Almanac_v860ext;
struct UE_Positioning_GANSS_AddUTCModels;
struct UE_Positioning_GANSS_AuxiliaryInfo;

/* SysInfoType15-3bis-v860ext-IEs */
typedef struct SysInfoType15_3bis_v860ext_IEs {
	struct UE_Positioning_GANSS_Almanac_v860ext	*ue_Positioning_GANSS_Almanac	/* OPTIONAL */;
	struct UE_Positioning_GANSS_AddUTCModels	*ue_Positioning_GANSS_AddUTCModels	/* OPTIONAL */;
	struct UE_Positioning_GANSS_AuxiliaryInfo	*ue_Positioning_GANSS_AuxiliaryInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_3bis_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_3bis_v860ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GANSS-Almanac-v860ext.h"
#include "UE-Positioning-GANSS-AddUTCModels.h"
#include "UE-Positioning-GANSS-AuxiliaryInfo.h"

#endif	/* _SysInfoType15_3bis_v860ext_IEs_H_ */
#include <asn_internal.h>
