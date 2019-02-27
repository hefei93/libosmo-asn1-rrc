/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "PhysicalChannelReconfiguration-r8-IEs.h"

static int
responseToChangeOfUE_Capability_18_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
responseToChangeOfUE_Capability_18_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
responseToChangeOfUE_Capability_18_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
responseToChangeOfUE_Capability_18_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
responseToChangeOfUE_Capability_18_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
responseToChangeOfUE_Capability_18_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
responseToChangeOfUE_Capability_18_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
responseToChangeOfUE_Capability_18_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
responseToChangeOfUE_Capability_18_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	responseToChangeOfUE_Capability_18_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_responseToChangeOfUE_Capability_constr_18 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_responseToChangeOfUE_Capability_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_responseToChangeOfUE_Capability_enum2value_18[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_responseToChangeOfUE_Capability_specs_18 = {
	asn_MAP_responseToChangeOfUE_Capability_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_responseToChangeOfUE_Capability_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_responseToChangeOfUE_Capability_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_responseToChangeOfUE_Capability_18 = {
	"responseToChangeOfUE-Capability",
	"responseToChangeOfUE-Capability",
	responseToChangeOfUE_Capability_18_free,
	responseToChangeOfUE_Capability_18_print,
	responseToChangeOfUE_Capability_18_constraint,
	responseToChangeOfUE_Capability_18_decode_ber,
	responseToChangeOfUE_Capability_18_encode_der,
	responseToChangeOfUE_Capability_18_decode_xer,
	responseToChangeOfUE_Capability_18_encode_xer,
	responseToChangeOfUE_Capability_18_decode_uper,
	responseToChangeOfUE_Capability_18_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_responseToChangeOfUE_Capability_tags_18,
	sizeof(asn_DEF_responseToChangeOfUE_Capability_tags_18)
		/sizeof(asn_DEF_responseToChangeOfUE_Capability_tags_18[0]) - 1, /* 1 */
	asn_DEF_responseToChangeOfUE_Capability_tags_18,	/* Same as above */
	sizeof(asn_DEF_responseToChangeOfUE_Capability_tags_18)
		/sizeof(asn_DEF_responseToChangeOfUE_Capability_tags_18[0]), /* 2 */
	&asn_PER_type_responseToChangeOfUE_Capability_constr_18,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_responseToChangeOfUE_Capability_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelReconfiguration_r8_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 9, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, delayRestrictionFlag),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DelayRestrictionFlag,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"delayRestrictionFlag"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, new_DSCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSCH_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-DSCH-RNTI"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, newSecondary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newSecondary-E-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_POINTER, 24, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, ueMobilityStateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_High_MobilityDetected,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueMobilityStateIndicator"
		},
	{ ATF_POINTER, 23, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 22, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 21, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 20, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, supportForChangeOfUE_Capability),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForChangeOfUE-Capability"
		},
	{ ATF_POINTER, 19, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, responseToChangeOfUE_Capability),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_responseToChangeOfUE_Capability_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"responseToChangeOfUE-Capability"
		},
	{ ATF_POINTER, 18, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 17, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, harqInfo),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HARQ_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"harqInfo"
		},
	{ ATF_POINTER, 16, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 15, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, multi_frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Multi_frequencyInfo_LCR_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multi-frequencyInfo"
		},
	{ ATF_POINTER, 14, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dtx_drx_TimingInfo),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DTX_DRX_TimingInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dtx-drx-TimingInfo"
		},
	{ ATF_POINTER, 13, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dtx_drx_Info),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DTX_DRX_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dtx-drx-Info"
		},
	{ ATF_POINTER, 12, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, hs_scch_LessInfo),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SCCH_LessInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-scch-LessInfo"
		},
	{ ATF_POINTER, 11, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, mimoParameters),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_Parameters_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mimoParameters"
		},
	{ ATF_POINTER, 10, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 9, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, ul_EDCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_EDCH_Information_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-EDCH-Information"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dl_HSPDSCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-Information"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, dl_SecondaryCellInfoFDD),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_SecondaryCellInfoFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-SecondaryCellInfoFDD"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, controlChannelDRXInfo_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ControlChannelDRXInfo_TDD128_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"controlChannelDRXInfo-TDD128"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, sps_Information_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Information_TDD128_r8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sps-Information-TDD128"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelReconfiguration_r8_IEs, mbms_PL_ServiceRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PL_ServiceRestrictInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-PL-ServiceRestrictInfo"
		},
};
static int asn_MAP_PhysicalChannelReconfiguration_r8_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34 };
static ber_tlv_tag_t asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelReconfiguration_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionModeInfo at 4738 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringModeInfo at 4739 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime at 4740 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* delayRestrictionFlag at 4741 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-U-RNTI at 4742 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* new-C-RNTI at 4743 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* new-DSCH-RNTI at 4746 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* new-H-RNTI at 4747 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* newPrimary-E-RNTI at 4748 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* newSecondary-E-RNTI at 4749 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* rrc-StateIndicator at 4750 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ueMobilityStateIndicator at 4751 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* utran-DRX-CycleLengthCoeff at 4752 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* cn-InformationInfo at 4754 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ura-Identity at 4756 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* supportForChangeOfUE-Capability at 4757 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* responseToChangeOfUE-Capability at 4758 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* dl-CounterSynchronisationInfo at 4760 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* harqInfo at 4762 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* frequencyInfo at 4764 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* multi-frequencyInfo at 4765 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* dtx-drx-TimingInfo at 4766 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* dtx-drx-Info at 4767 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* hs-scch-LessInfo at 4768 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* mimoParameters at 4769 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* maxAllowedUL-TX-Power at 4770 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* ul-DPCH-Info at 4771 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* ul-EDCH-Information at 4772 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* dl-HSPDSCH-Information at 4773 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* dl-CommonInformation at 4774 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* dl-InformationPerRL-List at 4775 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* dl-SecondaryCellInfoFDD at 4776 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* controlChannelDRXInfo-TDD128 at 4777 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* sps-Information-TDD128 at 4778 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 } /* mbms-PL-ServiceRestrictInfo at 4780 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelReconfiguration_r8_IEs_specs_1 = {
	sizeof(struct PhysicalChannelReconfiguration_r8_IEs),
	offsetof(struct PhysicalChannelReconfiguration_r8_IEs, _asn_ctx),
	asn_MAP_PhysicalChannelReconfiguration_r8_IEs_tag2el_1,
	35,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelReconfiguration_r8_IEs_oms_1,	/* Optional members */
	34, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfiguration_r8_IEs = {
	"PhysicalChannelReconfiguration-r8-IEs",
	"PhysicalChannelReconfiguration-r8-IEs",
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
	asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1,
	sizeof(asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_PhysicalChannelReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelReconfiguration_r8_IEs_1,
	35,	/* Elements count */
	&asn_SPC_PhysicalChannelReconfiguration_r8_IEs_specs_1	/* Additional specs */
};

