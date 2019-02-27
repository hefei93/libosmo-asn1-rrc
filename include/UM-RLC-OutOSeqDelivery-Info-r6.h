/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UM_RLC_OutOSeqDelivery_Info_r6_H_
#define	_UM_RLC_OutOSeqDelivery_Info_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimerOSD-r6.h"
#include "WindowSizeOSD-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UM-RLC-OutOSeqDelivery-Info-r6 */
typedef struct UM_RLC_OutOSeqDelivery_Info_r6 {
	TimerOSD_r6_t	*timer_OSD	/* OPTIONAL */;
	WindowSizeOSD_r6_t	 windowSize_OSD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UM_RLC_OutOSeqDelivery_Info_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _UM_RLC_OutOSeqDelivery_Info_r6_H_ */
#include <asn_internal.h>
