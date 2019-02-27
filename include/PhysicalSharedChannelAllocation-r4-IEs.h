/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PhysicalSharedChannelAllocation_r4_IEs_H_
#define	_PhysicalSharedChannelAllocation_r4_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalSharedChannelAllocation_r4_IEs__confirmRequest {
	PhysicalSharedChannelAllocation_r4_IEs__confirmRequest_confirmPDSCH	= 0,
	PhysicalSharedChannelAllocation_r4_IEs__confirmRequest_confirmPUSCH	= 1
} e_PhysicalSharedChannelAllocation_r4_IEs__confirmRequest;

/* Forward declarations */
struct UL_TimingAdvanceControl_r4;
struct PUSCH_CapacityAllocationInfo_r4;
struct PDSCH_CapacityAllocationInfo_r4;
struct TimeslotList_r4;

/* PhysicalSharedChannelAllocation-r4-IEs */
typedef struct PhysicalSharedChannelAllocation_r4_IEs {
	struct UL_TimingAdvanceControl_r4	*ul_TimingAdvance	/* OPTIONAL */;
	struct PUSCH_CapacityAllocationInfo_r4	*pusch_CapacityAllocationInfo	/* OPTIONAL */;
	struct PDSCH_CapacityAllocationInfo_r4	*pdsch_CapacityAllocationInfo	/* OPTIONAL */;
	long	*confirmRequest	/* OPTIONAL */;
	long	*trafficVolumeReportRequest	/* OPTIONAL */;
	struct TimeslotList_r4	*iscpTimeslotList	/* OPTIONAL */;
	BOOLEAN_t	 requestPCCPCHRSCP;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalSharedChannelAllocation_r4_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_confirmRequest_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalSharedChannelAllocation_r4_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-TimingAdvanceControl-r4.h"
#include "PUSCH-CapacityAllocationInfo-r4.h"
#include "PDSCH-CapacityAllocationInfo-r4.h"
#include "TimeslotList-r4.h"

#endif	/* _PhysicalSharedChannelAllocation_r4_IEs_H_ */
#include <asn_internal.h>
