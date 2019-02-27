/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioBearerRelease_r6_IEs_H_
#define	_RadioBearerRelease_r6_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "C-RNTI.h"
#include "DSCH-RNTI.h"
#include "H-RNTI.h"
#include "E-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "CN-DomainIdentity.h"
#include "URA-Identity.h"
#include "RB-InformationReleaseList.h"
#include "MaxAllowedUL-TX-Power.h"
#include "MBMS-PL-ServiceRestrictInfo-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo_r6;
struct RAB_InformationReconfigList;
struct RB_InformationReconfigList_r6;
struct RB_InformationAffectedList_r6;
struct DL_CounterSynchronisationInfo_r5;
struct UL_CommonTransChInfo_r4;
struct UL_DeletedTransChInfoList_r6;
struct UL_AddReconfTransChInfoList_r6;
struct DL_CommonTransChInfo_r4;
struct DL_DeletedTransChInfoList_r5;
struct DL_AddReconfTransChInfoList_r5;
struct FrequencyInfo;
struct UL_DPCH_Info_r6;
struct UL_EDCH_Information_r6;
struct DL_HSPDSCH_Information_r6;
struct DL_CommonInformation_r6;
struct DL_InformationPerRL_List_r6;
struct RB_InformationReleaseList;

/* RadioBearerRelease-r6-IEs */
typedef struct RadioBearerRelease_r6_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	CN_DomainIdentity_t	*signallingConnectionRelIndication	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct RAB_InformationReconfigList	*rab_InformationReconfigList	/* OPTIONAL */;
	RB_InformationReleaseList_t	 rb_InformationReleaseList;
	struct RB_InformationReconfigList_r6	*rb_InformationReconfigList	/* OPTIONAL */;
	struct RB_InformationAffectedList_r6	*rb_InformationAffectedList	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_DeletedTransChInfoList_r6	*ul_deletedTransChInfoList	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList_r6	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_DeletedTransChInfoList_r5	*dl_DeletedTransChInfoList	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r6	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r6	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r6	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r6	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r6	*dl_InformationPerRL_List	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	struct RB_InformationReleaseList	*mbms_RB_ListReleasedToChangeTransferMode	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo-r6.h"
#include "RAB-InformationReconfigList.h"
#include "RB-InformationReconfigList-r6.h"
#include "RB-InformationAffectedList-r6.h"
#include "DL-CounterSynchronisationInfo-r5.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-DeletedTransChInfoList-r6.h"
#include "UL-AddReconfTransChInfoList-r6.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-DeletedTransChInfoList-r5.h"
#include "DL-AddReconfTransChInfoList-r5.h"
#include "FrequencyInfo.h"
#include "UL-DPCH-Info-r6.h"
#include "UL-EDCH-Information-r6.h"
#include "DL-HSPDSCH-Information-r6.h"
#include "DL-CommonInformation-r6.h"
#include "DL-InformationPerRL-List-r6.h"
#include "RB-InformationReleaseList.h"

#endif	/* _RadioBearerRelease_r6_IEs_H_ */
#include <asn_internal.h>
