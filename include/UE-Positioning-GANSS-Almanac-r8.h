/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GANSS_Almanac_r8_H_
#define	_UE_Positioning_GANSS_Almanac_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ALM_keplerianParameters;
struct ALM_NAVKeplerianSet;
struct ALM_ReducedKeplerianSet;
struct ALM_MidiAlmanacSet;
struct ALM_GlonassAlmanacSet;
struct ALM_ECEFsbasAlmanacSet;

/* UE-Positioning-GANSS-Almanac-r8 */
typedef struct UE_Positioning_GANSS_Almanac_r8 {
	long	 ganss_wk_number;
	struct ALM_keplerianParameters	*alm_keplerianParameters	/* OPTIONAL */;
	struct ALM_NAVKeplerianSet	*alm_keplerianNAVAlmanac	/* OPTIONAL */;
	struct ALM_ReducedKeplerianSet	*alm_keplerianReducedAlmanac	/* OPTIONAL */;
	struct ALM_MidiAlmanacSet	*alm_keplerianMidiAlmanac	/* OPTIONAL */;
	struct ALM_GlonassAlmanacSet	*alm_keplerianGLONASS	/* OPTIONAL */;
	struct ALM_ECEFsbasAlmanacSet	*alm_ecefSBASAlmanac	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_Almanac_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_Almanac_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ALM-keplerianParameters.h"
#include "ALM-NAVKeplerianSet.h"
#include "ALM-ReducedKeplerianSet.h"
#include "ALM-MidiAlmanacSet.h"
#include "ALM-GlonassAlmanacSet.h"
#include "ALM-ECEFsbasAlmanacSet.h"

#endif	/* _UE_Positioning_GANSS_Almanac_r8_H_ */
#include <asn_internal.h>