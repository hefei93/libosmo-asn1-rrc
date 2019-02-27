/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "IndividualDL-CCTrCH-Info.h"

static asn_per_constraints_t asn_PER_type_tfcs_SignallingMode_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tfcs_SignallingMode_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode, choice.explicit_config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicit-config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode, choice.sameAsUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sameAsUL"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tfcs_SignallingMode_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicit-config at 5391 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sameAsUL at 5393 */
};
static asn_CHOICE_specifics_t asn_SPC_tfcs_SignallingMode_specs_3 = {
	sizeof(struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode),
	offsetof(struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode, _asn_ctx),
	offsetof(struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode, present),
	sizeof(((struct IndividualDL_CCTrCH_Info__tfcs_SignallingMode *)0)->present),
	asn_MAP_tfcs_SignallingMode_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tfcs_SignallingMode_3 = {
	"tfcs-SignallingMode",
	"tfcs-SignallingMode",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_tfcs_SignallingMode_constr_3,
	asn_MBR_tfcs_SignallingMode_3,
	2,	/* Elements count */
	&asn_SPC_tfcs_SignallingMode_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IndividualDL_CCTrCH_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualDL_CCTrCH_Info, dl_TFCS_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-TFCS-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualDL_CCTrCH_Info, tfcs_SignallingMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tfcs_SignallingMode_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfcs-SignallingMode"
		},
};
static ber_tlv_tag_t asn_DEF_IndividualDL_CCTrCH_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IndividualDL_CCTrCH_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-TFCS-Identity at 5389 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tfcs-SignallingMode at 5391 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IndividualDL_CCTrCH_Info_specs_1 = {
	sizeof(struct IndividualDL_CCTrCH_Info),
	offsetof(struct IndividualDL_CCTrCH_Info, _asn_ctx),
	asn_MAP_IndividualDL_CCTrCH_Info_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IndividualDL_CCTrCH_Info = {
	"IndividualDL-CCTrCH-Info",
	"IndividualDL-CCTrCH-Info",
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
	asn_DEF_IndividualDL_CCTrCH_Info_tags_1,
	sizeof(asn_DEF_IndividualDL_CCTrCH_Info_tags_1)
		/sizeof(asn_DEF_IndividualDL_CCTrCH_Info_tags_1[0]), /* 1 */
	asn_DEF_IndividualDL_CCTrCH_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndividualDL_CCTrCH_Info_tags_1)
		/sizeof(asn_DEF_IndividualDL_CCTrCH_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IndividualDL_CCTrCH_Info_1,
	2,	/* Elements count */
	&asn_SPC_IndividualDL_CCTrCH_Info_specs_1	/* Additional specs */
};

