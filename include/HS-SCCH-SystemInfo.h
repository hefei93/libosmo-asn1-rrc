/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_SCCH_SystemInfo_H_
#define	_HS_SCCH_SystemInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondaryScramblingCode.h"
#include "HS-SCCH-Codes.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HS-SCCH-SystemInfo */
typedef struct HS_SCCH_SystemInfo {
	SecondaryScramblingCode_t	*dl_ScramblingCode	/* OPTIONAL */;
	struct HS_SCCH_SystemInfo__hS_SCCHChannelisationCodeInfo {
		A_SEQUENCE_OF(HS_SCCH_Codes_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} hS_SCCHChannelisationCodeInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_SystemInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_SystemInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SCCH_SystemInfo_H_ */
#include <asn_internal.h>
