/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UTRAN_DRX_CycleLengthCoefficient_r7_H_
#define	_UTRAN_DRX_CycleLengthCoefficient_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "T-319.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTRAN-DRX-CycleLengthCoefficient-r7 */
typedef struct UTRAN_DRX_CycleLengthCoefficient_r7 {
	long	 drx_CycleLengthCoefficient;
	long	*drx_CycleLengthCoefficient2	/* OPTIONAL */;
	T_319_t	*timeForDRXCycle2	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRAN_DRX_CycleLengthCoefficient_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRAN_DRX_CycleLengthCoefficient_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRAN_DRX_CycleLengthCoefficient_r7_H_ */
#include <asn_internal.h>
