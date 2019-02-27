/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "CellUpdateConfirm-v4b0ext-IEs.h"

static asn_TYPE_member_t asn_MBR_CellUpdateConfirm_v4b0ext_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CellUpdateConfirm_v4b0ext_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSDT_UL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdateConfirm_v4b0ext_IEs, cell_id_PerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity_PerRL_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cell-id-PerRL-List"
		},
};
static int asn_MAP_CellUpdateConfirm_v4b0ext_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellUpdateConfirm_v4b0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy at 1542 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cell-id-PerRL-List at 1545 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellUpdateConfirm_v4b0ext_IEs_specs_1 = {
	sizeof(struct CellUpdateConfirm_v4b0ext_IEs),
	offsetof(struct CellUpdateConfirm_v4b0ext_IEs, _asn_ctx),
	asn_MAP_CellUpdateConfirm_v4b0ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CellUpdateConfirm_v4b0ext_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellUpdateConfirm_v4b0ext_IEs = {
	"CellUpdateConfirm-v4b0ext-IEs",
	"CellUpdateConfirm-v4b0ext-IEs",
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
	asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1,
	sizeof(asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_CellUpdateConfirm_v4b0ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellUpdateConfirm_v4b0ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_CellUpdateConfirm_v4b0ext_IEs_specs_1	/* Additional specs */
};

