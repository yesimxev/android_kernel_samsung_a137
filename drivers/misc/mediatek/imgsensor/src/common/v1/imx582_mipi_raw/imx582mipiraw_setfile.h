/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd
 */

#ifndef __IMX582_SENSOR_SETFILE_H__
#define __IMX582_SENSOR_SETFILE_H__

/* setfile: IMX582_SEC-MTK-DPHY-26MHz_RegisterSetting_ver4.00-6.10_b3_MP_221021.xlsx */
#include "imx582mipiraw_Sensor.h"

static kal_uint16 imx582_init_setting[] = {
	/* External Clock Setting */
	0x0136, 0x1A,
	0x0137, 0x00,

	/* Register version */
	0x3C7E, 0x04,
	0x3C7F, 0x06,

	/* Global Setting */
	0x3C00, 0x10,
	0x3C01, 0x10,
	0x3C02, 0x10,
	0x3C03, 0x10,
	0x3C04, 0x10,
	0x3C05, 0x01,
	0x3C06, 0x00,
	0x3C07, 0x00,
	0x3C08, 0x03,
	0x3C09, 0xFF,
	0x3C0A, 0x01,
	0x3C0B, 0x00,
	0x3C0C, 0x00,
	0x3C0D, 0x03,
	0x3C0E, 0xFF,
	0x3C0F, 0x20,
	0x6E1D, 0x00,
	0x6E25, 0x00,
	0x6E38, 0x03,
	0x6E3B, 0x01,
	0x9004, 0x2C,
	0x9200, 0xF4,
	0x9201, 0xA7,
	0x9202, 0xF4,
	0x9203, 0xAA,
	0x9204, 0xF4,
	0x9205, 0xAD,
	0x9206, 0xF4,
	0x9207, 0xB0,
	0x9208, 0xF4,
	0x9209, 0xB3,
	0x920A, 0xB7,
	0x920B, 0x34,
	0x920C, 0xB7,
	0x920D, 0x36,
	0x920E, 0xB7,
	0x920F, 0x37,
	0x9210, 0xB7,
	0x9211, 0x38,
	0x9212, 0xB7,
	0x9213, 0x39,
	0x9214, 0xB7,
	0x9215, 0x3A,
	0x9216, 0xB7,
	0x9217, 0x3C,
	0x9218, 0xB7,
	0x9219, 0x3D,
	0x921A, 0xB7,
	0x921B, 0x3E,
	0x921C, 0xB7,
	0x921D, 0x3F,
	0x921E, 0x85,
	0x921F, 0x77,
	0x9226, 0x42,
	0x9227, 0x52,
	0x9228, 0x60,
	0x9229, 0xB9,
	0x922A, 0x60,
	0x922B, 0xBF,
	0x922C, 0x60,
	0x922D, 0xC5,
	0x922E, 0x60,
	0x922F, 0xCB,
	0x9230, 0x60,
	0x9231, 0xD1,
	0x9232, 0x60,
	0x9233, 0xD7,
	0x9234, 0x60,
	0x9235, 0xDD,
	0x9236, 0x60,
	0x9237, 0xE3,
	0x9238, 0x60,
	0x9239, 0xE9,
	0x923A, 0x60,
	0x923B, 0xEF,
	0x923C, 0x60,
	0x923D, 0xF5,
	0x923E, 0x60,
	0x923F, 0xF9,
	0x9240, 0x60,
	0x9241, 0xFD,
	0x9242, 0x61,
	0x9243, 0x01,
	0x9244, 0x61,
	0x9245, 0x05,
	0x924A, 0x61,
	0x924B, 0x6B,
	0x924C, 0x61,
	0x924D, 0x7F,
	0x924E, 0x61,
	0x924F, 0x92,
	0x9250, 0x61,
	0x9251, 0x9C,
	0x9252, 0x61,
	0x9253, 0xAB,
	0x9254, 0x61,
	0x9255, 0xC4,
	0x9256, 0x61,
	0x9257, 0xCE,
	0x9810, 0x14,
	0x9814, 0x14,
	0xC449, 0x04,
	0xC44A, 0x01,
	0xE286, 0x31,
	0xE2A6, 0x32,
	0xE2C6, 0x33,
	0x3E14, 0x01,
	0xE013, 0x01,
	0xE186, 0x2B,

	/* Image Quality adjustment setting */
	0x88D6, 0x60,
	0x9852, 0x00,
	0xAE09, 0xFF,
	0xAE0A, 0xFF,
	0xAE12, 0x58,
	0xAE13, 0x58,
	0xAE15, 0x10,
	0xAE16, 0x10,
	0xB071, 0x00,
};

