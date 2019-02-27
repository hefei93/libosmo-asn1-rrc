/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "Reference-Beta-16QAM.h"

static int
memb_reference_Code_Rate_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10)) {
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
memb_reference_Beta_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -15 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_reference_Code_Rate_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_reference_Beta_constr_3 = {
	{ APC_CONSTRAINED,	 5,  5, -15,  16 }	/* (-15..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Reference_Beta_16QAM_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Reference_Beta_16QAM, reference_Code_Rate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_reference_Code_Rate_constraint_1,
		&asn_PER_memb_reference_Code_Rate_constr_2,
		0,
		"reference-Code-Rate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Reference_Beta_16QAM, reference_Beta),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_reference_Beta_constraint_1,
		&asn_PER_memb_reference_Beta_constr_3,
		0,
		"reference-Beta"
		},
};
static ber_tlv_tag_t asn_DEF_Reference_Beta_16QAM_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Reference_Beta_16QAM_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reference-Code-Rate at 10657 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reference-Beta at 10658 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Reference_Beta_16QAM_specs_1 = {
	sizeof(struct Reference_Beta_16QAM),
	offsetof(struct Reference_Beta_16QAM, _asn_ctx),
	asn_MAP_Reference_Beta_16QAM_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Reference_Beta_16QAM = {
	"Reference-Beta-16QAM",
	"Reference-Beta-16QAM",
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
	asn_DEF_Reference_Beta_16QAM_tags_1,
	sizeof(asn_DEF_Reference_Beta_16QAM_tags_1)
		/sizeof(asn_DEF_Reference_Beta_16QAM_tags_1[0]), /* 1 */
	asn_DEF_Reference_Beta_16QAM_tags_1,	/* Same as above */
	sizeof(asn_DEF_Reference_Beta_16QAM_tags_1)
		/sizeof(asn_DEF_Reference_Beta_16QAM_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Reference_Beta_16QAM_1,
	2,	/* Elements count */
	&asn_SPC_Reference_Beta_16QAM_specs_1	/* Additional specs */
};

