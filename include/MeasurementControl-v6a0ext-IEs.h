/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MeasurementControl_v6a0ext_IEs_H_
#define	_MeasurementControl_v6a0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqReportingCriteria_1b_r5;

/* MeasurementControl-v6a0ext-IEs */
typedef struct MeasurementControl_v6a0ext_IEs {
	struct IntraFreqReportingCriteria_1b_r5	*intraFreqReportingCriteria_1b_r5	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_v6a0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl_v6a0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqReportingCriteria-1b-r5.h"

#endif	/* _MeasurementControl_v6a0ext_IEs_H_ */
#include <asn_internal.h>