static kal_uint16 imx582_preview_setting[] = {
	/* MIPI output setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,

	/* Line Length PCK Setting */
	0x0342, 0x1E,
	0x0343, 0xC0,

	/* Frame Length Lines Setting */
	0x0340, 0x0E,
	0x0341, 0x46,

	/* ROI Setting */
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x17,
	0x034B, 0x6F,

	/* Mode Setting */
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,

	/* Digital Crop & Scaling */
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x0B,
	0x040F, 0xB8,

	/* Output Size Setting */
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x0B,
	0x034F, 0xB8,


	/* Clock Setting */
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x04,
	0x030F, 0x05,
	0x0310, 0x01,

	/* Other Setting */
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3F80, 0x0B,
	0x3F81, 0x77,
	0x3F82, 0x07,
	0x3F83, 0x0E,
	0x3F8C, 0x07,
	0x3F8D, 0xD0,
	0x3FF4, 0x01,
	0x3FF5, 0x6E,
	0x3FFC, 0x04,
	0x3FFD, 0xF2,

	/* Integration Setting */
	0x0202, 0x0E,
	0x0203, 0x16,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,

	/* Gain Setting */
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,

	/* DPC output ctrl Setting */
	0x0B06, 0x00,

	/* PDAF TYPE Setting */
	0x3E20, 0x02,

	/* PDAF TYPE2 Setting */
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 imx582_normal_video_setting[] = {
	/* MIPI output setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,

	/* Line Length PCK Setting */
	0x0342, 0x1E,
	0x0343, 0xC0,

	/* Frame Length Lines Setting */
	0x0340, 0x0E,
	0x0341, 0x46,

	/* ROI Setting */
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x02,
	0x0347, 0xCC,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x14,
	0x034B, 0xA3,

	/* Mode Setting */
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,

	/* Digital Crop & Scaling */
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x0E,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x08,
	0x040F, 0xD0,

	/* Output Size Setting */
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x08,
	0x034F, 0xD0,

	/* Clock Setting */
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x04,
	0x030F, 0x05,
	0x0310, 0x01,

	/* Other Setting */
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3F80, 0x0B,
	0x3F81, 0x77,
	0x3F82, 0x07,
	0x3F83, 0x0E,
	0x3F8C, 0x07,
	0x3F8D, 0xD0,
	0x3FF4, 0x01,
	0x3FF5, 0x6E,
	0x3FFC, 0x04,
	0x3FFD, 0xF2,

	/* Integration Setting */
	0x0202, 0x0E,
	0x0203, 0x16,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,

	/* Gain Setting */
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,

	/* DPC output ctrl Setting */
	0x0B06, 0x00,

	/* PDAF TYPE Setting */
	0x3E20, 0x02,

	/* PDAF TYPE2 Setting */
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0xF0,
};

/* reg_L_2*/
static kal_uint16 imx582_hs_video_setting[] = {
	/*MIPI output setting*/
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	/*Line Length PCK Setting*/
	0x0342, 0x0B,
	0x0343, 0x60,
	/*Frame Length Lines Setting*/
	0x0340, 0x04,
	0x0341, 0xD2,

	/*ROI Setting*/
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x03,
	0x0347, 0xD0,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x13,
	0x034B, 0x9F,

	/*Mode Setting*/
	0x0900, 0x01,
	0x0901, 0x44,
	0x0902, 0x08,
	0x3246, 0x89,
	0x3247, 0x89,

	/*Digital Crop & Scaling*/
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x64,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x07,
	0x040D, 0x08,
	0x040E, 0x03,
	0x040F, 0xF4,

	/*Output Size Setting*/
	0x034C, 0x07,
	0x034D, 0x08,
	0x034E, 0x03,
	0x034F, 0xF4,

	/*Clock Setting*/
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x03,
	0x030F, 0x9C,
	0x0310, 0x01,

	/*Other Setting*/
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x00,
	0x3F80, 0x02,
	0x3F81, 0x53,
	0x3F82, 0x01,
	0x3F83, 0x66,
	0x3F8C, 0x00,
	0x3F8D, 0x00,
	0x3FF4, 0x00,
	0x3FF5, 0xF0,
	0x3FFC, 0x00,
	0x3FFD, 0x8D,

	/*Integration Setting*/
	0x0202, 0x04,
	0x0203, 0xA2,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,

	/*Gain Setting*/
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,

	/* DPC output ctrl Setting */
	0x0B06, 0x00,

	/* PDAF TYPE Setting */
	0x3E20, 0x01,

	/* PDAF TYPE2 Setting */
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,

};

static kal_uint16 imx582_custom1_setting[] = {
	/*MIPI output setting*/
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,

	/*Line Length PCK Setting*/
	0x0342, 0x0B,
	0x0343, 0x60,

	/*Frame Length Lines Setting*/
	0x0340, 0x13, //0x09A6 * 2
	0x0341, 0x4C,

	/*ROI Setting*/
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x17,
	0x034B, 0x6F,

	/*Mode Setting*/
	0x0900, 0x01,
	0x0901, 0x44,
	0x0902, 0x08,
	0x3246, 0x89,
	0x3247, 0x89,

	/*Digital Crop & Scaling*/
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x07,
	0x040D, 0xD0,
	0x040E, 0x05,
	0x040F, 0xDC,

	/*Output Size Setting*/
	0x034C, 0x07,
	0x034D, 0xD0,
	0x034E, 0x05,
	0x034F, 0xDC,

	/*Clock Setting*/
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x03,
	0x030F, 0x9C,
	0x0310, 0x01,

	/*Other Setting*/
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x00,
	0x3F80, 0x02,
	0x3F81, 0x53,
	0x3F82, 0x01,
	0x3F83, 0x66,
	0x3F8C, 0x00,
	0x3F8D, 0x00,
	0x3FF4, 0x00,
	0x3FF5, 0xF0,
	0x3FFC, 0x00,
	0x3FFD, 0x8D,

	/*Integration Setting*/
	0x0202, 0x09,
	0x0203, 0x76,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,

	/*Gain Setting*/
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,

	/* DPC output ctrl Setting */
	0x0B06, 0x00,

	/* PDAF TYPE Setting */
	0x3E20, 0x01,

	/* PDAF TYPE2 Setting */
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 imx582_custom2_setting[] = {
	/* MIPI output setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,

	/* Line Length PCK Setting */
	0x0342, 0x23,
	0x0343, 0xE0,

	/* Frame Length Lines Setting */
	0x0340, 0x17,
	0x0341, 0xE3,

	/* ROI Setting */
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x17,
	0x034B, 0x6F,

	/* Mode Setting */
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x0A,
	0x3246, 0x01,
	0x3247, 0x01,

	/* Digital Crop & Scaling */
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x1F,
	0x040D, 0x40,
	0x040E, 0x17,
	0x040F, 0x70,

	/* Output Size Setting */
	0x034C, 0x1F,
	0x034D, 0x40,
	0x034E, 0x17,
	0x034F, 0x70,

	/* Clock Setting */
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x04,
	0x030F, 0x44,
	0x0310, 0x01,

	/* Other Setting */
	0x3620, 0x01,
	0x3621, 0x01,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3F80, 0x0A,
	0x3F81, 0xFE,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x03,
	0x3F8D, 0x5C,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x00,
	0x3FFD, 0x97,

	/* Integration Setting */
	0x0202, 0x17,
	0x0203, 0xB3,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,

	/* Gain Setting */
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,

	/* DPC output ctrl Setting */
	0x0B06, 0x01,

	/* PDAF TYPE Setting */
	0x3E20, 0x02,

	/* PDAF TYPE2 Setting */
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 imx582_custom3_setting[] = {
	/* MIPI output setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	/* Line Length PCK Setting */
	0x0342, 0x23,
	0x0343, 0xE0,
	/* Frame Length Lines Setting */
	0x0340, 0x0C,
	0x0341, 0x3C,
	/* ROI Setting */
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x05,
	0x0347, 0xD0,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x11,
	0x034B, 0x97,
	/* Mode Setting */
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x0A,
	0x3246, 0x01,
	0x3247, 0x01,
	/* Digital Crop & Scaling */
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x07,
	0x0409, 0xD0,
	0x040A, 0x00,
	0x040B, 0x08,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x0B,
	0x040F, 0xB8,
	/* Output Size Setting */
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x0B,
	0x034F, 0xB8,
	/* Clock Setting */
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x04,
	0x030F, 0x05,
	0x0310, 0x01,
	/* Other Setting */
	0x3620, 0x01,
	0x3621, 0x01,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3F80, 0x0A,
	0x3F81, 0xFE,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x03,
	0x3F8D, 0x5C,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x00,
	0x3FFD, 0x97,
	/* Integration Setting */
	0x0202, 0x0C,
	0x0203, 0x0C,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	/* Gain Setting */
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	/* DPC output ctrl Setting */
	0x0B06, 0x01,
	/* PDAF TYPE Setting */
	0x3E20, 0x02,
	/* PDAF TYPE2 Setting */
	0x3E3B, 0x01,
	0x4034, 0x00,
	0x4035, 0xF8,
};

static kal_uint16 imx582_custom6_setting[] = {
	/* MIPI output setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	/* Line Length PCK Setting */
	0x0342, 0x1E,
	0x0343, 0xC0,
	/* Frame Length Lines Setting */
	0x0340, 0x07,
	0x0341, 0x22,
	/* ROI Setting */
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x04,
	0x0347, 0xF0,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x12,
	0x034B, 0x7F,
	/* Mode Setting */
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,
	/* Digital Crop & Scaling */
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x01,
	0x0409, 0xC8,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0C,
	0x040D, 0x10,
	0x040E, 0x06,
	0x040F, 0xC8,
	/* Output Size Setting */
	0x034C, 0x0C,
	0x034D, 0x10,
	0x034E, 0x06,
	0x034F, 0xC8,
	/* Clock Setting */
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x4C,
	0x030B, 0x01,
	0x030D, 0x0D,
	0x030E, 0x04,
	0x030F, 0x05,
	0x0310, 0x01,
	/* Other Setting */
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3F80, 0x0B,
	0x3F81, 0x77,
	0x3F82, 0x07,
	0x3F83, 0x0E,
	0x3F8C, 0x07,
	0x3F8D, 0xD0,
	0x3FF4, 0x01,
	0x3FF5, 0x6E,
	0x3FFC, 0x04,
	0x3FFD, 0xF2,
	/* Integration Setting */
	0x0202, 0x06,
	0x0203, 0xF2,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	/* Gain Setting */
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	/* DPC output ctrl Setting */
	0x0B06, 0x00,
	/* PDAF TYPE Setting */
	0x3E20, 0x02,
	/* PDAF TYPE2 Setting */
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0x80,
};

struct setfile_mode_info imx582_setfile_info[IMGSENSOR_MODE_MAX] = {
	{imx582_init_setting,         ARRAY_SIZE(imx582_init_setting),         "init"},      //IMGSENSOR_MODE_INIT
	{imx582_preview_setting,      ARRAY_SIZE(imx582_preview_setting),      "4:3 mode"},  //IMGSENSOR_MODE_PREVIEW
	{imx582_preview_setting,      ARRAY_SIZE(imx582_preview_setting),      "capture"},   //IMGSENSOR_MODE_CAPTURE
	{imx582_normal_video_setting, ARRAY_SIZE(imx582_normal_video_setting), "16:9 mode"}, //IMGSENSOR_MODE_VIDEO
	{imx582_hs_video_setting,     ARRAY_SIZE(imx582_hs_video_setting),     "slow_motion"}, //IMGSENSOR_MODE_HIGH_SPEED_VIDEO
	{NULL,                        0,                                       "not used"},  //IMGSENSOR_MODE_SLIM_VIDEO
	{imx582_custom1_setting,      ARRAY_SIZE(imx582_custom1_setting),      "fast AE"},   //IMGSENSOR_MODE_CUSTOM1
	{imx582_custom2_setting,      ARRAY_SIZE(imx582_custom2_setting),      "remosaic"},  //IMGSENSOR_MODE_CUSTOM2
	{imx582_custom3_setting,      ARRAY_SIZE(imx582_custom3_setting),      "remosaic crop"},  //IMGSENSOR_MODE_CUSTOM3
	{NULL,                        0,                                       "not used"},  //IMGSENSOR_MODE_CUSTOM4
	{NULL,                        0,                                       "not used"},  //IMGSENSOR_MODE_CUSTOM5
	{imx582_custom6_setting,      ARRAY_SIZE(imx582_custom6_setting),      "16:9@60fps"}  //IMGSENSOR_MODE_CUSTOM6
};
#endif//__IMX582_SENSOR_SETFILE_H__