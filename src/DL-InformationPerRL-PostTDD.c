/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "DL-InformationPerRL-PostTDD.h"

static asn_TYPE_member_t asn_MBR_DL_InformationPerRL_PostTDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerRL_PostTDD, primaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_InfoPost,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerRL_PostTDD, dl_DPCH_InfoPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DPCH_InfoPerRL_PostTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DPCH-InfoPerRL"
		},
};
static ber_tlv_tag_t asn_DEF_DL_InformationPerRL_PostTDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_InformationPerRL_PostTDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* primaryCCPCH-Info at 7571 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-DPCH-InfoPerRL at 7573 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_InformationPerRL_PostTDD_specs_1 = {
	sizeof(struct DL_InformationPerRL_PostTDD),
	offsetof(struct DL_InformationPerRL_PostTDD, _asn_ctx),
	asn_MAP_DL_InformationPerRL_PostTDD_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL_PostTDD = {
	"DL-InformationPerRL-PostTDD",
	"DL-InformationPerRL-PostTDD",
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
	asn_DEF_DL_InformationPerRL_PostTDD_tags_1,
	sizeof(asn_DEF_DL_InformationPerRL_PostTDD_tags_1)
		/sizeof(asn_DEF_DL_InformationPerRL_PostTDD_tags_1[0]), /* 1 */
	asn_DEF_DL_InformationPerRL_PostTDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_InformationPerRL_PostTDD_tags_1)
		/sizeof(asn_DEF_DL_InformationPerRL_PostTDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_InformationPerRL_PostTDD_1,
	2,	/* Elements count */
	&asn_SPC_DL_InformationPerRL_PostTDD_specs_1	/* Additional specs */
};

