/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_SICH_List_TDD128_H_
#define	_HS_SICH_List_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include "HS-SICH-Configuration-TDD128-r6.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_SICH_List_TDD128__Member_PR {
	HS_SICH_List_TDD128__Member_PR_NOTHING,	/* No components present */
	HS_SICH_List_TDD128__Member_PR_implicit,
	HS_SICH_List_TDD128__Member_PR_explicit
} HS_SICH_List_TDD128__Member_PR;

/* HS-SICH-List-TDD128 */
typedef struct HS_SICH_List_TDD128 {
	A_SEQUENCE_OF(struct HS_SICH_List_TDD128__Member {
		HS_SICH_List_TDD128__Member_PR present;
		union HS_SICH_List_TDD128__Member_u {
			struct implicit {
				long	 hS_SCCH_Index;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} implicit;
			struct Explicit {
				HS_SICH_Configuration_TDD128_r6_t	 hS_SICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} Explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SICH_List_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SICH_List_TDD128;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SICH_List_TDD128_H_ */
#include <asn_internal.h>
