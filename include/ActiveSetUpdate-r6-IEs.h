/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_ActiveSetUpdate_r6_IEs_H_
#define	_ActiveSetUpdate_r6_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "H-RNTI.h"
#include "E-RNTI.h"
#include "MaxAllowedUL-TX-Power.h"
#include "TX-DiversityMode.h"
#include "DPC-Mode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct U_RNTI;
struct CN_InformationInfo_r6;
struct RL_AdditionInformationList_r6;
struct RL_RemovalInformationList;
struct Serving_HSDSCH_CellInformation;
struct E_DCH_ReconfigurationInfo;

/* ActiveSetUpdate-r6-IEs */
typedef struct ActiveSetUpdate_r6_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*newU_RNTI	/* OPTIONAL */;
	H_RNTI_t	*newH_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct RL_AdditionInformationList_r6	*rl_AdditionInformationList	/* OPTIONAL */;
	struct RL_RemovalInformationList	*rl_RemovalInformationList	/* OPTIONAL */;
	TX_DiversityMode_t	*tx_DiversityMode	/* OPTIONAL */;
	DPC_Mode_t	*dpc_Mode	/* OPTIONAL */;
	struct Serving_HSDSCH_CellInformation	*serving_HSDSCH_CellInformation	/* OPTIONAL */;
	struct E_DCH_ReconfigurationInfo	*e_dch_ReconfigurationInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActiveSetUpdate_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "U-RNTI.h"
#include "CN-InformationInfo-r6.h"
#include "RL-AdditionInformationList-r6.h"
#include "RL-RemovalInformationList.h"
#include "Serving-HSDSCH-CellInformation.h"
#include "E-DCH-ReconfigurationInfo.h"

#endif	/* _ActiveSetUpdate_r6_IEs_H_ */
#include <asn_internal.h>