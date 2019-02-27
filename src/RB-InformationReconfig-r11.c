/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "RB-InformationReconfig-r11.h"

static asn_TYPE_member_t asn_MBR_RB_InformationReconfig_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RB_InformationReconfig_r11, rb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-Identity"
		},
	{ ATF_POINTER, 5, offsetof(struct RB_InformationReconfig_r11, pdcp_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_InfoReconfig_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Info"
		},
	{ ATF_POINTER, 4, offsetof(struct RB_InformationReconfig_r11, pdcp_SN_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_SN_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-SN-Info"
		},
	{ ATF_POINTER, 3, offsetof(struct RB_InformationReconfig_r11, rlc_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Info_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct RB_InformationReconfig_r11, rb_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_MappingInfo_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-MappingInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct RB_InformationReconfig_r11, rb_StopContinue),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_StopContinue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-StopContinue"
		},
};
static int asn_MAP_RB_InformationReconfig_r11_oms_1[] = { 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_RB_InformationReconfig_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RB_InformationReconfig_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-Identity at 4176 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcp-Info at 4177 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-SN-Info at 4178 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Info at 4179 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rb-MappingInfo at 4180 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* rb-StopContinue at 4181 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RB_InformationReconfig_r11_specs_1 = {
	sizeof(struct RB_InformationReconfig_r11),
	offsetof(struct RB_InformationReconfig_r11, _asn_ctx),
	asn_MAP_RB_InformationReconfig_r11_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RB_InformationReconfig_r11_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RB_InformationReconfig_r11 = {
	"RB-InformationReconfig-r11",
	"RB-InformationReconfig-r11",
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
	asn_DEF_RB_InformationReconfig_r11_tags_1,
	sizeof(asn_DEF_RB_InformationReconfig_r11_tags_1)
		/sizeof(asn_DEF_RB_InformationReconfig_r11_tags_1[0]), /* 1 */
	asn_DEF_RB_InformationReconfig_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_RB_InformationReconfig_r11_tags_1)
		/sizeof(asn_DEF_RB_InformationReconfig_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RB_InformationReconfig_r11_1,
	6,	/* Elements count */
	&asn_SPC_RB_InformationReconfig_r11_specs_1	/* Additional specs */
};

