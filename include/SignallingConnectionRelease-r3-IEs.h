/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SignallingConnectionRelease_r3_IEs_H_
#define	_SignallingConnectionRelease_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "CN-DomainIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SignallingConnectionRelease-r3-IEs */
typedef struct SignallingConnectionRelease_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	CN_DomainIdentity_t	 cn_DomainIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignallingConnectionRelease_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignallingConnectionRelease_r3_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SignallingConnectionRelease_r3_IEs_H_ */
#include <asn_internal.h>
