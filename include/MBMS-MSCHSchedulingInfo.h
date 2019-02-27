/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_MSCHSchedulingInfo_H_
#define	_MBMS_MSCHSchedulingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_MSCHSchedulingInfo_PR {
	MBMS_MSCHSchedulingInfo_PR_NOTHING,	/* No components present */
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_32_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_64_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_128_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_256_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_512_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_1024_Offset
} MBMS_MSCHSchedulingInfo_PR;

/* MBMS-MSCHSchedulingInfo */
typedef struct MBMS_MSCHSchedulingInfo {
	MBMS_MSCHSchedulingInfo_PR present;
	union MBMS_MSCHSchedulingInfo_u {
		long	 schedulingPeriod_32_Offset;
		long	 schedulingPeriod_64_Offset;
		long	 schedulingPeriod_128_Offset;
		long	 schedulingPeriod_256_Offset;
		long	 schedulingPeriod_512_Offset;
		long	 schedulingPeriod_1024_Offset;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_MSCHSchedulingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_MSCHSchedulingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_MSCHSchedulingInfo_H_ */
#include <asn_internal.h>
