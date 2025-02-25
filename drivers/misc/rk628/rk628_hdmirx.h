/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 Rockchip Electronics Co. Ltd.
 *
 * Author: Chen Shunqing <csq@rock-chips.com>
 */

#ifndef HDMIRX_H
#define HDMIRX_H

#include "rk628.h"

#define HDMIRX_REG(x)		((x) + 0x30000)

/* --------- EDID and HDCP KEY ------- */
#define EDID_BASE				0x000a0000
#define HDCP_KEY_BASE				0x000a8000
#define KEY_MAX_REGISTER			0x000a8490

#define HDMI_RX_HDMI_SETUP_CTRL			HDMIRX_REG(0x0000)
#define HOT_PLUG_DETECT_MASK			BIT(0)
#define HOT_PLUG_DETECT(x)			UPDATE(x, 0, 0)
#define HDMI_RX_HDMI_OVR_CTRL			HDMIRX_REG(0x0004)
#define HDMI_RX_HDMI_TIMER_CTRL			HDMIRX_REG(0x0008)
#define HDMI_RX_HDMI_RES_OVR			HDMIRX_REG(0x0010)
#define HDMI_RX_HDMI_RES_STS			HDMIRX_REG(0x0014)
#define HDMI_RX_HDMI_PLL_CTRL			HDMIRX_REG(0x0018)
#define HDMI_RX_HDMI_PLL_FRQSET1		HDMIRX_REG(0x001c)
#define HDMI_RX_HDMI_PLL_FRQSET2		HDMIRX_REG(0x0020)
#define HDMI_RX_HDMI_PLL_PAR1			HDMIRX_REG(0x0024)
#define HDMI_RX_HDMI_PLL_PAR2			HDMIRX_REG(0x0028)
#define HDMI_RX_HDMI_PLL_PAR3			HDMIRX_REG(0x002c)
#define HDMI_RX_HDMI_PLL_LCK_STS		HDMIRX_REG(0x0030)
#define HDMI_RX_HDMI_CLK_CTRL			HDMIRX_REG(0x0034)
#define HDMI_RX_HDMI_PCB_CTRL			HDMIRX_REG(0x0038)
#define SEL_PIXCLKSRC_MASK			GENMASK(19, 18)
#define SEL_PIXCLKSRC(x)			UPDATE(x, 19, 18)
#define HDMI_RX_HDMI_PHS_CTR			HDMIRX_REG(0x0040)
#define HDMI_RX_HDMI_PHS_USED			HDMIRX_REG(0x0044)
#define HDMI_RX_HDMI_MISC_CTRL			HDMIRX_REG(0x0048)
#define HDMI_RX_HDMI_EQOFF_CTRL			HDMIRX_REG(0x004c)
#define HDMI_RX_HDMI_EQGAIN_CTRL		HDMIRX_REG(0x0050)
#define HDMI_RX_HDMI_EQCAL_STS			HDMIRX_REG(0x0054)
#define HDMI_RX_HDMI_EQRESULT			HDMIRX_REG(0x0058)
#define HDMI_RX_HDMI_EQ_MEAS_CTRL		HDMIRX_REG(0x005c)
#define HDMI_RX_HDMI_WR_CFG			HDMIRX_REG(0x0060)
#define HDMI_RX_HDMI_CTRL			HDMIRX_REG(0x0064)
#define HDMI_RX_HDMI_MODE_RECOVER		HDMIRX_REG(0x0080)
#define PREAMBLE_CNT_LIMIT_MASK			GENMASK(31, 27)
#define PREAMBLE_CNT_LIMIT(x)			UPDATE(x, 31, 27)
#define OESSCTL3_THR_MASK			GENMASK(20, 19)
#define OESSCTL3_THR(x)				UPDATE(x, 20, 19)
#define SPIKE_FILTER_EN_MASK			BIT(18)
#define SPIKE_FILTER_EN(x)			UPDATE(x, 18, 18)
#define DVI_MODE_HYST_MASK			GENMASK(17, 13)
#define DVI_MODE_HYST(x)			UPDATE(x, 17, 13)
#define HDMI_MODE_HYST_MASK			GENMASK(12, 8)
#define HDMI_MODE_HYST(x)			UPDATE(x, 12, 8)
#define HDMI_MODE_MASK				GENMASK(7, 6)
#define HDMI_MODE(x)				UPDATE(x, 7, 6)
#define GB_DET_MASK				GENMASK(5, 4)
#define GB_DET(x)				UPDATE(x, 5, 4)
#define EESS_OESS_MASK				GENMASK(3, 2)
#define EESS_OESS(x)				UPDATE(x, 3, 2)
#define SEL_CTL01_MASK				GENMASK(1, 0)
#define SEL_CTL01(x)				UPDATE(x, 1, 0)
#define HDMI_RX_HDMI_ERROR_PROTECT		HDMIRX_REG(0x0084)
#define RG_BLOCK_OFF_MASK			BIT(20)
#define RG_BLOCK_OFF(x)				UPDATE(x, 20, 20)
#define BLOCK_OFF_MASK				BIT(19)
#define BLOCK_OFF(x)				UPDATE(x, 19, 19)
#define VALID_MODE_MASK				GENMASK(18, 16)
#define VALID_MODE(x)				UPDATE(x, 18, 16)
#define CTRL_FILT_SEN_MASK			GENMASK(13, 12)
#define CTRL_FILT_SEN(x)			UPDATE(x, 13, 12)
#define VS_FILT_SENS_MASK			GENMASK(11, 10)
#define VS_FILT_SENS(x)				UPDATE(x, 11, 10)
#define HS_FILT_SENS_MASK			GENMASK(9, 8)
#define HS_FILT_SENS(x)				UPDATE(x, 9, 8)
#define DE_MEASURE_MODE_MASK			GENMASK(7, 6)
#define DE_MEASURE_MODE(x)			UPDATE(x, 7, 6)
#define DE_REGEN_MASK				BIT(5)
#define DE_REGEN(x)				UPDATE(x, 5, 5)
#define DE_FILTER_SENS_MASK			GENMASK(4, 3)
#define DE_FILTER_SENS(x)			UPDATE(x, 4, 3)
#define HDMI_RX_HDMI_ERD_STS			HDMIRX_REG(0x0088)
#define HDMI_RX_HDMI_SYNC_CTRL			HDMIRX_REG(0x0090)
#define VS_POL_ADJ_MODE_MASK			GENMASK(4, 3)
#define VS_POL_ADJ_MODE(x)			UPDATE(x, 4, 3)
#define HS_POL_ADJ_MODE_MASK			GENMASK(2, 1)
#define HS_POL_ADJ_MODE(x)			UPDATE(x, 2, 1)
#define HDMI_RX_HDMI_CKM_EVLTM			HDMIRX_REG(0x0094)
#define LOCK_HYST_MASK				GENMASK(21, 20)
#define LOCK_HYST(x)				UPDATE(x, 21, 20)
#define CLK_HYST_MASK				GENMASK(18, 16)
#define CLK_HYST(x)				UPDATE(x, 18, 16)
#define EVAL_TIME_MASK				GENMASK(15, 4)
#define EVAL_TIME(x)				UPDATE(x, 15, 4)
#define HDMI_RX_HDMI_CKM_F			HDMIRX_REG(0x0098)
#define HDMIRX_MAXFREQ_MASK			GENMASK(31, 16)
#define HDMIRX_MAXFREQ(x)			UPDATE(x, 31, 16)
#define MINFREQ_MASK				GENMASK(15, 0)
#define MINFREQ(x)				UPDATE(x, 15, 0)
#define HDMI_RX_HDMI_CKM_RESULT			HDMIRX_REG(0x009c)
#define HDMI_RX_HDMI_PVO_CONFIG			HDMIRX_REG(0x00a0)
#define HDMI_RX_HDMI_RESMPL_CTRL		HDMIRX_REG(0x00a4)
#define MAN_VID_DEREPEAT_MASK			GENMASK(4, 1)
#define MAN_VID_DEREPEAT(x)			UPDATE(x, 4, 1)
#define AUTO_DEREPEAT_MASK			BIT(0)
#define AUTO_DEREPEAT(x)			UPDATE(x, 0, 0)
#define HDMI_RX_HDMI_DCM_CTRL			HDMIRX_REG(0x00a8)
#define DCM_DEFAULT_PHASE_MASK			BIT(18)
#define DCM_DEFAULT_PHASE(x)			UPDATE(x, 18, 18)
#define DCM_COLOUR_DEPTH_SEL_MASK		BIT(12)
#define DCM_COLOUR_DEPTH_SEL(x)			UPDATE(x, 12, 12)
#define DCM_COLOUR_DEPTH_MASK			GENMASK(11, 8)
#define DCM_COLOUR_DEPTH(x)			UPDATE(x, 11, 8)
#define DCM_GCP_ZERO_FIELDS_MASK		GENMASK(5, 2)
#define DCM_GCP_ZERO_FIELDS(x)			UPDATE(x, 5, 2)
#define HDMI_RX_HDMI_VM_CFG_CH_0_1		HDMIRX_REG(0x00b0)
#define HDMI_RX_HDMI_VM_CFG_CH2			HDMIRX_REG(0x00b4)
#define HDMI_RX_HDMI_SPARE			HDMIRX_REG(0x00b8)
#define HDMI_RX_HDMI_STS			HDMIRX_REG(0x00bc)
#define HDMI_RX_HDCP_CTRL			HDMIRX_REG(0x00c0)
#define HDCP_ENABLE_MASK			BIT(24)
#define HDCP_ENABLE(x)				UPDATE(x, 24, 24)
#define FREEZE_HDCP_FSM_MASK			BIT(21)
#define FREEZE_HDCP_FSM(x)			UPDATE(x, 21, 21)
#define FREEZE_HDCP_STATE_MASK			GENMASK(20, 15)
#define FREEZE_HDCP_STATE(x)			UPDATE(x, 20, 15)
#define HDCP_CTL_MASK				GENMASK(9, 8)
#define HDCP_CTL(x)				UPDATE(x, 9, 8)
#define HDCP_RI_RATE_MASK			GENMASK(7, 6)
#define HDCP_RI_RATE(x)				UPDATE(x, 7, 6)
#define KEY_DECRYPT_ENABLE_MASK			BIT(1)
#define KEY_DECRYPT_ENABLE(x)			UPDATE(x, 1, 1)
#define HDCP_ENC_EN_MASK			BIT(0)
#define HDCP_ENC_EN(x)				UPDATE(x, 0, 0)
#define HDMI_RX_HDCP_SETTINGS			HDMIRX_REG(0x00c4)
#define HDMI_RESERVED(x)			UPDATE(x, 13, 13)
#define HDMI_RESERVED_MASK			BIT(13)
#define FAST_I2C(x)				UPDATE(x, 12, 12)
#define FAST_I2C_MASK				BIT(12)
#define ONE_DOT_ONE(x)				UPDATE(x, 9, 9)
#define ONE_DOT_ONE_MASK			BIT(9)
#define FAST_REAUTH(x)				UPDATE(x, 8, 8)
#define FAST_REAUTH_MASK			BIT(8)
#define HDMI_RX_HDCP_SEED			HDMIRX_REG(0x00c8)
#define HDMI_RX_HDCP_BKSV1			HDMIRX_REG(0x00cc)
#define HDMI_RX_HDCP_BKSV0			HDMIRX_REG(0x00d0)
#define HDMI_RX_HDCP_KIDX			HDMIRX_REG(0x00d4)
#define HDMI_RX_HDCP_KEY1			HDMIRX_REG(0x00d8)
#define HDMI_RX_HDCP_KEY0			HDMIRX_REG(0x00dc)
#define HDMI_RX_HDCP_DBG			HDMIRX_REG(0x00e0)
#define HDMI_RX_HDCP_AKSV1			HDMIRX_REG(0x00e4)
#define HDMI_RX_HDCP_AKSV0			HDMIRX_REG(0x00e8)
#define HDMI_RX_HDCP_AN1			HDMIRX_REG(0x00ec)
#define HDMI_RX_HDCP_AN0			HDMIRX_REG(0x00f0)
#define HDMI_RX_HDCP_EESS_WOO			HDMIRX_REG(0x00f4)
#define HDMI_RX_HDCP_I2C_TIMEOUT		HDMIRX_REG(0x00f8)
#define HDMI_RX_HDCP_STS			HDMIRX_REG(0x00fc)
#define HDMI_RX_MD_HCTRL1			HDMIRX_REG(0x0140)
#define HACT_PIX_ITH_MASK			GENMASK(10, 8)
#define HACT_PIX_ITH(x)				UPDATE(x, 10, 8)
#define HACT_PIX_SRC_MASK			BIT(5)
#define HACT_PIX_SRC(x)				UPDATE(x, 5, 5)
#define HTOT_PIX_SRC_MASK			BIT(4)
#define HTOT_PIX_SRC(x)				UPDATE(x, 4, 4)
#define HDMI_RX_MD_HCTRL2			HDMIRX_REG(0x0144)
#define HS_CLK_ITH_MASK				GENMASK(14, 12)
#define HS_CLK_ITH(x)				UPDATE(x, 14, 12)
#define HTOT32_CLK_ITH_MASK			GENMASK(9, 8)
#define HTOT32_CLK_ITH(x)			UPDATE(x, 9, 8)
#define VS_ACT_TIME_MASK			BIT(5)
#define VS_ACT_TIME(x)				UPDATE(x, 5, 5)
#define HS_ACT_TIME_MASK			GENMASK(4, 3)
#define HS_ACT_TIME(x)				UPDATE(x, 4, 3)
#define H_START_POS_MASK			GENMASK(1, 0)
#define H_START_POS(x)				UPDATE(x, 1, 0)
#define HDMI_RX_MD_HT0				HDMIRX_REG(0x0148)
#define HDMI_RX_MD_HT1				HDMIRX_REG(0x014c)
#define HDMI_RX_MD_HACT_PX			HDMIRX_REG(0x0150)
#define HDMI_RX_MD_HACT_RSV			HDMIRX_REG(0x0154)
#define HDMI_RX_MD_VCTRL			HDMIRX_REG(0x0158)
#define V_OFFS_LIN_MODE_MASK			BIT(4)
#define V_OFFS_LIN_MODE(x)			UPDATE(x, 4, 4)
#define V_EDGE_MASK				BIT(1)
#define V_EDGE(x)				UPDATE(x, 1, 1)
#define V_MODE_MASK				BIT(0)
#define V_MODE(x)				UPDATE(x, 0, 0)
#define HDMI_RX_MD_VSC				HDMIRX_REG(0x015c)
#define HDMI_RX_MD_VTC				HDMIRX_REG(0x0160)
#define HDMI_RX_MD_VOL				HDMIRX_REG(0x0164)
#define HDMI_RX_MD_VAL				HDMIRX_REG(0x0168)
#define HDMI_RX_MD_VTH				HDMIRX_REG(0x016c)
#define VOFS_LIN_ITH_MASK			GENMASK(11, 10)
#define VOFS_LIN_ITH(x)				UPDATE(x, 11, 10)
#define VACT_LIN_ITH_MASK			GENMASK(9, 8)
#define VACT_LIN_ITH(x)				UPDATE(x, 9, 8)
#define VTOT_LIN_ITH_MASK			GENMASK(7, 6)
#define VTOT_LIN_ITH(x)				UPDATE(x, 7, 6)
#define VS_CLK_ITH_MASK				GENMASK(5, 3)
#define VS_CLK_ITH(x)				UPDATE(x, 5, 3)
#define VTOT_CLK_ITH_MASK			GENMASK(2, 0)
#define VTOT_CLK_ITH(x)				UPDATE(x, 2, 0)
#define HDMI_RX_MD_VTL				HDMIRX_REG(0x0170)
#define HDMI_RX_MD_IL_CTRL			HDMIRX_REG(0x0174)
#define HDMI_RX_MD_IL_SKEW			HDMIRX_REG(0x0178)
#define HDMI_RX_MD_IL_POL			HDMIRX_REG(0x017c)
#define FAFIELDDET_EN_MASK			BIT(2)
#define FAFIELDDET_EN(x)			UPDATE(x, 2, 2)
#define FIELD_POL_MODE_MASK			GENMASK(1, 0)
#define FIELD_POL_MODE(x)			UPDATE(x, 1, 0)
#define HDMI_RX_MD_STS				HDMIRX_REG(0x0180)
#define ILACE_STS				BIT(3)
#define HDMI_RX_AUD_CTRL			HDMIRX_REG(0x0200)
#define HDMI_RX_AUD_PLL_CTRL			HDMIRX_REG(0x0208)
#define PLL_LOCK_TOGGLE_DIV_MASK		GENMASK(27, 24)
#define PLL_LOCK_TOGGLE_DIV(x)			UPDATE(x, 27, 24)
#define HDMI_RX_AUD_CLK_CTRL			HDMIRX_REG(0x0214)
#define CTS_N_REF_MASK				BIT(4)
#define CTS_N_REF(x)				UPDATE(x, 4, 4)
#define HDMI_RX_AUD_CLK_STS			HDMIRX_REG(0x023c)
#define HDMI_RX_AUD_FIFO_CTRL			HDMIRX_REG(0x0240)
#define AFIF_SUBPACKET_DESEL_MASK		GENMASK(27, 24)
#define AFIF_SUBPACKET_DESEL(x)			UPDATE(x, 27, 24)
#define AFIF_SUBPACKETS_MASK			BIT(16)
#define AFIF_SUBPACKETS(x)			UPDATE(x, 16, 16)
#define MSA_CHANNEL_DESELECT			BIT(24)
#define HDMI_RX_AUD_FIFO_TH			HDMIRX_REG(0x0244)
#define AFIF_TH_START_MASK			GENMASK(26, 18)
#define AFIF_TH_START(x)			UPDATE(x, 26, 18)
#define AFIF_TH_MAX_MASK			GENMASK(17, 9)
#define AFIF_TH_MAX(x)				UPDATE(x, 17, 9)
#define AFIF_TH_MIN_MASK			GENMASK(8, 0)
#define AFIF_TH_MIN(x)				UPDATE(x, 8, 0)
#define HDMI_RX_AUD_FIFO_FILL_S			HDMIRX_REG(0x0248)
#define HDMI_RX_AUD_FIFO_CLR_MM			HDMIRX_REG(0x024c)
#define HDMI_RX_AUD_FIFO_FILLSTS		HDMIRX_REG(0x0250)
#define HDMI_RX_AUD_CHEXTR_CTRL			HDMIRX_REG(0x0254)
#define AUD_LAYOUT_CTRL(x)			UPDATE(x, 1, 0)
#define HDMI_RX_AUD_MUTE_CTRL			HDMIRX_REG(0x0258)
#define APPLY_INT_MUTE_MASK			BIT(31)
#define APPLY_INT_MUTE(x)			UPDATE(x, 31, 31)
#define APORT_SHDW_CTRL_MASK			GENMASK(22, 21)
#define APORT_SHDW_CTRL(x)			UPDATE(x, 22, 21)
#define AUTO_ACLK_MUTE_MASK			GENMASK(20, 19)
#define AUTO_ACLK_MUTE(x)			UPDATE(x, 20, 19)
#define AUD_MUTE_SPEED_MASK			GENMASK(16, 10)
#define AUD_MUTE_SPEED(x)			UPDATE(x, 16, 10)
#define AUD_AVMUTE_EN_MASK			BIT(7)
#define AUD_AVMUTE_EN(x)			UPDATE(x, 7, 7)
#define AUD_MUTE_SEL_MASK			GENMASK(6, 5)
#define AUD_MUTE_SEL(x)				UPDATE(x, 6, 5)
#define AUD_MUTE_MODE_MASK			GENMASK(4, 3)
#define AUD_MUTE_MODE(x)			UPDATE(x, 4, 3)
#define HDMI_RX_AUD_FIFO_FILLSTS1		HDMIRX_REG(0x025c)
#define HDMI_RX_AUD_SAO_CTRL			HDMIRX_REG(0x0260)
#define I2S_LPCM_BPCUV_MASK			BIT(11)
#define I2S_LPCM_BPCUV(x)			UPDATE(x, 11, 11)
#define I2S_32_16_MASK				BIT(0)
#define I2S_32_16(x)				UPDATE(x, 0, 0)
#define HDMI_RX_AUD_PAO_CTRL			HDMIRX_REG(0x0264)
#define PAO_RATE_MASK				GENMASK(17, 16)
#define PAO_RATE(x)				UPDATE(x, 17, 16)
#define HDMI_RX_AUD_SPARE			HDMIRX_REG(0x0268)
#define HDMI_RX_AUD_FIFO_STS			HDMIRX_REG(0x027c)
#define HDMI_RX_AUDPLL_GEN_CTS			HDMIRX_REG(0x0280)
#define AUDPLL_CTS_MANUAL(x)			UPDATE(x, 19, 0)
#define HDMI_RX_AUDPLL_GEN_N			HDMIRX_REG(0x0284)
#define AUDPLL_N_MANUAL(x)			UPDATE(x, 19, 0)
#define HDMI_RX_AUDPLL_GEN_CTRL_RW1		HDMIRX_REG(0x0288)
#define HDMI_RX_AUDPLL_GEN_CTRL_RW2		HDMIRX_REG(0x028c)
#define HDMI_RX_AUDPLL_GEN_CTRL_W1		HDMIRX_REG(0x0298)
#define HDMI_RX_AUDPLL_GEN_STS_RO1		HDMIRX_REG(0x02a0)
#define HDMI_RX_AUDPLL_GEN_STS_RO2		HDMIRX_REG(0x02a4)
#define HDMI_RX_AUDPLL_SC_NDIVCTSTH		HDMIRX_REG(0x02a8)
#define HDMI_RX_AUDPLL_SC_CTS			HDMIRX_REG(0x02ac)
#define HDMI_RX_AUDPLL_SC_N			HDMIRX_REG(0x02b0)
#define HDMI_RX_AUDPLL_SC_CTRL			HDMIRX_REG(0x02b4)
#define HDMI_RX_AUDPLL_SC_STS1			HDMIRX_REG(0x02b8)
#define HDMI_RX_AUDPLL_SC_STS2			HDMIRX_REG(0x02bc)
#define HDMI_RX_SNPS_PHYG3_CTRL			HDMIRX_REG(0x02c0)
#define PORTSELECT_MASK				GENMASK(3, 2)
#define PORTSELECT(x)				UPDATE(x, 3, 2)
#define HDMI_RX_I2CM_PHYG3_SLAVE		HDMIRX_REG(0x02c4)
#define HDMI_RX_I2CM_PHYG3_ADDRESS		HDMIRX_REG(0x02c8)
#define HDMI_RX_I2CM_PHYG3_DATAO		HDMIRX_REG(0x02cc)
#define HDMI_RX_I2CM_PHYG3_DATAI		HDMIRX_REG(0x02d0)
#define HDMI_RX_I2CM_PHYG3_OPERATION		HDMIRX_REG(0x02d4)
#define HDMI_RX_I2CM_PHYG3_MODE			HDMIRX_REG(0x02d8)
#define HDMI_RX_I2CM_PHYG3_SOFTRST		HDMIRX_REG(0x02dc)
#define HDMI_RX_I2CM_PHYG3_SS_CNTS		HDMIRX_REG(0x02e0)
#define HDMI_RX_I2CM_PHYG3_FS_HCNT		HDMIRX_REG(0x02e4)
#define HDMI_RX_JTAG_CONF			HDMIRX_REG(0x02ec)
#define HDMI_RX_JTAG_TAP_TCLK			HDMIRX_REG(0x02f0)
#define HDMI_RX_JTAG_TAP_IN			HDMIRX_REG(0x02f4)
#define HDMI_RX_JTAG_TAP_OUT			HDMIRX_REG(0x02f8)
#define HDMI_RX_JTAG_ADDR			HDMIRX_REG(0x02fc)
#define HDMI_RX_PDEC_CTRL			HDMIRX_REG(0x0300)
#define PFIFO_SCORE_FILTER_EN			BIT(31)
#define PFIFO_SCORE_HDP_IF			BIT(29)
#define PFIFO_SCORE_AMP_IF			BIT(28)
#define PFIFO_SCORE_NTSCVBI_IF			BIT(27)
#define PFIFO_SCORE_MPEGS_IF			BIT(26)
#define PFIFO_SCORE_AUD_IF			BIT(25)
#define PFIFO_SCORE_SPD_IF			BIT(24)
#define PFIFO_SCORE_AVI_IF			BIT(23)
#define PFIFO_SCORE_VS_IF			BIT(22)
#define PFIFO_SCORE_GMTP			BIT(21)
#define PFIFO_SCORE_ISRC2			BIT(20)
#define PFIFO_SCORE_ISRC1			BIT(19)
#define PFIFO_SCORE_ACP				BIT(18)
#define PFIFO_SCORE_GCP				BIT(17)
#define PFIFO_SCORE_ACR				BIT(16)
#define GCP_GLOBAVMUTE				BIT(15)
#define PD_FIFO_WE				BIT(4)
#define PDEC_BCH_EN				BIT(0)
#define HDMI_RX_PDEC_FIFO_CFG			HDMIRX_REG(0x0304)
#define PD_FIFO_TH_START_MASK			GENMASK(29, 20)
#define PD_FIFO_TH_START(x)			UPDATE(x, 29, 20)
#define PD_FIFO_TH_MAX_MASK			GENMASK(19, 10)
#define PD_FIFO_TH_MAX(x)			UPDATE(x, 19, 10)
#define PD_FIFO_TH_MIN_MASK			GENMASK(9, 0)
#define PD_FIFO_TH_MIN(x)			UPDATE(x, 9, 0)
#define HDMI_RX_PDEC_FIFO_STS			HDMIRX_REG(0x0308)
#define HDMI_RX_PDEC_FIFO_DATA			HDMIRX_REG(0x030c)
#define HDMI_RX_PDEC_AUDIODET_CTRL		HDMIRX_REG(0x0310)
#define AUDIODET_THRESHOLD_MASK			GENMASK(13, 9)
#define AUDIODET_THRESHOLD(x)			UPDATE(x, 13, 9)
#define HDMI_RX_PDEC_DBG_ACP			HDMIRX_REG(0x031c)
#define HDMI_RX_PDEC_DBG_ERR_CORR		HDMIRX_REG(0x0320)
#define HDMI_RX_PDEC_FIFO_STS1			HDMIRX_REG(0x0324)
#define HDMI_RX_PDEC_ACRM_CTRL			HDMIRX_REG(0x0330)
#define DELTACTS_IRQTRIG_MASK			GENMASK(4, 2)
#define DELTACTS_IRQTRIG(x)			UPDATE(x, 4, 2)
#define HDMI_RX_PDEC_ACRM_MAX			HDMIRX_REG(0x0334)
#define HDMI_RX_PDEC_ACRM_MIN			HDMIRX_REG(0x0338)
#define HDMI_RX_PDEC_ERR_FILTER			HDMIRX_REG(0x033c)
#define HDMI_RX_PDEC_ASP_CTRL			HDMIRX_REG(0x0340)
#define HDMI_RX_PDEC_ASP_ERR			HDMIRX_REG(0x0344)
#define HDMI_RX_PDEC_STS			HDMIRX_REG(0x0360)
#define HDMI_RX_PDEC_AUD_STS			HDMIRX_REG(0x0364)
#define HDMI_RX_PDEC_VSI_PAYLOAD0		HDMIRX_REG(0x0368)
#define HDMI_RX_PDEC_VSI_PAYLOAD1		HDMIRX_REG(0x036c)
#define HDMI_RX_PDEC_VSI_PAYLOAD2		HDMIRX_REG(0x0370)
#define HDMI_RX_PDEC_VSI_PAYLOAD3		HDMIRX_REG(0x0374)
#define HDMI_RX_PDEC_VSI_PAYLOAD4		HDMIRX_REG(0x0378)
#define HDMI_RX_PDEC_VSI_PAYLOAD5		HDMIRX_REG(0x037c)
#define HDMI_RX_PDEC_GCP_AVMUTE			HDMIRX_REG(0x0380)
#define PKTDEC_GCP_CD_MASK			GENMASK(7, 4)
#define HDMI_RX_PDEC_ACR_CTS			HDMIRX_REG(0x0390)
#define HDMI_RX_PDEC_ACR_N			HDMIRX_REG(0x0394)
#define HDMI_RX_PDEC_AVI_HB			HDMIRX_REG(0x03a0)
#define HDMI_RX_PDEC_AVI_PB			HDMIRX_REG(0x03a4)
#define VID_IDENT_CODE_VIC7			BIT(31)
#define VID_IDENT_CODE				GENMASK(30, 24)
#define VIDEO_FORMAT				GENMASK(6, 5)
#define HDMI_RX_PDEC_AVI_TBB			HDMIRX_REG(0x03a8)
#define HDMI_RX_PDEC_AVI_LRB			HDMIRX_REG(0x03ac)
#define HDMI_RX_PDEC_AIF_CTRL			HDMIRX_REG(0x03c0)
#define FC_LFE_EXCHG				BIT(18)
#define HDMI_RX_PDEC_AIF_HB			HDMIRX_REG(0x03c4)
#define HDMI_RX_PDEC_AIF_PB0			HDMIRX_REG(0x03c8)
#define HDMI_RX_PDEC_AIF_PB1			HDMIRX_REG(0x03cc)
#define HDMI_RX_PDEC_GMD_HB			HDMIRX_REG(0x03d0)
#define HDMI_RX_PDEC_GMD_PB			HDMIRX_REG(0x03d4)
#define HDMI_RX_PDEC_VSI_ST0			HDMIRX_REG(0x03e0)
#define HDMI_RX_PDEC_VSI_ST1			HDMIRX_REG(0x03e4)
#define HDMI_RX_PDEC_VSI_PB0			HDMIRX_REG(0x03e8)
#define HDMI_RX_PDEC_VSI_PB1			HDMIRX_REG(0x03ec)
#define HDMI_RX_PDEC_VSI_PB2			HDMIRX_REG(0x03f0)
#define HDMI_RX_PDEC_VSI_PB3			HDMIRX_REG(0x03f4)
#define HDMI_RX_PDEC_VSI_PB4			HDMIRX_REG(0x03f8)
#define HDMI_RX_PDEC_VSI_PB5			HDMIRX_REG(0x03fc)
#define HDMI_RX_CEAVID_CONFIG			HDMIRX_REG(0x0400)
#define HDMI_RX_CEAVID_3DCONFIG			HDMIRX_REG(0x0404)
#define HDMI_RX_CEAVID_HCONFIG_LO		HDMIRX_REG(0x0408)
#define HDMI_RX_CEAVID_HCONFIG_HI		HDMIRX_REG(0x040c)
#define HDMI_RX_CEAVID_VCONFIG_LO		HDMIRX_REG(0x0410)
#define HDMI_RX_CEAVID_VCONFIG_HI		HDMIRX_REG(0x0414)
#define HDMI_RX_CEAVID_STATUS			HDMIRX_REG(0x0418)
#define HDMI_RX_PDEC_AMP_HB			HDMIRX_REG(0x0480)
#define HDMI_RX_PDEC_AMP_PAYLOAD0		HDMIRX_REG(0x0484)
#define HDMI_RX_PDEC_AMP_PAYLOAD1		HDMIRX_REG(0x0488)
#define HDMI_RX_PDEC_AMP_PAYLOAD2		HDMIRX_REG(0x048c)
#define HDMI_RX_PDEC_AMP_PAYLOAD3		HDMIRX_REG(0x0490)
#define HDMI_RX_PDEC_AMP_PAYLOAD4		HDMIRX_REG(0x0494)
#define HDMI_RX_PDEC_AMP_PAYLOAD5		HDMIRX_REG(0x0498)
#define HDMI_RX_PDEC_AMP_PAYLOAD6		HDMIRX_REG(0x049c)
#define HDMI_RX_PDEC_NTSCVBI_HB			HDMIRX_REG(0x04a0)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD0		HDMIRX_REG(0x04a4)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD1		HDMIRX_REG(0x04a8)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD2		HDMIRX_REG(0x04ac)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD3		HDMIRX_REG(0x04b0)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD4		HDMIRX_REG(0x04b4)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD5		HDMIRX_REG(0x04b8)
#define HDMI_RX_PDEC_NTSCVBI_PAYLOAD6		HDMIRX_REG(0x04bc)
#define HDMI_RX_PDEC_DRM_HB			HDMIRX_REG(0x04c0)
#define HDMI_RX_PDEC_DRM_PAYLOAD0		HDMIRX_REG(0x04c4)
#define HDMI_RX_PDEC_DRM_PAYLOAD1		HDMIRX_REG(0x04c8)
#define HDMI_RX_PDEC_DRM_PAYLOAD2		HDMIRX_REG(0x04cc)
#define HDMI_RX_PDEC_DRM_PAYLOAD3		HDMIRX_REG(0x04d0)
#define HDMI_RX_PDEC_DRM_PAYLOAD4		HDMIRX_REG(0x04d4)
#define HDMI_RX_PDEC_DRM_PAYLOAD5		HDMIRX_REG(0x04d8)
#define HDMI_RX_PDEC_DRM_PAYLOAD6		HDMIRX_REG(0x04dc)
#define HDMI_RX_MHLMODE_CTRL			HDMIRX_REG(0x0500)
#define HDMI_RX_CDSENSE_STATUS			HDMIRX_REG(0x0504)
#define HDMI_RX_DESERFIFO_CTRL			HDMIRX_REG(0x0508)
#define HDMI_RX_DESER_INTTRSHCTRL		HDMIRX_REG(0x050c)
#define HDMI_RX_DESER_INTCNTCTRL		HDMIRX_REG(0x0510)
#define HDMI_RX_DESER_INTCNT			HDMIRX_REG(0x0514)
#define HDMI_RX_HDCP_RPT_CTRL			HDMIRX_REG(0x0600)
#define HDMI_RX_HDCP_RPT_BSTATUS		HDMIRX_REG(0x0604)
#define HDMI_RX_HDCP_RPT_KSVFIFO_CTRL		HDMIRX_REG(0x0608)
#define HDMI_RX_HDCP_RPT_KSVFIFO1		HDMIRX_REG(0x060c)
#define HDMI_RX_HDCP_RPT_KSVFIFO0		HDMIRX_REG(0x0610)
#define HDMI_RX_HDMI20_CONTROL			HDMIRX_REG(0x0800)
#define HDMI_RX_SCDC_I2CCONFIG			HDMIRX_REG(0x0804)
#define I2CSPIKESUPPR_MASK			GENMASK(25, 24)
#define I2CSPIKESUPPR(x)			UPDATE(x, 25, 24)
#define HDMI_RX_SCDC_CONFIG			HDMIRX_REG(0x0808)
#define HDMI_RX_CHLOCK_CONFIG			HDMIRX_REG(0x080c)
#define CHLOCKMAXER_MASK			GENMASK(29, 20)
#define CHLOCKMAXER(x)				UPDATE(x, 29, 20)
#define MILISECTIMERLIMIT_MASK			GENMASK(15, 0)
#define MILISECTIMERLIMIT(x)			UPDATE(x, 15, 0)
#define HDMI_RX_HDCP22_CONTROL			HDMIRX_REG(0x081c)
#define HDMI_RX_SCDC_REGS0			HDMIRX_REG(0x0820)
#define SCDC_TMDSBITCLKRATIO			BIT(17)
#define HDMI_RX_SCDC_REGS1			HDMIRX_REG(0x0824)
#define HDMI_RX_SCDC_REGS2			HDMIRX_REG(0x0828)
#define HDMI_RX_SCDC_REGS3			HDMIRX_REG(0x082c)
#define HDMI_RX_SCDC_MANSPEC0			HDMIRX_REG(0x0840)
#define HDMI_RX_SCDC_MANSPEC1			HDMIRX_REG(0x0844)
#define HDMI_RX_SCDC_MANSPEC2			HDMIRX_REG(0x0848)
#define HDMI_RX_SCDC_MANSPEC3			HDMIRX_REG(0x084c)
#define HDMI_RX_SCDC_MANSPEC4			HDMIRX_REG(0x0850)
#define HDMI_RX_SCDC_WRDATA0			HDMIRX_REG(0x0860)
#define MANUFACTUREROUI_MASK			GENMASK(31, 8)
#define MANUFACTUREROUI(x)			UPDATE(x, 31, 8)
#define SINKVERSION_MASK			GENMASK(7, 0)
#define SINKVERSION(x)				UPDATE(x, 7, 0)
#define HDMI_RX_SCDC_WRDATA1			HDMIRX_REG(0x0864)
#define HDMI_RX_SCDC_WRDATA2			HDMIRX_REG(0x0868)
#define HDMI_RX_SCDC_WRDATA3			HDMIRX_REG(0x086c)
#define HDMI_RX_SCDC_WRDATA4			HDMIRX_REG(0x0870)
#define HDMI_RX_SCDC_WRDATA5			HDMIRX_REG(0x0874)
#define HDMI_RX_SCDC_WRDATA6			HDMIRX_REG(0x0878)
#define HDMI_RX_SCDC_WRDATA7			HDMIRX_REG(0x087c)
#define HDMI_RX_HDMI20_STATUS			HDMIRX_REG(0x08e0)
#define HDMI_RX_HDCP2_ESM_GLOBAL_GPIO_IN	HDMIRX_REG(0x08e8)
#define HDMI_RX_HDCP2_ESM_GLOBAL_GPIO_OUT	HDMIRX_REG(0x08ec)
#define HDMI_RX_HDCP2_ESM_P0_GPIO_IN		HDMIRX_REG(0x08f0)
#define HDMI_RX_HDCP2_ESM_P0_GPIO_OUT		HDMIRX_REG(0x08f4)
#define HDMI_RX_HDCP22_STATUS			HDMIRX_REG(0x08fc)
#define HDMI_RX_HDMI2_IEN_CLR			HDMIRX_REG(0x0f60)
#define HDMI_RX_HDMI2_IEN_SET			HDMIRX_REG(0x0f64)
#define HDMI_RX_HDMI2_ISTS			HDMIRX_REG(0x0f68)
#define HDMI_RX_HDMI2_IEN			HDMIRX_REG(0x0f6c)
#define HDMI_RX_HDMI2_ICLR                      HDMIRX_REG(0x0f70)
#define HDMI_RX_HDMI2_ISET			HDMIRX_REG(0x0f74)
#define HDMI_RX_PDEC_IEN_CLR			HDMIRX_REG(0x0f78)
#define HDMI_RX_PDEC_IEN_SET			HDMIRX_REG(0x0f7c)
#define ACR_N_CHG_IEN				BIT(23)
#define ACR_CTS_CHG_IEN				BIT(22)
#define GCP_AV_MUTE_CHG_ENSET			BIT(21)
#define AIF_RCV_ENSET				BIT(19)
#define AVI_RCV_ENSET				BIT(18)
#define GCP_RCV_ENSET				BIT(16)
#define AMP_RCV_ENSET				BIT(14)
#define HDMI_RX_PDEC_ISTS			HDMIRX_REG(0x0f80)
#define AVI_RCV_ISTS				BIT(18)
#define HDMI_RX_PDEC_IEN			HDMIRX_REG(0x0f84)
#define HDMI_RX_PDEC_ICLR			HDMIRX_REG(0x0f88)
#define AVI_RCV_ICLR				BIT(18)
#define HDMI_RX_PDEC_ISET			HDMIRX_REG(0x0f8c)
#define HDMI_RX_AUD_CEC_IEN_CLR			HDMIRX_REG(0x0f90)
#define HDMI_RX_AUD_CEC_IEN_SET			HDMIRX_REG(0x0f94)
#define HDMI_RX_AUD_CEC_ISTS			HDMIRX_REG(0x0f98)
#define HDMI_RX_AUD_CEC_IEN			HDMIRX_REG(0x0f9c)
#define HDMI_RX_AUD_CEC_ICLR			HDMIRX_REG(0x0fa0)
#define HDMI_RX_AUD_CEC_ISET			HDMIRX_REG(0x0fa4)
#define HDMI_RX_AUD_FIFO_IEN_CLR		HDMIRX_REG(0x0fa8)
#define HDMI_RX_AUD_FIFO_IEN_SET		HDMIRX_REG(0x0fac)
#define AFIF_OVERFL_ISTS			BIT(4)
#define AFIF_UNDERFL_ISTS			BIT(3)
#define AFIF_THS_PASS_ISTS			BIT(2)
#define AFIF_TH_MAX_ISTS			BIT(1)
#define AFIF_TH_MIN_ISTS			BIT(0)
#define HDMI_RX_AUD_FIFO_ISTS			HDMIRX_REG(0x0fb0)
#define HDMI_RX_AUD_FIFO_IEN			HDMIRX_REG(0x0fb4)
#define HDMI_RX_AUD_FIFO_ICLR			HDMIRX_REG(0x0fb8)
#define HDMI_RX_AUD_FIFO_ISET			HDMIRX_REG(0x0fbc)
#define HDMI_RX_MD_IEN_CLR			HDMIRX_REG(0x0fc0)
#define HDMI_RX_MD_IEN_SET			HDMIRX_REG(0x0fc4)
#define VACT_LIN_ENSET				BIT(9)
#define HACT_PIX_ENSET				BIT(6)
#define HS_CLK_ENSET				BIT(5)
#define DE_ACTIVITY_ENSET			BIT(2)
#define VS_ACT_ENSET				BIT(1)
#define HS_ACT_ENSET				BIT(0)
#define HDMI_RX_MD_ISTS				HDMIRX_REG(0x0fc8)
#define HDMI_RX_MD_IEN				HDMIRX_REG(0x0fcc)
#define HDMI_RX_MD_ICLR				HDMIRX_REG(0x0fd0)
#define HDMI_RX_MD_ISET				HDMIRX_REG(0x0fd4)
#define HDMI_RX_HDMI_IEN_CLR			HDMIRX_REG(0x0fd8)
#define HDMI_RX_HDMI_IEN_SET			HDMIRX_REG(0x0fdc)
#define HDCP_DKSET_DONE_ENCLR_MASK		BIT(31)
#define HDCP_DKSET_DONE_ENCLR(x)		UPDATE(x, 31, 31)
#define HDMI_RX_HDMI_ISTS			HDMIRX_REG(0x0fe0)
#define HDMI_RX_HDMI_IEN			HDMIRX_REG(0x0fe4)
#define HDMI_RX_HDMI_ICLR			HDMIRX_REG(0x0fe8)
#define HDMI_RX_HDMI_ISET			HDMIRX_REG(0x0fec)
#define HDMI_RX_DMI_SW_RST			HDMIRX_REG(0x0ff0)
#define HDMI_RX_DMI_DISABLE_IF			HDMIRX_REG(0x0ff4)
#define MAIN_ENABLE				BIT(0)
#define MODET_ENABLE				BIT(1)
#define HDMI_ENABLE				BIT(2)
#define BUS_ENABLE				BIT(3)
#define AUD_ENABLE				BIT(4)
#define CEC_ENABLE				BIT(5)
#define PIXEL_ENABLE				BIT(6)
#define VID_ENABLE_MASK				BIT(7)
#define VID_ENABLE(x)				UPDATE(x, 7, 7)
#define TMDS_ENABLE_MASK			BIT(16)
#define TMDS_ENABLE(x)				UPDATE(x, 16, 16)
#define HDMI_RX_DMI_MODULE_ID_EXT		HDMIRX_REG(0x0ff8)
#define HDMI_RX_DMI_MODULE_ID			HDMIRX_REG(0x0ffc)
#define HDMI_RX_CEC_CTRL			HDMIRX_REG(0x1f00)
#define HDMI_RX_CEC_MASK			HDMIRX_REG(0x1f08)
#define HDMI_RX_CEC_ADDR_L			HDMIRX_REG(0x1f14)
#define HDMI_RX_CEC_ADDR_H			HDMIRX_REG(0x1f18)
#define HDMI_RX_CEC_TX_CNT			HDMIRX_REG(0x1f1c)
#define HDMI_RX_CEC_RX_CNT			HDMIRX_REG(0x1f20)
#define HDMI_RX_CEC_TX_DATA_0			HDMIRX_REG(0x1f40)
#define HDMI_RX_CEC_TX_DATA_1			HDMIRX_REG(0x1f44)
#define HDMI_RX_CEC_TX_DATA_2			HDMIRX_REG(0x1f48)
#define HDMI_RX_CEC_TX_DATA_3			HDMIRX_REG(0x1f4c)
#define HDMI_RX_CEC_TX_DATA_4			HDMIRX_REG(0x1f50)
#define HDMI_RX_CEC_TX_DATA_5			HDMIRX_REG(0x1f54)
#define HDMI_RX_CEC_TX_DATA_6			HDMIRX_REG(0x1f58)
#define HDMI_RX_CEC_TX_DATA_7			HDMIRX_REG(0x1f5c)
#define HDMI_RX_CEC_TX_DATA_8			HDMIRX_REG(0x1f60)
#define HDMI_RX_CEC_TX_DATA_9			HDMIRX_REG(0x1f64)
#define HDMI_RX_CEC_TX_DATA_10			HDMIRX_REG(0x1f68)
#define HDMI_RX_CEC_TX_DATA_11			HDMIRX_REG(0x1f6c)
#define HDMI_RX_CEC_TX_DATA_12			HDMIRX_REG(0x1f70)
#define HDMI_RX_CEC_TX_DATA_13			HDMIRX_REG(0x1f74)
#define HDMI_RX_CEC_TX_DATA_14			HDMIRX_REG(0x1f78)
#define HDMI_RX_CEC_TX_DATA_15			HDMIRX_REG(0x1f7c)
#define HDMI_RX_CEC_RX_DATA_0			HDMIRX_REG(0x1f80)
#define HDMI_RX_CEC_RX_DATA_1			HDMIRX_REG(0x1f84)
#define HDMI_RX_CEC_RX_DATA_2			HDMIRX_REG(0x1f88)
#define HDMI_RX_CEC_RX_DATA_3			HDMIRX_REG(0x1f8c)
#define HDMI_RX_CEC_RX_DATA_4			HDMIRX_REG(0x1f90)
#define HDMI_RX_CEC_RX_DATA_5			HDMIRX_REG(0x1f94)
#define HDMI_RX_CEC_RX_DATA_6			HDMIRX_REG(0x1f98)
#define HDMI_RX_CEC_RX_DATA_7			HDMIRX_REG(0x1f9c)
#define HDMI_RX_CEC_RX_DATA_8			HDMIRX_REG(0x1fa0)
#define HDMI_RX_CEC_RX_DATA_9			HDMIRX_REG(0x1fa4)
#define HDMI_RX_CEC_RX_DATA_10			HDMIRX_REG(0x1fa8)
#define HDMI_RX_CEC_RX_DATA_11			HDMIRX_REG(0x1fac)
#define HDMI_RX_CEC_RX_DATA_12			HDMIRX_REG(0x1fb0)
#define HDMI_RX_CEC_RX_DATA_13			HDMIRX_REG(0x1fb4)
#define HDMI_RX_CEC_RX_DATA_14			HDMIRX_REG(0x1fb8)
#define HDMI_RX_CEC_RX_DATA_15			HDMIRX_REG(0x1fbc)
#define HDMI_RX_CEC_LOCK			HDMIRX_REG(0x1fc0)
#define HDMI_RX_CEC_WAKEUPCTRL			HDMIRX_REG(0x1fc4)
#define HDMI_RX_CBUSSWRESETREQ			HDMIRX_REG(0x3000)
#define HDMI_RX_CBUSENABLEIF			HDMIRX_REG(0x3004)
#define HDMI_RX_CB_LOCKONCLOCK_STS		HDMIRX_REG(0x3010)
#define HDMI_RX_CB_LOCKONCLOCKCLR		HDMIRX_REG(0x3014)
#define HDMI_RX_CBUSIOCTRL			HDMIRX_REG(0x3020)
#define HDMI_RX_DD_CTRL				HDMIRX_REG(0x3040)
#define HDMI_RX_DD_OP_CTRL			HDMIRX_REG(0x3044)
#define HDMI_RX_DD_STS				HDMIRX_REG(0x3048)
#define HDMI_RX_DD_BYPASS_EN			HDMIRX_REG(0x304c)
#define HDMI_RX_DD_BYPASS_CTRL			HDMIRX_REG(0x3050)
#define HDMI_RX_DD_BYPASS_CBUS			HDMIRX_REG(0x3054)
#define HDMI_RX_LL_TXPCKFIFO			HDMIRX_REG(0x3080)
#define HDMI_RX_LL_RXPCKFIFO_RD_CLR		HDMIRX_REG(0x3084)
#define HDMI_RX_LL_RXPCKFIFO_A			HDMIRX_REG(0x3088)
#define HDMI_RX_LL_RXPCKFIFO_B			HDMIRX_REG(0x308c)
#define HDMI_RX_LL_TXPCKCTRL_0			HDMIRX_REG(0x3090)
#define HDMI_RX_LL_TXPCKCTRL_1			HDMIRX_REG(0x3094)
#define HDMI_RX_LL_PCKFIFO_STS			HDMIRX_REG(0x309c)
#define HDMI_RX_LL_RXPCKCTRL_0			HDMIRX_REG(0x30a0)
#define HDMI_RX_LL_RXPCKCTRL_1			HDMIRX_REG(0x30a4)
#define HDMI_RX_LL_INTTRSHLDCTRL		HDMIRX_REG(0x30b0)
#define HDMI_RX_LL_INTCNTCTRL			HDMIRX_REG(0x30b4)
#define HDMI_RX_LL_INTCNT_0			HDMIRX_REG(0x30b8)
#define HDMI_RX_LL_INTCNT_1			HDMIRX_REG(0x30bc)
#define HDMI_RX_CBHDCP_OPCTRL			HDMIRX_REG(0x3100)
#define HDMI_RX_CBHDCP_WDATA_0			HDMIRX_REG(0x3104)
#define HDMI_RX_CBHDCP_WDATA_1			HDMIRX_REG(0x3108)
#define HDMI_RX_CBHDCP_RDATA_0			HDMIRX_REG(0x310c)
#define HDMI_RX_CBHDCP_RDATA_1			HDMIRX_REG(0x3110)
#define HDMI_RX_CBHDCP_STATUS			HDMIRX_REG(0x3114)
#define HDMI_RX_CBHDCP_DDC_REPORT		HDMIRX_REG(0x3118)
#define HDMI_RX_ISTAT_CB_DD			HDMIRX_REG(0x3200)
#define HDMI_RX_IMASK_CB_DD			HDMIRX_REG(0x3204)
#define HDMI_RX_IFORCE_CB_DD			HDMIRX_REG(0x3208)
#define HDMI_RX_ICLEAR_CB_DD			HDMIRX_REG(0x320c)
#define HDMI_RX_IMUTE_CB_DD			HDMIRX_REG(0x3210)
#define HDMI_RX_ISTAT_CB_LL			HDMIRX_REG(0x3220)
#define HDMI_RX_IMASK_CB_LL			HDMIRX_REG(0x3224)
#define HDMI_RX_IFORCE_CB_LL			HDMIRX_REG(0x3228)
#define HDMI_RX_ICLEAR_CB_LL			HDMIRX_REG(0x322c)
#define HDMI_RX_IMUTE_CB_LL			HDMIRX_REG(0x3230)
#define HDMI_RX_ISTAT_CB_HDCP			HDMIRX_REG(0x3240)
#define HDMI_RX_IMASK_CB_HDCP			HDMIRX_REG(0x3244)
#define HDMI_RX_IFORCE_CB_HDCP			HDMIRX_REG(0x3248)
#define HDMI_RX_ICLEAR_CB_HDCP			HDMIRX_REG(0x324c)
#define HDMI_RX_IMUTE_CB_HDCP			HDMIRX_REG(0x3250)
#define HDMI_RX_ISTAT_CB_MCTRL			HDMIRX_REG(0x3260)
#define HDMI_RX_IMASK_CB_MCTRL			HDMIRX_REG(0x3264)
#define HDMI_RX_IFORCE_CB_MCTRL			HDMIRX_REG(0x3268)
#define HDMI_RX_ICLEAR_CB_MCTRL			HDMIRX_REG(0x326c)
#define HDMI_RX_IMUTE_CB_MCTRL			HDMIRX_REG(0x3270)
#define HDMI_RX_IMASTER_MUTE_CB			HDMIRX_REG(0x32e0)
#define HDMI_RX_IVECTOR_INDEX_CB		HDMIRX_REG(0x32e4)
#define HDMI_RX_MAX_REGISTER			HDMI_RX_IVECTOR_INDEX_CB

#define EDID_NUM_BLOCKS_MAX			2
#define EDID_BLOCK_SIZE				128

#define HDMIRX_PLUGIN				BIT(0)
#define HDMIRX_PLUGOUT				BIT(1)
#define HDMIRX_CHANGED				BIT(2)
#define HDMIRX_NOSIGNAL				BIT(3)
#define HDMIRX_NOLOCK				BIT(4)

void rk628_hdmirx_enable_interrupts(struct rk628 *rk628, bool en);
int rk628_hdmirx_enable(struct rk628 *rk628);
void rk628_hdmirx_disable(struct rk628 *rk628);
int rk628_hdmirx_detect(struct rk628 *rk628);

#endif
