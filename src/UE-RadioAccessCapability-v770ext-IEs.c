/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UE-RadioAccessCapability-v770ext-IEs.h"

static int
mac_ehsSupport_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
mac_ehsSupport_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
mac_ehsSupport_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
mac_ehsSupport_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
mac_ehsSupport_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
mac_ehsSupport_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
mac_ehsSupport_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
mac_ehsSupport_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
mac_ehsSupport_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
mac_ehsSupport_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mac_ehsSupport_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_mac_ehsSupport_constr_8 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_mac_ehsSupport_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_mac_ehsSupport_enum2value_8[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_mac_ehsSupport_specs_8 = {
	asn_MAP_mac_ehsSupport_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_ehsSupport_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_mac_ehsSupport_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_ehsSupport_8 = {
	"mac-ehsSupport",
	"mac-ehsSupport",
	mac_ehsSupport_8_free,
	mac_ehsSupport_8_print,
	mac_ehsSupport_8_constraint,
	mac_ehsSupport_8_decode_ber,
	mac_ehsSupport_8_encode_der,
	mac_ehsSupport_8_decode_xer,
	mac_ehsSupport_8_encode_xer,
	mac_ehsSupport_8_decode_uper,
	mac_ehsSupport_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mac_ehsSupport_tags_8,
	sizeof(asn_DEF_mac_ehsSupport_tags_8)
		/sizeof(asn_DEF_mac_ehsSupport_tags_8[0]) - 1, /* 1 */
	asn_DEF_mac_ehsSupport_tags_8,	/* Same as above */
	sizeof(asn_DEF_mac_ehsSupport_tags_8)
		/sizeof(asn_DEF_mac_ehsSupport_tags_8[0]), /* 2 */
	&asn_PER_type_mac_ehsSupport_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_ehsSupport_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_v770ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, pdcp_Capability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Capability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, rlc_Capability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Capability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Capability"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, rf_Capability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Capability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rf-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, physicalChannelCapability),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelCapability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, multiModeRAT_Capability),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiModeRAT_Capability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiModeRAT-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, ue_PositioningCapability),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_PositioningCapability_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-PositioningCapability"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, mac_ehsSupport),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_ehsSupport_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-ehsSupport"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v770ext_IEs, ue_specificCapabilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_SpecificCapabilityInformation_LCRTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-specificCapabilityInformation"
		},
};
static int asn_MAP_UE_RadioAccessCapability_v770ext_IEs_oms_1[] = { 0, 2, 6, 7 };
static ber_tlv_tag_t asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapability_v770ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-Capability at 2550 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Capability at 2551 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rf-Capability at 2552 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* physicalChannelCapability at 2553 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multiModeRAT-Capability at 2554 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-PositioningCapability at 2555 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mac-ehsSupport at 2556 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ue-specificCapabilityInformation at 2557 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_v770ext_IEs_specs_1 = {
	sizeof(struct UE_RadioAccessCapability_v770ext_IEs),
	offsetof(struct UE_RadioAccessCapability_v770ext_IEs, _asn_ctx),
	asn_MAP_UE_RadioAccessCapability_v770ext_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapability_v770ext_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v770ext_IEs = {
	"UE-RadioAccessCapability-v770ext-IEs",
	"UE-RadioAccessCapability-v770ext-IEs",
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
	asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v770ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapability_v770ext_IEs_1,
	8,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapability_v770ext_IEs_specs_1	/* Additional specs */
};

