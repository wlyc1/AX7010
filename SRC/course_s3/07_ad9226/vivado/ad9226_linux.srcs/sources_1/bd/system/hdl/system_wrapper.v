//Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2015.4 (win64) Build 1412921 Wed Nov 18 09:43:45 MST 2015
//Date        : Tue Nov 21 14:40:23 2017
//Host        : Mei-PC running 64-bit Service Pack 1  (build 7601)
//Command     : generate_target system_wrapper.bd
//Design      : system_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module system_wrapper
   (DDR_addr,
    DDR_ba,
    DDR_cas_n,
    DDR_ck_n,
    DDR_ck_p,
    DDR_cke,
    DDR_cs_n,
    DDR_dm,
    DDR_dq,
    DDR_dqs_n,
    DDR_dqs_p,
    DDR_odt,
    DDR_ras_n,
    DDR_reset_n,
    DDR_we_n,
    DS1302_RST,
    DS1302_SCLK,
    DS1302_SIO,
    FIXED_IO_ddr_vrn,
    FIXED_IO_ddr_vrp,
    FIXED_IO_mio,
    FIXED_IO_ps_clk,
    FIXED_IO_ps_porb,
    FIXED_IO_ps_srstb,
    HDMI_OEN,
    TMDS_clk_n,
    TMDS_clk_p,
    TMDS_data_n,
    TMDS_data_p,
    ad1_clk,
    ad1_d,
    ad1_otr,
    ad2_clk,
    ad2_d,
    ad2_otr,
    btns_4bits_tri_i,
    hdmi_ddc_scl_io,
    hdmi_ddc_sda_io,
    hdmi_hpd_tri_i,
    iic_0_scl_io,
    iic_0_sda_io,
    leds_4bits_tri_o);
  inout [14:0]DDR_addr;
  inout [2:0]DDR_ba;
  inout DDR_cas_n;
  inout DDR_ck_n;
  inout DDR_ck_p;
  inout DDR_cke;
  inout DDR_cs_n;
  inout [3:0]DDR_dm;
  inout [31:0]DDR_dq;
  inout [3:0]DDR_dqs_n;
  inout [3:0]DDR_dqs_p;
  inout DDR_odt;
  inout DDR_ras_n;
  inout DDR_reset_n;
  inout DDR_we_n;
  output DS1302_RST;
  output DS1302_SCLK;
  inout DS1302_SIO;
  inout FIXED_IO_ddr_vrn;
  inout FIXED_IO_ddr_vrp;
  inout [53:0]FIXED_IO_mio;
  inout FIXED_IO_ps_clk;
  inout FIXED_IO_ps_porb;
  inout FIXED_IO_ps_srstb;
  output [0:0]HDMI_OEN;
  output TMDS_clk_n;
  output TMDS_clk_p;
  output [2:0]TMDS_data_n;
  output [2:0]TMDS_data_p;
  output ad1_clk;
  input [11:0]ad1_d;
  input ad1_otr;
  output ad2_clk;
  input [11:0]ad2_d;
  input ad2_otr;
  input [3:0]btns_4bits_tri_i;
  inout hdmi_ddc_scl_io;
  inout hdmi_ddc_sda_io;
  input [0:0]hdmi_hpd_tri_i;
  inout iic_0_scl_io;
  inout iic_0_sda_io;
  output [3:0]leds_4bits_tri_o;

  wire [14:0]DDR_addr;
  wire [2:0]DDR_ba;
  wire DDR_cas_n;
  wire DDR_ck_n;
  wire DDR_ck_p;
  wire DDR_cke;
  wire DDR_cs_n;
  wire [3:0]DDR_dm;
  wire [31:0]DDR_dq;
  wire [3:0]DDR_dqs_n;
  wire [3:0]DDR_dqs_p;
  wire DDR_odt;
  wire DDR_ras_n;
  wire DDR_reset_n;
  wire DDR_we_n;
  wire DS1302_RST;
  wire DS1302_SCLK;
  wire DS1302_SIO;
  wire FIXED_IO_ddr_vrn;
  wire FIXED_IO_ddr_vrp;
  wire [53:0]FIXED_IO_mio;
  wire FIXED_IO_ps_clk;
  wire FIXED_IO_ps_porb;
  wire FIXED_IO_ps_srstb;
  wire [0:0]HDMI_OEN;
  wire TMDS_clk_n;
  wire TMDS_clk_p;
  wire [2:0]TMDS_data_n;
  wire [2:0]TMDS_data_p;
  wire ad1_clk;
  wire [11:0]ad1_d;
  wire ad1_otr;
  wire ad2_clk;
  wire [11:0]ad2_d;
  wire ad2_otr;
  wire [3:0]btns_4bits_tri_i;
  wire hdmi_ddc_scl_i;
  wire hdmi_ddc_scl_io;
  wire hdmi_ddc_scl_o;
  wire hdmi_ddc_scl_t;
  wire hdmi_ddc_sda_i;
  wire hdmi_ddc_sda_io;
  wire hdmi_ddc_sda_o;
  wire hdmi_ddc_sda_t;
  wire [0:0]hdmi_hpd_tri_i;
  wire iic_0_scl_i;
  wire iic_0_scl_io;
  wire iic_0_scl_o;
  wire iic_0_scl_t;
  wire iic_0_sda_i;
  wire iic_0_sda_io;
  wire iic_0_sda_o;
  wire iic_0_sda_t;
  wire [3:0]leds_4bits_tri_o;

  IOBUF hdmi_ddc_scl_iobuf
       (.I(hdmi_ddc_scl_o),
        .IO(hdmi_ddc_scl_io),
        .O(hdmi_ddc_scl_i),
        .T(hdmi_ddc_scl_t));
  IOBUF hdmi_ddc_sda_iobuf
       (.I(hdmi_ddc_sda_o),
        .IO(hdmi_ddc_sda_io),
        .O(hdmi_ddc_sda_i),
        .T(hdmi_ddc_sda_t));
  IOBUF iic_0_scl_iobuf
       (.I(iic_0_scl_o),
        .IO(iic_0_scl_io),
        .O(iic_0_scl_i),
        .T(iic_0_scl_t));
  IOBUF iic_0_sda_iobuf
       (.I(iic_0_sda_o),
        .IO(iic_0_sda_io),
        .O(iic_0_sda_i),
        .T(iic_0_sda_t));
  system system_i
       (.DDR_addr(DDR_addr),
        .DDR_ba(DDR_ba),
        .DDR_cas_n(DDR_cas_n),
        .DDR_ck_n(DDR_ck_n),
        .DDR_ck_p(DDR_ck_p),
        .DDR_cke(DDR_cke),
        .DDR_cs_n(DDR_cs_n),
        .DDR_dm(DDR_dm),
        .DDR_dq(DDR_dq),
        .DDR_dqs_n(DDR_dqs_n),
        .DDR_dqs_p(DDR_dqs_p),
        .DDR_odt(DDR_odt),
        .DDR_ras_n(DDR_ras_n),
        .DDR_reset_n(DDR_reset_n),
        .DDR_we_n(DDR_we_n),
        .DS1302_RST(DS1302_RST),
        .DS1302_SCLK(DS1302_SCLK),
        .DS1302_SIO(DS1302_SIO),
        .FIXED_IO_ddr_vrn(FIXED_IO_ddr_vrn),
        .FIXED_IO_ddr_vrp(FIXED_IO_ddr_vrp),
        .FIXED_IO_mio(FIXED_IO_mio),
        .FIXED_IO_ps_clk(FIXED_IO_ps_clk),
        .FIXED_IO_ps_porb(FIXED_IO_ps_porb),
        .FIXED_IO_ps_srstb(FIXED_IO_ps_srstb),
        .HDMI_DDC_scl_i(hdmi_ddc_scl_i),
        .HDMI_DDC_scl_o(hdmi_ddc_scl_o),
        .HDMI_DDC_scl_t(hdmi_ddc_scl_t),
        .HDMI_DDC_sda_i(hdmi_ddc_sda_i),
        .HDMI_DDC_sda_o(hdmi_ddc_sda_o),
        .HDMI_DDC_sda_t(hdmi_ddc_sda_t),
        .HDMI_HPD_tri_i(hdmi_hpd_tri_i),
        .HDMI_OEN(HDMI_OEN),
        .IIC_0_scl_i(iic_0_scl_i),
        .IIC_0_scl_o(iic_0_scl_o),
        .IIC_0_scl_t(iic_0_scl_t),
        .IIC_0_sda_i(iic_0_sda_i),
        .IIC_0_sda_o(iic_0_sda_o),
        .IIC_0_sda_t(iic_0_sda_t),
        .TMDS_clk_n(TMDS_clk_n),
        .TMDS_clk_p(TMDS_clk_p),
        .TMDS_data_n(TMDS_data_n),
        .TMDS_data_p(TMDS_data_p),
        .ad1_clk(ad1_clk),
        .ad1_d(ad1_d),
        .ad1_otr(ad1_otr),
        .ad2_clk(ad2_clk),
        .ad2_d(ad2_d),
        .ad2_otr(ad2_otr),
        .btns_4bits_tri_i(btns_4bits_tri_i),
        .leds_4bits_tri_o(leds_4bits_tri_o));
endmodule
