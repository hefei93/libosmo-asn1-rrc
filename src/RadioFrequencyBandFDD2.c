/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "RadioFrequencyBandFDD2.h"

int
RadioFrequencyBandFDD2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
RadioFrequencyBandFDD2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
RadioFrequencyBandFDD2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
RadioFrequencyBandFDD2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
RadioFrequencyBandFDD2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
RadioFrequencyBandFDD2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
RadioFrequencyBandFDD2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
RadioFrequencyBandFDD2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
RadioFrequencyBandFDD2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	RadioFrequencyBandFDD2_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_RadioFrequencyBandFDD2_constr_1 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_RadioFrequencyBandFDD2_value2enum_1[] = {
	{ 0,	8,	"bandVIII" },
	{ 1,	6,	"bandIX" },
	{ 2,	5,	"bandX" },
	{ 3,	6,	"bandXI" },
	{ 4,	7,	"bandXII" },
	{ 5,	8,	"bandXIII" },
	{ 6,	7,	"bandXIV" },
	{ 7,	6,	"bandXV" },
	{ 8,	7,	"bandXVI" },
	{ 9,	8,	"bandXVII" },
	{ 10,	9,	"bandXVIII" },
	{ 11,	7,	"bandXIX" },
	{ 12,	6,	"bandXX" },
	{ 13,	7,	"bandXXI" },
	{ 14,	8,	"bandXXII" },
	{ 15,	19,	"extension-indicator" }
};
static unsigned int asn_MAP_RadioFrequencyBandFDD2_enum2value_1[] = {
	1,	/* bandIX(1) */
	0,	/* bandVIII(0) */
	2,	/* bandX(2) */
	3,	/* bandXI(3) */
	4,	/* bandXII(4) */
	5,	/* bandXIII(5) */
	6,	/* bandXIV(6) */
	11,	/* bandXIX(11) */
	7,	/* bandXV(7) */
	8,	/* bandXVI(8) */
	9,	/* bandXVII(9) */
	10,	/* bandXVIII(10) */
	12,	/* bandXX(12) */
	13,	/* bandXXI(13) */
	14,	/* bandXXII(14) */
	15	/* extension-indicator(15) */
};
static asn_INTEGER_specifics_t asn_SPC_RadioFrequencyBandFDD2_specs_1 = {
	asn_MAP_RadioFrequencyBandFDD2_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RadioFrequencyBandFDD2_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_RadioFrequencyBandFDD2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RadioFrequencyBandFDD2 = {
	"RadioFrequencyBandFDD2",
	"RadioFrequencyBandFDD2",
	RadioFrequencyBandFDD2_free,
	RadioFrequencyBandFDD2_print,
	RadioFrequencyBandFDD2_constraint,
	RadioFrequencyBandFDD2_decode_ber,
	RadioFrequencyBandFDD2_encode_der,
	RadioFrequencyBandFDD2_decode_xer,
	RadioFrequencyBandFDD2_encode_xer,
	RadioFrequencyBandFDD2_decode_uper,
	RadioFrequencyBandFDD2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RadioFrequencyBandFDD2_tags_1,
	sizeof(asn_DEF_RadioFrequencyBandFDD2_tags_1)
		/sizeof(asn_DEF_RadioFrequencyBandFDD2_tags_1[0]), /* 1 */
	asn_DEF_RadioFrequencyBandFDD2_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioFrequencyBandFDD2_tags_1)
		/sizeof(asn_DEF_RadioFrequencyBandFDD2_tags_1[0]), /* 1 */
	&asn_PER_type_RadioFrequencyBandFDD2_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RadioFrequencyBandFDD2_specs_1	/* Additional specs */
};

