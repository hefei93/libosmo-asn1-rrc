/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MeasurementControl_H_
#define	_MeasurementControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementControl-r3-IEs.h"
#include "MeasurementControl-v390ext.h"
#include "MeasurementControl-v3a0ext.h"
#include <BIT_STRING.h>
#include "MeasurementControl-v590ext-IEs.h"
#include "MeasurementControl-v5b0ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "MeasurementControl-r4-IEs.h"
#include "MeasurementControl-r6-IEs.h"
#include "MeasurementControl-v6a0ext-IEs.h"
#include "MeasurementControl-r7-IEs.h"
#include "MeasurementControl-v7b0ext-IEs.h"
#include "MeasurementControl-r8-IEs.h"
#include "MeasurementControl-v8a0ext-IEs.h"
#include "MeasurementControl-vb50ext-IEs.h"
#include "MeasurementControl-r9-IEs.h"
#include "MeasurementControl-v970ext-IEs.h"
#include "MeasurementControl-r10-IEs.h"
#include "MeasurementControl-vaa0ext-IEs.h"
#include "MeasurementControl-vab0ext-IEs.h"
#include "MeasurementControl-r11-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementControl_PR {
	MeasurementControl_PR_NOTHING,	/* No components present */
	MeasurementControl_PR_r3,
	MeasurementControl_PR_later_than_r3
} MeasurementControl_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions_PR_r4,
	MeasurementControl__later_than_r3__criticalExtensions_PR_later_than_r4
} MeasurementControl__later_than_r3__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR_r6,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR_r7,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR_r8,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r9,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r10,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r11,
	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;

/* MeasurementControl */
typedef struct MeasurementControl {
	MeasurementControl_PR present;
	union MeasurementControl_u {
		struct MeasurementControl__r3 {
			MeasurementControl_r3_IEs_t	 measurementControl_r3;
			struct MeasurementControl__r3__v390nonCriticalExtensions {
				MeasurementControl_v390ext_t	 measurementControl_v390ext;
				struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions {
					MeasurementControl_v3a0ext_t	 measurementControl_v3a0ext;
					struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions__laterNonCriticalExtensions {
						BIT_STRING_t	*measurementControl_r3_add_ext	/* OPTIONAL */;
						struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions {
							struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions {
								MeasurementControl_v590ext_IEs_t	 measurementControl_v590ext;
								struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5b0NonCriticalExtensions {
									MeasurementControl_v5b0ext_IEs_t	 measurementControl_v5b0ext;
									struct MeasurementControl__r3__v390nonCriticalExtensions__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5b0NonCriticalExtensions__nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v590NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4b0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *laterNonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v3a0NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v390nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct MeasurementControl__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct MeasurementControl__later_than_r3__criticalExtensions {
				MeasurementControl__later_than_r3__criticalExtensions_PR present;
				union MeasurementControl__later_than_r3__criticalExtensions_u {
					struct MeasurementControl__later_than_r3__criticalExtensions__r4 {
						MeasurementControl_r4_IEs_t	 measurementControl_r4;
						struct MeasurementControl__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions {
							BIT_STRING_t	*measurementControl_r4_add_ext	/* OPTIONAL */;
							struct MeasurementControl__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions {
								MeasurementControl_v590ext_IEs_t	 measurementControl_v590ext;
								struct MeasurementControl__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5b0NonCriticalExtensions {
									MeasurementControl_v5b0ext_IEs_t	 measurementControl_v5b0ext;
									struct MeasurementControl__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5b0NonCriticalExtensions__nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v590NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4 {
						RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier_MSP;
						struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions {
							MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_PR present;
							union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_u {
								struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__r6 {
									MeasurementControl_r6_IEs_t	 measurementControl_r6;
									struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__r6__v6a0NonCriticalExtensions {
										MeasurementControl_v6a0ext_IEs_t	 measurementControl_v6a0ext;
										struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__r6__v6a0NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v6a0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} r6;
								struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions {
									MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_PR present;
									union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions_u {
										struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__r7 {
											MeasurementControl_r7_IEs_t	 measurementControl_r7;
											BIT_STRING_t	*measurementControl_r7_add_ext	/* OPTIONAL */;
											struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__r7__v7b0NonCriticalExtensions {
												MeasurementControl_v7b0ext_IEs_t	 measurementControl_v7b0ext;
												struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__r7__v7b0NonCriticalExtensions__nonCriticalExtensions {
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *nonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v7b0NonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} r7;
										struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions {
											MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
											union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions_u {
												struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__r8 {
													MeasurementControl_r8_IEs_t	 measurementControl_r8;
													BIT_STRING_t	*measurementControl_r8_add_ext	/* OPTIONAL */;
													struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__r8__v8a0NonCriticalExtensions {
														MeasurementControl_v8a0ext_IEs_t	 measurementControl_v8a0ext;
														struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__r8__v8a0NonCriticalExtensions__vb50NonCriticalExtensions {
															MeasurementControl_vb50ext_IEs_t	 measurementControl_vb50ext;
															struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__r8__v8a0NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *nonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *vb50NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v8a0NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} r8;
												struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
													MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
													union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
														struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9 {
															MeasurementControl_r9_IEs_t	 measurementControl_r9;
															BIT_STRING_t	*measurementControl_r9_add_ext	/* OPTIONAL */;
															struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v970NonCriticalExtensions {
																MeasurementControl_v970ext_IEs_t	 measurementControl_v970ext;
																struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v970NonCriticalExtensions__vb50NonCriticalExtensions {
																	MeasurementControl_vb50ext_IEs_t	 measurementControl_vb50ext;
																	struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v970NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *nonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *vb50NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v970NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} r9;
														struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
															MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
															union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10 {
																	MeasurementControl_r10_IEs_t	 measurementControl_r10;
																	BIT_STRING_t	*measurementControl_r10_add_ext	/* OPTIONAL */;
																	struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__vaa0NonCriticalExtensions {
																		MeasurementControl_vaa0ext_IEs_t	 measurementControl_vaa0ext;
																		struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__vaa0NonCriticalExtensions__vab0NonCriticalExtensions {
																			MeasurementControl_vab0ext_IEs_t	 measurementControl_vab0ext;
																			struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__vaa0NonCriticalExtensions__vab0NonCriticalExtensions__vb50NonCriticalExtensions {
																				MeasurementControl_vb50ext_IEs_t	 measurementControl_vb50ext;
																				struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__vaa0NonCriticalExtensions__vab0NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
																					
																					/* Context for parsing across buffer boundaries */
																					asn_struct_ctx_t _asn_ctx;
																				} *nonCriticalExtensions;
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *vb50NonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *vab0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *vaa0NonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} r10;
																struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																	MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																	union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																		struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11 {
																			MeasurementControl_r11_IEs_t	 measurementControl_r11;
																			BIT_STRING_t	*measurementControl_r11_add_ext	/* OPTIONAL */;
																			struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11__nonCriticalExtensions {
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *nonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} r11;
																		struct MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} criticalExtensions;
																	} choice;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} criticalExtensions;
															} choice;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} criticalExtensions;
													} choice;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} criticalExtensions;
											} choice;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} criticalExtensions;
									} choice;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} criticalExtensions;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} criticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} later_than_r4;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementControl_H_ */
#include <asn_internal.h>
