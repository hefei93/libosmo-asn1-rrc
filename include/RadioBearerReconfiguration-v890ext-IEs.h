/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioBearerReconfiguration_v890ext_IEs_H_
#define	_RadioBearerReconfiguration_v890ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_SecondaryCellInfoFDD_v890ext;
struct DL_HSPDSCH_Information_r8_ext;

/* RadioBearerReconfiguration-v890ext-IEs */
typedef struct RadioBearerReconfiguration_v890ext_IEs {
	struct DL_SecondaryCellInfoFDD_v890ext	*dl_SecondaryCellInfoFDD_v890ext	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r8_ext	*dl_HSPDSCH_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfiguration_v890ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfiguration_v890ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-SecondaryCellInfoFDD-v890ext.h"
#include "DL-HSPDSCH-Information-r8-ext.h"

#endif	/* _RadioBearerReconfiguration_v890ext_IEs_H_ */
#include <asn_internal.h>
