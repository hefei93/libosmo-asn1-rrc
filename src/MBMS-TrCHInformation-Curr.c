/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MBMS-TrCHInformation-Curr.h"

static asn_TYPE_member_t asn_MBR_MBMS_TrCHInformation_Curr_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_TrCHInformation_Curr, transpCh_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CommonTrChIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transpCh-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_TrCHInformation_Curr, rbInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PTM_RBInformation_CList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rbInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_TrCHInformation_Curr, msch_ConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MSCH_ConfigurationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msch-ConfigurationInfo"
		},
};
static int asn_MAP_MBMS_TrCHInformation_Curr_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_MBMS_TrCHInformation_Curr_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_TrCHInformation_Curr_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transpCh-Info at 22429 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rbInformation at 22430 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* msch-ConfigurationInfo at 22431 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_TrCHInformation_Curr_specs_1 = {
	sizeof(struct MBMS_TrCHInformation_Curr),
	offsetof(struct MBMS_TrCHInformation_Curr, _asn_ctx),
	asn_MAP_MBMS_TrCHInformation_Curr_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_TrCHInformation_Curr_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_TrCHInformation_Curr = {
	"MBMS-TrCHInformation-Curr",
	"MBMS-TrCHInformation-Curr",
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
	asn_DEF_MBMS_TrCHInformation_Curr_tags_1,
	sizeof(asn_DEF_MBMS_TrCHInformation_Curr_tags_1)
		/sizeof(asn_DEF_MBMS_TrCHInformation_Curr_tags_1[0]), /* 1 */
	asn_DEF_MBMS_TrCHInformation_Curr_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_TrCHInformation_Curr_tags_1)
		/sizeof(asn_DEF_MBMS_TrCHInformation_Curr_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_TrCHInformation_Curr_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_TrCHInformation_Curr_specs_1	/* Additional specs */
};

