/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SRB_SpecificIntegrityProtInfo_H_
#define	_SRB_SpecificIntegrityProtInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "RRC-MessageSequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRB-SpecificIntegrityProtInfo */
typedef struct SRB_SpecificIntegrityProtInfo {
	BIT_STRING_t	 ul_RRC_HFN;
	BIT_STRING_t	 dl_RRC_HFN;
	RRC_MessageSequenceNumber_t	 ul_RRC_SequenceNumber;
	RRC_MessageSequenceNumber_t	 dl_RRC_SequenceNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_SpecificIntegrityProtInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_SpecificIntegrityProtInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_SpecificIntegrityProtInfo_H_ */
#include <asn_internal.h>
