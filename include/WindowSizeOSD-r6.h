/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_WindowSizeOSD_r6_H_
#define	_WindowSizeOSD_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WindowSizeOSD_r6 {
	WindowSizeOSD_r6_ws8	= 0,
	WindowSizeOSD_r6_ws16	= 1,
	WindowSizeOSD_r6_ws32	= 2,
	WindowSizeOSD_r6_ws40	= 3,
	WindowSizeOSD_r6_ws48	= 4,
	WindowSizeOSD_r6_ws56	= 5,
	WindowSizeOSD_r6_ws64	= 6
} e_WindowSizeOSD_r6;

/* WindowSizeOSD-r6 */
typedef long	 WindowSizeOSD_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WindowSizeOSD_r6;
asn_struct_free_f WindowSizeOSD_r6_free;
asn_struct_print_f WindowSizeOSD_r6_print;
asn_constr_check_f WindowSizeOSD_r6_constraint;
ber_type_decoder_f WindowSizeOSD_r6_decode_ber;
der_type_encoder_f WindowSizeOSD_r6_encode_der;
xer_type_decoder_f WindowSizeOSD_r6_decode_xer;
xer_type_encoder_f WindowSizeOSD_r6_encode_xer;
per_type_decoder_f WindowSizeOSD_r6_decode_uper;
per_type_encoder_f WindowSizeOSD_r6_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WindowSizeOSD_r6_H_ */
#include <asn_internal.h>
