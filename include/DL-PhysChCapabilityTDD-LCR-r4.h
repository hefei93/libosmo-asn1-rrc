/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_PhysChCapabilityTDD_LCR_r4_H_
#define	_DL_PhysChCapabilityTDD_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MaxTS-PerSubFrame-r4.h"
#include "MaxPhysChPerSubFrame-r4.h"
#include "MinimumSF-DL.h"
#include <BOOLEAN.h>
#include "MaxPhysChPerTS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-PhysChCapabilityTDD-LCR-r4 */
typedef struct DL_PhysChCapabilityTDD_LCR_r4 {
	MaxTS_PerSubFrame_r4_t	 maxTS_PerSubFrame;
	MaxPhysChPerSubFrame_r4_t	 maxPhysChPerFrame;
	MinimumSF_DL_t	 minimumSF;
	BOOLEAN_t	 supportOfPDSCH;
	MaxPhysChPerTS_t	 maxPhysChPerTS;
	BOOLEAN_t	 supportOf8PSK;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PhysChCapabilityTDD_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityTDD_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PhysChCapabilityTDD_LCR_r4_H_ */
#include <asn_internal.h>
