/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HandoverFromUTRANCommand_CDMA2000_r3_IEs_H_
#define	_HandoverFromUTRANCommand_CDMA2000_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "ActivationTime.h"
#include "CDMA2000-MessageList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAB_Info;

/* HandoverFromUTRANCommand-CDMA2000-r3-IEs */
typedef struct HandoverFromUTRANCommand_CDMA2000_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct RAB_Info	*toHandoverRAB_Info	/* OPTIONAL */;
	CDMA2000_MessageList_t	 cdma2000_MessageList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromUTRANCommand_CDMA2000_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_CDMA2000_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAB-Info.h"

#endif	/* _HandoverFromUTRANCommand_CDMA2000_r3_IEs_H_ */
#include <asn_internal.h>
