/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/fp/FP_EGR_GRP_TEMPLATE.tbl.ltl
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
static const bcmltd_field_rep_t bcmltd_fp_egr_grp_template_t_fields[] = {
    {
        .name  = bcmltd_strpool_fp_egr_grp_template_id,  /* FP_EGR_GRP_TEMPLATE_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_pipe,  /* PIPE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "XGS Pipeline Number.",
    },
    {
        .name  = bcmltd_strpool_entry_priority,  /* ENTRY_PRIORITY */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "hits rules from different groups.\n",
    },
    {
        .name  = bcmltd_strpool_mode,  /* MODE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "This can be set to one of the following\n strings.\n        L2_SINGLE_WIDE\n        L3_SINGLE_WIDE\n        L3_DOUBLE_WIDE\n        L3_ANY_SINGLE_WIDE\n        L3_ANY_DOUBLE_WIDE\n        L3_ALT_DOUBLE_WIDE\n",
    },
    {
        .name  = bcmltd_strpool_port_pkt_type,  /* PORT_PKT_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "strings.\n        PORT_ANY_PACKET_IPV4\n        PORT_ANY_PACKET_IPV6\n        PORT_ANY_PACKET_IP\n        PORT_HIGIG_PACKET_ANY\n        PORT_LOOPBACK_PACKET_ANY\n        PORT_FRONT_PACKET_ANY\n        PORT_ANY_PACKET_NONIP\n        PORT_ANY_PACKET_ANY\n",
    },
    {
        .name  = bcmltd_strpool_virtual_slice_grp,  /* VIRTUAL_SLICE_GRP */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Field groups created with same virtual slice group\n will be under one virtual group set.\n Policy resolution among groups in a virtual group set\n will result in policy (actions, counter and meter) belonging to\n higher priority group in the virtual group set.\n Policy resolution among different virtual group sets\n will result in combined counter, non-conflicting actions\n from all virtual group sets and for conflicting actions group\n with the highest priority will take precedence across\n all such virtual group sets.\n Allowed values [0 to number of slices-1].\n",
    },
    {
        .name  = bcmltd_strpool_qual_bytes_after_l2header,  /* QUAL_BYTES_AFTER_L2HEADER */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Bytes after L2 header.",
    },
    {
        .name  = bcmltd_strpool_qual_color,  /* QUAL_COLOR */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet color.",
    },
    {
        .name  = bcmltd_strpool_qual_cpu_cos,  /* QUAL_CPU_COS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet CPU Cos queue value.",
    },
    {
        .name  = bcmltd_strpool_qual_drop_pkt,  /* QUAL_DROP_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet is flagged to be dropped.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip4,  /* QUAL_DST_IP4 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Destination IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6,  /* QUAL_DST_IP6 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Destination IPV6 Address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_high,  /* QUAL_DST_IP6_HIGH */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Destination IPv6 Address (High/Upper 64 bits).",
    },
    {
        .name  = bcmltd_strpool_qual_dst_mac,  /* QUAL_DST_MAC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Destination MAC address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp_valid,  /* QUAL_DST_VP_VALID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier to check if destination VP valid.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp,  /* QUAL_DST_VP */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "DVP.",
    },
    {
        .name  = bcmltd_strpool_qual_egr_l3_intf_class_id,  /* QUAL_EGR_L3_INTF_CLASS_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Class ID assigned by Egress interface.",
    },
    {
        .name  = bcmltd_strpool_qual_egr_nhop_class_id,  /* QUAL_EGR_NHOP_CLASS_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Class ID assigned by next hop.",
    },
    {
        .name  = bcmltd_strpool_qual_egr_dvp_class_id,  /* QUAL_EGR_DVP_CLASS_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Class ID assigned by DVP.",
    },
    {
        .name  = bcmltd_strpool_qual_ethertype,  /* QUAL_ETHERTYPE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Ethertype.",
    },
    {
        .name  = bcmltd_strpool_qual_fwd_type,  /* QUAL_FWD_TYPE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet forwarding type.",
    },
    {
        .name  = bcmltd_strpool_qual_fwd_vlan_id,  /* QUAL_FWD_VLAN_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Forwarding Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_icmp_type_code,  /* QUAL_ICMP_TYPE_CODE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "ICMP type code.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_cfi,  /* QUAL_INNER_VLAN_CFI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Inner Vlan CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_id,  /* QUAL_INNER_VLAN_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Inner Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_pri,  /* QUAL_INNER_VLAN_PRI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Inner Vlan Priority.",
    },
    {
        .name  = bcmltd_strpool_qual_inport,  /* QUAL_INPORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Single Input Port.",
    },
    {
        .name  = bcmltd_strpool_qual_int_cn,  /* QUAL_INT_CN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Internal Congestion.",
    },
    {
        .name  = bcmltd_strpool_qual_int_pri,  /* QUAL_INT_PRI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Internal Priority of Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_proto,  /* QUAL_IP_FIRST_EH_PROTO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Next header field in first header extension header.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_subcode,  /* QUAL_IP_FIRST_EH_SUBCODE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "First byte after the extension header length field.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_mf,  /* QUAL_IP_FLAGS_MF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Flags in IP Header - More Fragment.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_protocol,  /* QUAL_IP_PROTOCOL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "IP protocol.",
    },
    {
        .name  = bcmltd_strpool_qual_l2_format,  /* QUAL_L2_FORMAT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "L2 packet format",
    },
    {
        .name  = bcmltd_strpool_qual_fp_ing_classid_type,  /* QUAL_FP_ING_CLASSID_TYPE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "IFP Class Id type",
    },
    {
        .name  = bcmltd_strpool_qual_fp_ing_classid,  /* QUAL_FP_ING_CLASSID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Class Id assigned by the Ingress Field Processor.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_routable_pkt,  /* QUAL_L3_ROUTABLE_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet is L3 Routable Status.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_type,  /* QUAL_IP_TYPE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "IP Type.",
    },
    {
        .name  = bcmltd_strpool_qual_l4dst_port,  /* QUAL_L4DST_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "L4 Header Destination Port.",
    },
    {
        .name  = bcmltd_strpool_qual_l4src_port,  /* QUAL_L4SRC_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "L4 header Source Port.",
    },
    {
        .name  = bcmltd_strpool_qual_l4_pkt,  /* QUAL_L4_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "L4 Packet (has Valid L4 Source and Destination Port).",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_color,  /* QUAL_LOOPBACK_COLOR */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "status of the packet measured by\n Ingress Module.This can be\n          Green/Yellow/Red.",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_cpu_msqrd_pkt_prof,  /* QUAL_LOOPBACK_CPU_MSQRD_PKT_PROF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Pipeline.",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_pkt_processing_port,  /* QUAL_LOOPBACK_PKT_PROCESSING_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "be a front panel (Ethernet) port.",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_queue,  /* QUAL_LOOPBACK_QUEUE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "on the internal loopback port.",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_traffic_class,  /* QUAL_LOOPBACK_TRAFFIC_CLASS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "forwarding the packet through Fabric.",
    },
    {
        .name  = bcmltd_strpool_qual_loopback_type,  /* QUAL_LOOPBACK_TYPE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Loopback type.",
    },
    {
        .name  = bcmltd_strpool_qual_mirr_copy,  /* QUAL_MIRR_COPY */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "MIRR_COPY.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_cfi,  /* QUAL_OUTER_VLAN_CFI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Outer Vlan CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_id,  /* QUAL_OUTER_VLAN_ID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Outer Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_pri,  /* QUAL_OUTER_VLAN_PRI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Outer Vlan Priority.",
    },
    {
        .name  = bcmltd_strpool_qual_outport,  /* QUAL_OUTPORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Single Out Port.",
    },
    {
        .name  = bcmltd_strpool_qual_pkt_is_visible,  /* QUAL_PKT_IS_VISIBLE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "packet processing results for this\n          packet.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip4,  /* QUAL_SRC_IP4 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Source IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6,  /* QUAL_SRC_IP6 */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Source IPv6 Address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_high,  /* QUAL_SRC_IP6_HIGH */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Source IPv6 Address (High/Upper 64 bits).",
    },
    {
        .name  = bcmltd_strpool_qual_src_mac,  /* QUAL_SRC_MAC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Source MAC address.",
    },
    {
        .name  = bcmltd_strpool_qual_system_port_class,  /* QUAL_SYSTEM_PORT_CLASS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Class Id from SOURCE_TRUNK_MAP.",
    },
    {
        .name  = bcmltd_strpool_qual_tcp_control_flags,  /* QUAL_TCP_CONTROL_FLAGS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "TCP control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_tos,  /* QUAL_TOS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_ttl,  /* QUAL_TTL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet TTL.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_inner_present,  /* QUAL_VLAN_INNER_PRESENT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet Inner Vlan Tag Status.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_outer_present,  /* QUAL_VLAN_OUTER_PRESENT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Packet Outer Vlan Tag Status.",
    },
    {
        .name  = bcmltd_strpool_qual_vpn,  /* QUAL_VPN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "VPN.",
    },
    {
        .name  = bcmltd_strpool_qual_vrf,  /* QUAL_VRF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "VRF.",
    },
    {
        .name  = bcmltd_strpool_qual_vxlt_lookup_hit,  /* QUAL_VXLT_LOOKUP_HIT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "First/Second/All/None lookup Hit for Vlan Translation",
    },
};
const bcmltd_table_rep_t bcmltd_fp_egr_grp_template_t = {
    .name = bcmltd_strpool_fp_egr_grp_template, /* FP_EGR_GRP_TEMPLATE */
    .flags = 0,
    .fields = 66,
    .field = bcmltd_fp_egr_grp_template_t_fields,
    .desc = "\n Each entry will have options to enable\n group priority, pipe instance and group mode.\n\n Configures the EFP hardware appropriate for the given elements in a entry.\n\n Entry cannot be deleted if rules are created in the group.\n\n Deleting the entry deletes the group.\n\n If no rules are created in the group, all fields in the entry are\n read-write.\n\n If rules are created in the group, all enabled qualifiers, pipe and group\n mode in the row are read-only. All disabled qualifiers, priority and\n in a row are read-write.\n",
};
