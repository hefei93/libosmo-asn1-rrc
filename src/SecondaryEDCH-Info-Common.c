/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SecondaryEDCH-Info-Common.h"

static int
primary_Secondary_GrantSelector_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
primary_Secondary_GrantSelector_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
primary_Secondary_GrantSelector_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
primary_Secondary_GrantSelector_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
primary_Secondary_GrantSelector_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
primary_Secondary_GrantSelector_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
primary_Secondary_GrantSelector_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
primary_Secondary_GrantSelector_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
primary_Secondary_GrantSelector_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	primary_Secondary_GrantSelector_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_ms2_SchedTransmGrantHARQAlloc_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dpcchPowerOffset_SecondaryULFrequency_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_primary_Secondary_GrantSelector_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ms2_SchedTransmGrantHARQAlloc_constr_5 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dpcchPowerOffset_SecondaryULFrequency_constr_12 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_primary_Secondary_GrantSelector_value2enum_7[] = {
	{ 0,	7,	"primary" },
	{ 1,	9,	"secondary" }
};
static unsigned int asn_MAP_primary_Secondary_GrantSelector_enum2value_7[] = {
	0,	/* primary(0) */
	1	/* secondary(1) */
};
static asn_INTEGER_specifics_t asn_SPC_primary_Secondary_GrantSelector_specs_7 = {
	asn_MAP_primary_Secondary_GrantSelector_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_primary_Secondary_GrantSelector_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_primary_Secondary_GrantSelector_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_primary_Secondary_GrantSelector_7 = {
	"primary-Secondary-GrantSelector",
	"primary-Secondary-GrantSelector",
	primary_Secondary_GrantSelector_7_free,
	primary_Secondary_GrantSelector_7_print,
	primary_Secondary_GrantSelector_7_constraint,
	primary_Secondary_GrantSelector_7_decode_ber,
	primary_Secondary_GrantSelector_7_encode_der,
	primary_Secondary_GrantSelector_7_decode_xer,
	primary_Secondary_GrantSelector_7_encode_xer,
	primary_Secondary_GrantSelector_7_decode_uper,
	primary_Secondary_GrantSelector_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_primary_Secondary_GrantSelector_tags_7,
	sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_7)
		/sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_7[0]) - 1, /* 1 */
	asn_DEF_primary_Secondary_GrantSelector_tags_7,	/* Same as above */
	sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_7)
		/sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_7[0]), /* 2 */
	&asn_PER_type_primary_Secondary_GrantSelector_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_primary_Secondary_GrantSelector_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_servingGrant_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common__servingGrant, primary_Secondary_GrantSelector),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_primary_Secondary_GrantSelector_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primary-Secondary-GrantSelector"
		},
};
static ber_tlv_tag_t asn_DEF_servingGrant_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_servingGrant_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primary-Secondary-GrantSelector at 2190 */
};
static asn_SEQUENCE_specifics_t asn_SPC_servingGrant_specs_6 = {
	sizeof(struct SecondaryEDCH_Info_Common__servingGrant),
	offsetof(struct SecondaryEDCH_Info_Common__servingGrant, _asn_ctx),
	asn_MAP_servingGrant_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingGrant_6 = {
	"servingGrant",
	"servingGrant",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_servingGrant_tags_6,
	sizeof(asn_DEF_servingGrant_tags_6)
		/sizeof(asn_DEF_servingGrant_tags_6[0]) - 1, /* 1 */
	asn_DEF_servingGrant_tags_6,	/* Same as above */
	sizeof(asn_DEF_servingGrant_tags_6)
		/sizeof(asn_DEF_servingGrant_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_servingGrant_6,
	1,	/* Elements count */
	&asn_SPC_servingGrant_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SecondaryEDCH_Info_Common_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common, scramblingCodeType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ScramblingCodeType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scramblingCodeType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common, scramblingCodeNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scramblingCodeNumber"
		},
	{ ATF_POINTER, 4, offsetof(struct SecondaryEDCH_Info_Common, ms2_SchedTransmGrantHARQAlloc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ms2_SchedTransmGrantHARQAlloc_constraint_1,
		&asn_PER_memb_ms2_SchedTransmGrantHARQAlloc_constr_5,
		0,
		"ms2-SchedTransmGrantHARQAlloc"
		},
	{ ATF_POINTER, 3, offsetof(struct SecondaryEDCH_Info_Common, servingGrant),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_servingGrant_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servingGrant"
		},
	{ ATF_POINTER, 2, offsetof(struct SecondaryEDCH_Info_Common, minReduced_E_DPDCH_GainFactor),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinReduced_E_DPDCH_GainFactor,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minReduced-E-DPDCH-GainFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct SecondaryEDCH_Info_Common, e_DCH_minimumSet_E_TFCI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_MinimumSet_E_TFCI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-DCH-minimumSet-E-TFCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common, dpcchPowerOffset_SecondaryULFrequency),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_dpcchPowerOffset_SecondaryULFrequency_constraint_1,
		&asn_PER_memb_dpcchPowerOffset_SecondaryULFrequency_constr_12,
		0,
		"dpcchPowerOffset-SecondaryULFrequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryEDCH_Info_Common, pc_Preamble),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PC_Preamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pc-Preamble"
		},
};
static int asn_MAP_SecondaryEDCH_Info_Common_oms_1[] = { 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_SecondaryEDCH_Info_Common_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SecondaryEDCH_Info_Common_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyInfo at 2185 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scramblingCodeType at 2186 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scramblingCodeNumber at 2187 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ms2-SchedTransmGrantHARQAlloc at 2188 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* servingGrant at 2191 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* minReduced-E-DPDCH-GainFactor at 2192 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* e-DCH-minimumSet-E-TFCI at 2193 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dpcchPowerOffset-SecondaryULFrequency at 2194 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* pc-Preamble at 2196 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SecondaryEDCH_Info_Common_specs_1 = {
	sizeof(struct SecondaryEDCH_Info_Common),
	offsetof(struct SecondaryEDCH_Info_Common, _asn_ctx),
	asn_MAP_SecondaryEDCH_Info_Common_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_SecondaryEDCH_Info_Common_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SecondaryEDCH_Info_Common = {
	"SecondaryEDCH-Info-Common",
	"SecondaryEDCH-Info-Common",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SecondaryEDCH_Info_Common_tags_1,
	sizeof(asn_DEF_SecondaryEDCH_Info_Common_tags_1)
		/sizeof(asn_DEF_SecondaryEDCH_Info_Common_tags_1[0]), /* 1 */
	asn_DEF_SecondaryEDCH_Info_Common_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecondaryEDCH_Info_Common_tags_1)
		/sizeof(asn_DEF_SecondaryEDCH_Info_Common_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SecondaryEDCH_Info_Common_1,
	9,	/* Elements count */
	&asn_SPC_SecondaryEDCH_Info_Common_specs_1	/* Additional specs */
};
