/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HCS_CellReselectInformation_RSCP_H_
#define	_HCS_CellReselectInformation_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PenaltyTime-RSCP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HCS-CellReselectInformation-RSCP */
typedef struct HCS_CellReselectInformation_RSCP {
	PenaltyTime_RSCP_t	 penaltyTime;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HCS_CellReselectInformation_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HCS_CellReselectInformation_RSCP;

#ifdef __cplusplus
}
#endif

#endif	/* _HCS_CellReselectInformation_RSCP_H_ */
#include <asn_internal.h>
