/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/port/PORT_SYSTEM.tbl.ltl
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
#include <bcmltd/bcmltd_internal.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_port_system_t_fields[] = {
    {
        .name  = bcmltd_strpool_port_system_id,  /* PORT_SYSTEM_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "PORT_SYSTEM index as specified in the PORT_MODBASE logical table.",
    },
    {
        .name  = bcmltd_strpool_modport,  /* MODPORT */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Port ID relative to the module ID specified in\n the PORT_MODBASE logical table.\n",
    },
    {
        .name  = bcmltd_strpool_system_port_type,  /* SYSTEM_PORT_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Type of the system port.",
    },
    {
        .name  = bcmltd_strpool_trunk_id,  /* TRUNK_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Trunk ID.",
    },
    {
        .name  = bcmltd_strpool_fp_ing_class_id,  /* FP_ING_CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Ingress FP key class ID.",
    },
    {
        .name  = bcmltd_strpool_vrf_id,  /* VRF_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "VRF ID.",
    },
    {
        .name  = bcmltd_strpool_fp_vlan_port_grp,  /* FP_VLAN_PORT_GRP */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "VLAN FP key port group ID.\n Applicable only if USE_TABLE_FP_VLAN_PORT_GRP\n in the PORT_FP logical table is disabled.\n",
    },
    {
        .name  = bcmltd_strpool_vlan_xlate_port_grp,  /* VLAN_XLATE_PORT_GRP */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Ingress VLAN translation key port group.",
    },
    {
        .name  = bcmltd_strpool_outer_vlan_assignment_vlan_range_id,  /* OUTER_VLAN_ASSIGNMENT_VLAN_RANGE_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "VLAN_ASSIGNMENT_VLAN_RANGE logical table index for outer VLAN ID.",
    },
    {
        .name  = bcmltd_strpool_inner_vlan_assingment_vlan_range_id,  /* INNER_VLAN_ASSINGMENT_VLAN_RANGE_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "VLAN_ASSIGNMENT_VLAN_RANGE logical table index for inner VLAN ID.",
    },
    {
        .name  = bcmltd_strpool_l3_iif_id,  /* L3_IIF_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "L3_IIF logical table index.\n Applicable if OPERATING_MODE in the logical table PORT is L3_IIF.\n",
    },
    {
        .name  = bcmltd_strpool_l2_fwd_ipmcv6,  /* L2_FWD_IPMCV6 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L2-only forwarding of IPMCv6 packets.",
    },
    {
        .name  = bcmltd_strpool_l2_fwd_ipmcv4,  /* L2_FWD_IPMCV4 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L2-only forwarding of IPMCv4 packets.",
    },
    {
        .name  = bcmltd_strpool_skip_vlan_check,  /* SKIP_VLAN_CHECK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable skipping STP and VLAN membership check.",
    },
    {
        .name  = bcmltd_strpool_blocked_egr_ports,  /* BLOCKED_EGR_PORTS */
        .flags = 0,
        .width = 256,
        .depth = 0,
        .desc = "Bitmap of egress ports which are blocked\n for ingress traffic from this port.\n",
    },
    {
        .name  = bcmltd_strpool_ecn_cng_to_mpls_exp_id,  /* ECN_CNG_TO_MPLS_EXP_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "ECN_CNG_TO_MPLS_EXP logical table index.",
    },
    {
        .name  = bcmltd_strpool_ecn_cng_to_mpls_exp_priority,  /* ECN_CNG_TO_MPLS_EXP_PRIORITY */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Specifies priority for ECN_CNG_TO_MPLS_EXP_ID from\n this table. Priority is relative to the associated\n originating or transit MPLS tunnel.\n",
    },
    {
        .name  = bcmltd_strpool_ecn_ip_to_mpls_exp_id,  /* ECN_IP_TO_MPLS_EXP_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "ECN_IP_TO_MPLS_EXP_NON_RESPONSIVE logical table index\n for non-responsive protocols or ECN_IP_TO_MPLS_EXP_RESPONSIVE\n logical table index for responsive protocols.\n",
    },
    {
        .name  = bcmltd_strpool_ecn_ip_to_mpls_exp_priority,  /* ECN_IP_TO_MPLS_EXP_PRIORITY */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Specifies priority for ECN_IP_TO_MPLS_EXP_ID from this\n table. Priority is relative to the associated\n originating or transit MPLS tunnel.\n",
    },
};
const bcmltd_table_rep_t bcmltd_port_system_t = {
    .name = bcmltd_strpool_port_system, /* PORT_SYSTEM */
    .flags = 0,
    .fields = 19,
    .field = bcmltd_port_system_t_fields,
    .desc = "The PORT_SYSTEM table specifies the system port properties\n and functionality.\n",
};
