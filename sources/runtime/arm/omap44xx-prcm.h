///////////////////////////////////////////////////////////////
//                 OMAP 4430 PRCM Registers
///////////////////////////////////////////////////////////////

//
// INTRCONN_SOCKET_PRM Registers
//
#define REVISION_PRM                    OMAP_R(0x4A306000)
#define PRM_IRQSTATUS_MPU_A9            OMAP_R(0x4A306010)
#define PRM_IRQSTATUS_MPU_A9_2          OMAP_R(0x4A306014)
#define PRM_IRQENABLE_MPU_A9            OMAP_R(0x4A306018)
#define PRM_IRQENABLE_MPU_A9_2          OMAP_R(0x4A30601C)
#define PRM_IRQSTATUS_MPU_M3            OMAP_R(0x4A306020)
#define PRM_IRQENABLE_MPU_M3            OMAP_R(0x4A306028)
#define PRM_IRQSTATUS_DSP               OMAP_R(0x4A306030)
#define PRM_IRQENABLE_DSP               OMAP_R(0x4A306038)
#define CM_PRM_PROFILING_CLKCTRL        OMAP_R(0x4A306040)
#define PRM_DEBUG_CFG                   OMAP_R(0x4A3060F0)

//
// CKGEN_PRM Registers
//
#define CM_ABE_DSS_SYS_CLKSEL           OMAP_R(0x4A306100)
#define CM_L4_WKUP_CLKSEL               OMAP_R(0x4A306108)
#define CM_ABE_PLL_REF_CLKSEL           OMAP_R(0x4A30610C)
#define CM_SYS_CLKSEL                   OMAP_R(0x4A306110)

//
// MPU_PRM Registers
//
#define PM_MPU_PWRSTCTRL                OMAP_R(0x4A306300)
#define PM_MPU_PWRSTST                  OMAP_R(0x4A306304)
#define RM_MPU_RSTST                    OMAP_R(0x4A306314)
#define RM_MPU_MPU_CONTEXT              OMAP_R(0x4A306324)

//
// DSP_PRM Registers
//
#define PM_DSP_PWRSTCTRL                OMAP_R(0x4A306400)
#define PM_DSP_PWRSTST                  OMAP_R(0x4A306404)
#define RM_DSP_RSTCTRL                  OMAP_R(0x4A306410)
#define RM_DSP_RSTST                    OMAP_R(0x4A306414)
#define RM_DSP_DSP_CONTEXT              OMAP_R(0x4A306424)

//
// ABE_PRM Registers
//
#define PM_ABE_PWRSTCTRL                OMAP_R(0x4A306500)
#define PM_ABE_PWRSTST                  OMAP_R(0x4A306504)
#define RM_ABE_AESS_CONTEXT             OMAP_R(0x4A30652C)
#define PM_ABE_PDM_WKDEP                OMAP_R(0x4A306530)
#define RM_ABE_PDM_CONTEXT              OMAP_R(0x4A306534)
#define PM_ABE_DMIC_WKDEP               OMAP_R(0x4A306538)
#define RM_ABE_DMIC_CONTEXT             OMAP_R(0x4A30653C)
#define PM_ABE_MCASP_WKDEP              OMAP_R(0x4A306540)
#define RM_ABE_MCASP_CONTEXT            OMAP_R(0x4A306544)
#define PM_ABE_MCBSP1_WKDEP             OMAP_R(0x4A306548)
#define RM_ABE_MCBSP1_CONTEXT           OMAP_R(0x4A30654C)
#define PM_ABE_MCBSP2_WKDEP             OMAP_R(0x4A306550)
#define RM_ABE_MCBSP2_CONTEXT           OMAP_R(0x4A306554)
#define PM_ABE_MCBSP3_WKDEP             OMAP_R(0x4A306558)
#define RM_ABE_MCBSP3_CONTEXT           OMAP_R(0x4A30655C)
#define PM_ABE_SLIMBUS_WKDEP            OMAP_R(0x4A306560)
#define RM_ABE_SLIMBUS_CONTEXT          OMAP_R(0x4A306564)
#define PM_ABE_GPTIMER5_WKDEP           OMAP_R(0x4A306568)
#define RM_ABE_GPTIMER5_CONTEXT         OMAP_R(0x4A30656C)
#define PM_ABE_GPTIMER6_WKDEP           OMAP_R(0x4A306570)
#define RM_ABE_GPTIMER6_CONTEXT         OMAP_R(0x4A306574)
#define PM_ABE_GPTIMER7_WKDEP           OMAP_R(0x4A306578)
#define RM_ABE_GPTIMER7_CONTEXT         OMAP_R(0x4A30657C)
#define PM_ABE_GPTIMER8_WKDEP           OMAP_R(0x4A306580)
#define RM_ABE_GPTIMER8_CONTEXT         OMAP_R(0x4A306584)
#define PM_ABE_WDTIMER3_WKDEP           OMAP_R(0x4A306588)
#define RM_ABE_WDTIMER3_CONTEXT         OMAP_R(0x4A30658C)

//
// ALWAYS_ON_PRM Registers
//
#define PM_ALWON_SR_MPU_WKDEP           OMAP_R(0x4A306628)
#define RM_ALWON_SR_MPU_CONTEXT         OMAP_R(0x4A30662C)
#define PM_ALWON_SR_IVA_WKDEP           OMAP_R(0x4A306630)
#define RM_ALWON_SR_IVA_CONTEXT         OMAP_R(0x4A306634)
#define PM_ALWON_SR_CORE_WKDEP          OMAP_R(0x4A306638)
#define RM_ALWON_SR_CORE_CONTEXT        OMAP_R(0x4A30663C)

//
// CORE_PRM Registers
//
#define PM_CORE_PWRSTCTRL               OMAP_R(0x4A306700)
#define PM_CORE_PWRSTST                 OMAP_R(0x4A306704)
#define RM_L3_1_L3_1_CONTEXT            OMAP_R(0x4A306724)
#define RM_L3_2_L3_2_CONTEXT            OMAP_R(0x4A306824)
#define RM_L3_2_GPMC_CONTEXT            OMAP_R(0x4A30682C)
#define RM_L3_2_OCMC_RAM_CONTEXT        OMAP_R(0x4A306834)
#define RM_MPU_M3_RSTCTRL               OMAP_R(0x4A306910)
#define RM_MPU_M3_RSTST                 OMAP_R(0x4A306914)
#define RM_MPU_M3_MPU_M3_CONTEXT        OMAP_R(0x4A306924)
#define RM_SDMA_SDMA_CONTEXT            OMAP_R(0x4A306A24)
#define RM_MEMIF_DMM_CONTEXT            OMAP_R(0x4A306B24)
#define RM_MEMIF_EMIF_FW_CONTEXT        OMAP_R(0x4A306B2C)
#define RM_MEMIF_EMIF_1_CONTEXT         OMAP_R(0x4A306B34)
#define RM_MEMIF_EMIF_2_CONTEXT         OMAP_R(0x4A306B3C)
#define RM_MEMIF_DLL_CONTEXT            OMAP_R(0x4A306B44)
#define RM_C2C_C2C_CONTEXT              OMAP_R(0x4A306C24)
#define RM_C2C_C2C_FW_CONTEXT           OMAP_R(0x4A306C34)
#define RM_L4CFG_L4_CFG_CONTEXT         OMAP_R(0x4A306D24)
#define RM_L4CFG_SPINLOCK_CONTEXT       OMAP_R(0x4A306D2C)
#define RM_L4CFG_MAILBOX_CONTEXT        OMAP_R(0x4A306D34)
#define RM_L4CFG_SAR_ROM_CONTEXT        OMAP_R(0x4A306D3C)
#define RM_L3INSTR_L3_3_CONTEXT         OMAP_R(0x4A306E24)
#define RM_L3INSTR_L3_INSTR_CONTEXT     OMAP_R(0x4A306E2C)
#define RM_L3INSTR_OCP_WP1_CONTEXT      OMAP_R(0x4A306E44)

//
// IVAHD_PRM Registers
//
#define PM_IVAHD_PWRSTCTRL              OMAP_R(0x4A306F00)
#define PM_IVAHD_PWRSTST                OMAP_R(0x4A306F04)
#define RM_IVAHD_RSTCTRL                OMAP_R(0x4A306F10)
#define RM_IVAHD_RSTST                  OMAP_R(0x4A306F14)
#define RM_IVAHD_IVAHD_CONTEXT          OMAP_R(0x4A306F24)
#define RM_IVAHD_SL2_CONTEXT            OMAP_R(0x4A306F2C)

//
// CAM_PRM Registers
//
#define PM_CAM_PWRSTCTRL                OMAP_R(0x4A307000)
#define PM_CAM_PWRSTST                  OMAP_R(0x4A307004)
#define RM_CAM_ISS_CONTEXT              OMAP_R(0x4A307024)
#define RM_CAM_FDIF_CONTEXT             OMAP_R(0x4A30702C)

//
// DSS_PRM Registers
//
#define PM_DSS_PWRSTCTRL                OMAP_R(0x4A307100)
#define PM_DSS_PWRSTST                  OMAP_R(0x4A307104)
#define PM_DSS_DSS_WKDEP RW             OMAP_R(0x4A307120)
#define RM_DSS_DSS_CONTEXT              OMAP_R(0x4A307124)

//
// SGX_PRM Registers
//
#define PM_SGX_PWRSTCTRL                OMAP_R(0x4A307200)
#define PM_SGX_PWRSTST                  OMAP_R(0x4A307204)
#define RM_SGX_SGX_CONTEXT              OMAP_R(0x4A307224)

//
// L3INIT_PRM Registers
//
#define PM_L3INIT_PWRSTCTRL             OMAP_R(0x4A307300)
#define PM_L3INIT_PWRSTST               OMAP_R(0x4A307304)
#define PM_L3INIT_MMC1_WKDEP            OMAP_R(0x4A307328)
#define RM_L3INIT_MMC1_CONTEXT          OMAP_R(0x4A30732C)
#define PM_L3INIT_MMC2_WKDEP            OMAP_R(0x4A307330)
#define RM_L3INIT_MMC2_CONTEXT          OMAP_R(0x4A307334)
#define PM_L3INIT_HSI_WKDEP             OMAP_R(0x4A307338)
#define RM_L3INIT_HSI_CONTEXT           OMAP_R(0x4A30733C)
#define PM_L3INIT_HSUSBHOST_WKDEP       OMAP_R(0x4A307358)
#define RM_L3INIT_HSUSBHOST_CONTEXT     OMAP_R(0x4A30735C)
#define PM_L3INIT_HSUSBOTG_WKDEP        OMAP_R(0x4A307360)
#define RM_L3INIT_HSUSBOTG_CONTEXT      OMAP_R(0x4A307364)
#define PM_L3INIT_HSUSBTLL_WKDEP        OMAP_R(0x4A307368)
#define RM_L3INIT_HSUSBTLL_CONTEXT      OMAP_R(0x4A30736C)
#define PM_L3INIT_FSUSB_WKDEP           OMAP_R(0x4A3073D0)
#define RM_L3INIT_FSUSB_CONTEXT         OMAP_R(0x4A3073D4)
#define RM_L3INIT_USBPHY_CONTEXT        OMAP_R(0x4A3073E4)

//
// L4PER_PRM Registers
//
#define PM_L4PER_PWRSTCTRL              OMAP_R(0x4A307400)
#define PM_L4PER_PWRSTST                OMAP_R(0x4A307404)
#define PM_L4PER_GPTIMER10_WKDEP        OMAP_R(0x4A307428)
#define RM_L4PER_GPTIMER10_CONTEXT      OMAP_R(0x4A30742C)
#define PM_L4PER_GPTIMER11_WKDEP        OMAP_R(0x4A307430)
#define RM_L4PER_GPTIMER11_CONTEXT      OMAP_R(0x4A307434)
#define PM_L4PER_GPTIMER2_WKDEP         OMAP_R(0x4A307438)
#define RM_L4PER_GPTIMER2_CONTEXT       OMAP_R(0x4A30743C)
#define PM_L4PER_GPTIMER3_WKDEP         OMAP_R(0x4A307440)
#define RM_L4PER_GPTIMER3_CONTEXT       OMAP_R(0x4A307444)
#define PM_L4PER_GPTIMER4_WKDEP         OMAP_R(0x4A307448)
#define RM_L4PER_GPTIMER4_CONTEXT       OMAP_R(0x4A30744C)
#define PM_L4PER_GPTIMER9_WKDEP         OMAP_R(0x4A307450)
#define RM_L4PER_GPTIMER9_CONTEXT       OMAP_R(0x4A307454)
#define RM_L4PER_ELM_CONTEXT            OMAP_R(0x4A30745C)
#define PM_L4PER_GPIO2_WKDEP            OMAP_R(0x4A307460)
#define RM_L4PER_GPIO2_CONTEXT          OMAP_R(0x4A307464)
#define PM_L4PER_GPIO3_WKDEP            OMAP_R(0x4A307468)
#define RM_L4PER_GPIO3_CONTEXT          OMAP_R(0x4A30746C)
#define PM_L4PER_GPIO4_WKDEP            OMAP_R(0x4A307470)
#define RM_L4PER_GPIO4_CONTEXT          OMAP_R(0x4A307474)
#define PM_L4PER_GPIO5_WKDEP            OMAP_R(0x4A307478)
#define RM_L4PER_GPIO5_CONTEXT          OMAP_R(0x4A30747C)
#define PM_L4PER_GPIO6_WKDEP            OMAP_R(0x4A307480)
#define RM_L4PER_GPIO6_CONTEXT          OMAP_R(0x4A307484)
#define RM_L4PER_HDQ1W_CONTEXT          OMAP_R(0x4A30748C)
#define PM_L4PER_I2C1_WKDEP             OMAP_R(0x4A3074A0)
#define RM_L4PER_I2C1_CONTEXT           OMAP_R(0x4A3074A4)
#define PM_L4PER_I2C2_WKDEP             OMAP_R(0x4A3074A8)
#define RM_L4PER_I2C2_CONTEXT           OMAP_R(0x4A3074AC)
#define PM_L4PER_I2C3_WKDEP             OMAP_R(0x4A3074B0)
#define RM_L4PER_I2C3_CONTEXT           OMAP_R(0x4A3074B4)
#define PM_L4PER_I2C4_WKDEP             OMAP_R(0x4A3074B8)
#define RM_L4PER_I2C4_CONTEXT           OMAP_R(0x4A3074BC)
#define RM_L4PER_L4_PER_CONTEXT         OMAP_R(0x4A3074C0)
#define PM_L4PER_MCBSP4_WKDEP           OMAP_R(0x4A3074E0)
#define RM_L4PER_MCBSP4_CONTEXT         OMAP_R(0x4A3074E4)
#define PM_L4PER_MCSPI1_WKDEP           OMAP_R(0x4A3074F0)
#define RM_L4PER_MCSPI1_CONTEXT         OMAP_R(0x4A3074F4)
#define PM_L4PER_MCSPI2_WKDEP           OMAP_R(0x4A3074F8)
#define RM_L4PER_MCSPI2_CONTEXT         OMAP_R(0x4A3074FC)
#define PM_L4PER_MCSPI3_WKDEP           OMAP_R(0x4A307500)
#define RM_L4PER_MCSPI3_CONTEXT         OMAP_R(0x4A307504)
#define PM_L4PER_MCSPI4_WKDEP           OMAP_R(0x4A307508)
#define RM_L4PER_MCSPI4_CONTEXT         OMAP_R(0x4A30750C)
#define PM_L4PER_MMCSD3_WKDEP           OMAP_R(0x4A307520)
#define RM_L4PER_MMCSD3_CONTEXT         OMAP_R(0x4A307524)
#define PM_L4PER_MMCSD4_WKDEP           OMAP_R(0x4A307528)
#define RM_L4PER_MMCSD4_CONTEXT         OMAP_R(0x4A30752C)
#define PM_L4PER_SLIMBUS2_WKDEP         OMAP_R(0x4A307538)
#define RM_L4PER_SLIMBUS2_CONTEXT       OMAP_R(0x4A30753C)
#define PM_L4PER_UART1_WKDEP            OMAP_R(0x4A307540)
#define RM_L4PER_UART1_CONTEXT          OMAP_R(0x4A307544)
#define PM_L4PER_UART2_WKDEP            OMAP_R(0x4A307548)
#define RM_L4PER_UART2_CONTEXT          OMAP_R(0x4A30754C)
#define PM_L4PER_UART3_WKDEP            OMAP_R(0x4A307550)
#define RM_L4PER_UART3_CONTEXT          OMAP_R(0x4A307554)
#define PM_L4PER_UART4_WKDEP            OMAP_R(0x4A307558)
#define RM_L4PER_UART4_CONTEXT          OMAP_R(0x4A30755C)
#define PM_L4PER_MMCSD5_WKDEP           OMAP_R(0x4A307560)
#define RM_L4PER_MMCSD5_CONTEXT         OMAP_R(0x4A307564)
#define RM_L4SEC_AES1_CONTEXT           OMAP_R(0x4A3075A4)
#define RM_L4SEC_AES2_CONTEXT           OMAP_R(0x4A3075AC)
#define RM_L4SEC_DES3DES_CONTEXT        OMAP_R(0x4A3075B4)
#define RM_L4SEC_PKA_CONTEXT            OMAP_R(0x4A3075BC)
#define RM_L4SEC_RNG_CONTEXT            OMAP_R(0x4A3075C4)
#define RM_L4SEC_SHA2MD5_CONTEXT        OMAP_R(0x4A3075CC)
#define RM_L4SEC_CRYPTODMA_CONTEXT      OMAP_R(0x4A3075DC)

//
// WKUP_PRM Registers
//
#define RM_WKUP_L4WKUP_CONTEXT          OMAP_R(0x4A307724)
#define PM_WKUP_WDTIMER2_WKDEP          OMAP_R(0x4A307730)
#define RM_WKUP_WDTIMER2_CONTEXT        OMAP_R(0x4A307734)
#define PM_WKUP_GPIO1_WKDEP             OMAP_R(0x4A307738)
#define RM_WKUP_GPIO1_CONTEXT           OMAP_R(0x4A30773C)
#define PM_WKUP_GPTIMER1_WKDEP          OMAP_R(0x4A307740)
#define RM_WKUP_GPTIMER1_CONTEXT        OMAP_R(0x4A307744)
#define RM_WKUP_32KTIMER_CONTEXT        OMAP_R(0x4A307754)
#define RM_WKUP_SARRAM_CONTEXT          OMAP_R(0x4A307764)
#define PM_WKUP_KEYBOARD_WKDEP          OMAP_R(0x4A307778)
#define RM_WKUP_KEYBOARD_CONTEXT        OMAP_R(0x4A30777C)

//
// WKUP_CM Registers
//
#define CM_WKUP_CLKSTCTRL               OMAP_R(0x4A307800)
#define CM_WKUP_L4WKUP_CLKCTRL          OMAP_R(0x4A307820)
#define CM_WKUP_WDTIMER2_CLKCTRL        OMAP_R(0x4A307830)
#define CM_WKUP_GPIO1_CLKCTRL           OMAP_R(0x4A307838)
#define CM_WKUP_GPTIMER1_CLKCTRL        OMAP_R(0x4A307840)
#define CM_WKUP_32KTIMER_CLKCTRL        OMAP_R(0x4A307850)
#define CM_WKUP_SARRAM_CLKCTRL          OMAP_R(0x4A307860)
#define CM_WKUP_KEYBOARD_CLKCTRL        OMAP_R(0x4A307878)
#define CM_WKUP_BANDGAP_CLKCTRL         OMAP_R(0x4A307888)

//
// EMU_PRM Registers
//
#define PM_EMU_PWRSTCTRL                OMAP_R(0x4A307900)
#define PM_EMU_PWRSTS                   OMAP_R(0x4A307904)
#define RM_EMU_DEBUGSS_CONTEXT          OMAP_R(0x4A307924)

//
// EMU_CM Registers
//
#define CM_EMU_CLKSTCTRL                OMAP_R(0x4A307A00)
#define CM_EMU_DYNAMICDEP               OMAP_R(0x4A307A08)
#define CM_EMU_DEBUGSS_CLKCTRL          OMAP_R(0x4A307A20)

//
// DEVICE_PRM Registers
//
#define PRM_RSTCTRL                     OMAP_R(0x4A307B00)
#define PRM_RSTST                       OMAP_R(0x4A307B04)
#define PRM_RSTTIME                     OMAP_R(0x4A307B08)
#define PRM_CLKREQCTRL                  OMAP_R(0x4A307B0C)
#define PRM_VOLTCTRL                    OMAP_R(0x4A307B10)
#define PRM_PWRREQCTRL                  OMAP_R(0x4A307B14)
#define PRM_PSCON_COUNT                 OMAP_R(0x4A307B18)
#define PRM_IO_COUNT                    OMAP_R(0x4A307B1C)
#define PRM_IO_PMCTRL                   OMAP_R(0x4A307B20)
#define PRM_VOLTSETUP_WARMRESET         OMAP_R(0x4A307B24)
#define PRM_VOLTSETUP_CORE_OFF          OMAP_R(0x4A307B28)
#define PRM_VOLTSETUP_MPU_OFF           OMAP_R(0x4A307B2C)
#define PRM_VOLTSETUP_IVA_OFF           OMAP_R(0x4A307B30)
#define PRM_VOLTSETUP_CORE_RET_SLEEP    OMAP_R(0x4A307B34)
#define PRM_VOLTSETUP_MPU_RET_SLEEP     OMAP_R(0x4A307B38)
#define PRM_VOLTSETUP_IVA_RET_SLEEP     OMAP_R(0x4A307B3C)
#define PRM_VP_CORE_CONFIG              OMAP_R(0x4A307B40)
#define PRM_VP_CORE_STATUS              OMAP_R(0x4A307B44)
#define PRM_VP_CORE_VLIMITTO            OMAP_R(0x4A307B48)
#define PRM_VP_CORE_VOLTAGE             OMAP_R(0x4A307B4C)
#define PRM_VP_CORE_VSTEPMAX            OMAP_R(0x4A307B50)
#define PRM_VP_CORE_VSTEPMIN            OMAP_R(0x4A307B54)
#define PRM_VP_MPU_CONFIG               OMAP_R(0x4A307B58)
#define PRM_VP_MPU_STATUS               OMAP_R(0x4A307B5C)
#define PRM_VP_MPU_VLIMITTO             OMAP_R(0x4A307B60)
#define PRM_VP_MPU_VOLTAGE              OMAP_R(0x4A307B64)
#define PRM_VP_MPU_VSTEPMAX             OMAP_R(0x4A307B68)
#define PRM_VP_MPU_VSTEPMIN             OMAP_R(0x4A307B6C)
#define PRM_VP_IVA_CONFIG               OMAP_R(0x4A307B70)
#define PRM_VP_IVA_STATUS               OMAP_R(0x4A307B74)
#define PRM_VP_IVA_VLIMITTO             OMAP_R(0x4A307B78)
#define PRM_VP_IVA_VOLTAGE              OMAP_R(0x4A307B7C)
#define PRM_VP_IVA_VSTEPMAX             OMAP_R(0x4A307B80)
#define PRM_VP_IVA_VSTEPMIN             OMAP_R(0x4A307B84)
#define PRM_VC_SMPS_SA                  OMAP_R(0x4A307B88)
#define PRM_VC_VAL_SMPS_RA_VOL          OMAP_R(0x4A307B8C)
#define PRM_VC_VAL_SMPS_RA_CMD          OMAP_R(0x4A307B90)
#define PRM_VC_VAL_CMD_VDD_CORE_L       OMAP_R(0x4A307B94)
#define PRM_VC_VAL_CMD_VDD_MPU_L        OMAP_R(0x4A307B98)
#define PRM_VC_VAL_CMD_VDD_IVA_L        OMAP_R(0x4A307B9C)
#define PRM_VC_VAL_BYPASS               OMAP_R(0x4A307BA0)
#define PRM_VC_CFG_CHANNEL              OMAP_R(0x4A307BA4)
#define PRM_VC_CFG_I2C_MODE             OMAP_R(0x4A307BA8)
#define PRM_VC_CFG_I2C_CLK              OMAP_R(0x4A307BAC)
#define PRM_SRAM_COUNT                  OMAP_R(0x4A307BB0)
#define PRM_SRAM_WKUP_SETUP             OMAP_R(0x4A307BB4)
#define PRM_LDO_SRAM_CORE_SETUP         OMAP_R(0x4A307BB8)
#define PRM_LDO_SRAM_CORE_CTRL          OMAP_R(0x4A307BBC)
#define PRM_LDO_SRAM_MPU_SETUP          OMAP_R(0x4A307BC0)
#define PRM_LDO_SRAM_MPU_CTRL           OMAP_R(0x4A307BC4)
#define PRM_LDO_SRAM_IVA_SETUP          OMAP_R(0x4A307BC8)
#define PRM_LDO_SRAM_IVA_CTRL           OMAP_R(0x4A307BCC)
#define PRM_LDO_ABB_MPU_SETUP           OMAP_R(0x4A307BD0)
#define PRM_LDO_ABB_MPU_CTRL            OMAP_R(0x4A307BD4)
#define PRM_LDO_ABB_IVA_SETUP           OMAP_R(0x4A307BD8)
#define PRM_LDO_ABB_IVA_CTRL            OMAP_R(0x4A307BDC)
#define PRM_LDO_BANDGAP_SETUP           OMAP_R(0x4A307BE0)
#define PRM_DEVICE_OFF_CTRL             OMAP_R(0x4A307BE4)
#define PRM_PHASE1_CNDP                 OMAP_R(0x4A307BE8)
#define PRM_PHASE2A_CNDP                OMAP_R(0x4A307BEC)
#define PRM_PHASE2B_CNDP                OMAP_R(0x4A307BF0)
#define PRM_VC_ERRST                    OMAP_R(0x4A307BF8)

//
// INSTR_PRM Registers
//
#define PMI_IDENTICATION                OMAP_R(0x4A307F00)
#define PMI_STATUS                      OMAP_R(0x4A307F10)
#define PMI_SYS_CONFIG                  OMAP_R(0x4A307F14)
#define PMI_CONFIGURATION               OMAP_R(0x4A307F24)
#define PMI_CLASS_FILTERING             OMAP_R(0x4A307F28)
#define PMI_TRIGGERING                  OMAP_R(0x4A307F2C)
#define PMI_SAMPLING                    OMAP_R(0x4A307F30)

//
// INTRCONN_SOCKET_CM1 Registers
//
#define REVISION_CM1                    OMAP_R(0x4A004000)
#define CM_CM1_PROFILING_CLKCTRL        OMAP_R(0x4A004040)
#define CM1_DEBUG_CFG                   OMAP_R(0x4A0040F0)

//
// CKGEN_CM1 Registers
//
#define CM_CLKSEL_CORE                  OMAP_R(0x4A004100)
#define CM_CLKSEL_ABE                   OMAP_R(0x4A004108)
#define CM_DLL_CTRL                     OMAP_R(0x4A004110)
#define CM_CLKMODE_DPLL_CORE            OMAP_R(0x4A004120)
#define CM_IDLEST_DPLL_CORE             OMAP_R(0x4A004124)
#define CM_AUTOIDLE_DPLL_CORE           OMAP_R(0x4A004128)
#define CM_CLKSEL_DPLL_CORE             OMAP_R(0x4A00412C)
#define CM_DIV_M2_DPLL_CORE             OMAP_R(0x4A004130)
#define CM_DIV_M3_DPLL_CORE             OMAP_R(0x4A004134)
#define CM_DIV_M4_DPLL_CORE             OMAP_R(0x4A004138)
#define CM_DIV_M5_DPLL_CORE             OMAP_R(0x4A00413C)
#define CM_DIV_M6_DPLL_CORE             OMAP_R(0x4A004140)
#define CM_DIV_M7_DPLL_CORE             OMAP_R(0x4A004144)
#define CM_SSC_DELTAMSTEP_DPLL_CORE     OMAP_R(0x4A004148)
#define CM_SSC_MODFREQDIV_DPLL_CORE     OMAP_R(0x4A00414C)
#define CM_EMU_OVERRIDE_DPLL_CORE       OMAP_R(0x4A004150)
#define CM_CLKMODE_DPLL_MPU             OMAP_R(0x4A004160)
#define CM_IDLEST_DPLL_MPU              OMAP_R(0x4A004164)
#define CM_AUTOIDLE_DPLL_MPU            OMAP_R(0x4A004168)
#define CM_CLKSEL_DPLL_MPU              OMAP_R(0x4A00416C)
#define CM_DIV_M2_DPLL_MPU              OMAP_R(0x4A004170)
#define CM_SSC_DELTAMSTEP_DPLL_MPU      OMAP_R(0x4A004188)
#define CM_SSC_MODFREQDIV_DPLL_MPU      OMAP_R(0x4A00418C)
#define CM_BYPCLK_DPLL_MPU              OMAP_R(0x4A00419C)
#define CM_CLKMODE_DPLL_IVA             OMAP_R(0x4A0041A0)
#define CM_IDLEST_DPLL_IVA              OMAP_R(0x4A0041A4)
#define CM_AUTOIDLE_DPLL_IVA            OMAP_R(0x4A0041A8)
#define CM_CLKSEL_DPLL_IVA              OMAP_R(0x4A0041AC)
#define CM_DIV_M4_DPLL_IVA              OMAP_R(0x4A0041B8)
#define CM_DIV_M5_DPLL_IVA              OMAP_R(0x4A0041BC)
#define CM_SSC_DELTAMSTEP_DPLL_IVA      OMAP_R(0x4A0041C8)
#define CM_SSC_MODFREQDIV_DPLL_IVA      OMAP_R(0x4A0041CC)
#define CM_BYPCLK_DPLL_IVA              OMAP_R(0x4A0041DC)
#define CM_CLKMODE_DPLL_ABE             OMAP_R(0x4A0041E0)
#define CM_IDLEST_DPLL_ABE              OMAP_R(0x4A0041E4)
#define CM_AUTOIDLE_DPLL_ABE            OMAP_R(0x4A0041E8)
#define CM_CLKSEL_DPLL_ABE              OMAP_R(0x4A0041EC)
#define CM_DIV_M2_DPLL_ABE              OMAP_R(0x4A0041F0)
#define CM_DIV_M3_DPLL_ABE              OMAP_R(0x4A0041F4)
#define CM_SSC_DELTAMSTEP_DPLL_ABE      OMAP_R(0x4A004208)
#define CM_SSC_MODFREQDIV_DPLL_ABE      OMAP_R(0x4A00420C)
#define CM_SHADOW_FREQ_CONFIG1          OMAP_R(0x4A004260)
#define CM_SHADOW_FREQ_CONFIG2          OMAP_R(0x4A004264)
#define CM_DYN_DEP_PRESCAL              OMAP_R(0x4A004270)
#define CM_RESTORE_ST                   OMAP_R(0x4A004280)

//
// MPU_CM1 Registers
//
#define CM_MPU_CLKSTCTRL                OMAP_R(0x4A004300)
#define CM_MPU_STATICDEP                OMAP_R(0x4A004304)
#define CM_MPU_DYNAMICDEP               OMAP_R(0x4A004308)
#define CM_MPU_MPU_CLKCTRL              OMAP_R(0x4A004320)

//
// DSP_CM1 Registers
//
#define CM_DSP_CLKSTCTRL                OMAP_R(0x4A004400)
#define CM_DSP_STATICDEP                OMAP_R(0x4A004404)
#define CM_DSP_DYNAMICDEP               OMAP_R(0x4A004408)
#define CM_DSP_DSP_CLKCTRL              OMAP_R(0x4A004420)

//
// ABE_CM1 Registers
//
#define CM1_ABE_CLKSTCTRL               OMAP_R(0x4A004500)
#define CM1_ABE_L4ABE_CLKCTRL           OMAP_R(0x4A004520)
#define CM1_ABE_AESS_CLKCTRL            OMAP_R(0x4A004528)
#define CM1_ABE_PDM_CLKCTRL             OMAP_R(0x4A004530)
#define CM1_ABE_DMIC_CLKCTRL            OMAP_R(0x4A004538)
#define CM1_ABE_MCASP_CLKCTRL           OMAP_R(0x4A004540)
#define CM1_ABE_MCBSP1_CLKCTRL          OMAP_R(0x4A004548)
#define CM1_ABE_MCBSP2_CLKCTRL          OMAP_R(0x4A004550)
#define CM1_ABE_MCBSP3_CLKCTRL          OMAP_R(0x4A004558)
#define CM1_ABE_SLIMBUS_CLKCTRL         OMAP_R(0x4A004560)
#define CM1_ABE_GPTIMER5_CLKCTRL        OMAP_R(0x4A004568)
#define CM1_ABE_GPTIMER6_CLKCTRL        OMAP_R(0x4A004570)
#define CM1_ABE_GPTIMER7_CLKCTRL        OMAP_R(0x4A004578)
#define CM1_ABE_GPTIMER8_CLKCTRL        OMAP_R(0x4A004580)
#define CM1_ABE_WDTIMER3_CLKCTRL        OMAP_R(0x4A004588)

//
// RESTORE_CM1 Registers
//
#define CM_CLKSEL_CORE_RESTORE                  OMAP_R(0x4A004E00)
#define CM_DIV_M2_DPLL_CORE_RESTORE             OMAP_R(0x4A004E04)
#define CM_DIV_M3_DPLL_CORE_RESTORE             OMAP_R(0x4A004E08)
#define CM_DIV_M4_DPLL_CORE_RESTORE             OMAP_R(0x4A004E0C)
#define CM_DIV_M5_DPLL_CORE_RESTORE             OMAP_R(0x4A004E10)
#define CM_DIV_M6_DPLL_CORE_RESTORE             OMAP_R(0x4A004E14)
#define CM_DIV_M7_DPLL_CORE_RESTORE             OMAP_R(0x4A004E18)
#define CM_CLKSEL_DPLL_CORE_RESTORE             OMAP_R(0x4A004E1C)
#define CM_SSC_DELTAMSTEP_DPLL_CORE_RESTORE     OMAP_R(0x4A004E20)
#define CM_SSC_MODFREQDIV_DPLL_CORE_RESTORE     OMAP_R(0x4A004E24)
#define CM_CLKMODE_DPLL_CORE_RESTORE            OMAP_R(0x4A004E28)
#define CM_SHADOW_FREQ_CONFIG2_RESTORE          OMAP_R(0x4A004E2C)
#define CM_SHADOW_FREQ_CONFIG1_RESTORE          OMAP_R(0x4A004E30)
#define CM_AUTOIDLE_DPLL_CORE_RESTORE           OMAP_R(0x4A004E34)
#define CM_MPU_CLKSTCTRL_RESTORE                OMAP_R(0x4A004E38)
#define CM_CM1_PROFILING_CLKCTRL_RESTORE        OMAP_R(0x4A004E3C)
#define CM_DYN_DEP_PRESCAL_RESTORE              OMAP_R(0x4A004E40)

//
// INSTR_CM1 Registers
//
#define CMI1_IDENTIFICATION             OMAP_R(0x4A004F00)
#define CMI1_SYS_CONFIG                 OMAP_R(0x4A004F10)
#define CMI1_STATUS                     OMAP_R(0x4A004F14)
#define CMI1_CONFIGURATION              OMAP_R(0x4A004F24)
#define CMI1_CLASS_FILTERING            OMAP_R(0x4A004F28)
#define CMI1_TRIGGERING                 OMAP_R(0x4A004F2C)
#define CMI1_SAMPLING                   OMAP_R(0x4A004F30)

//
// INTRCONN_SOCKET_CM2
//
#define REVISION_CM2                    OMAP_R(0x4A008000)
#define CM_CM2_PROFILING_CLKCTRL        OMAP_R(0x4A008040)
#define CM2_DEBUG_CFG                   OMAP_R(0x4A0080F0)

//
// CKGEN_CM2 Registers
//
#define CM_CLKSEL_MPU_M3_ISS_ROOT       OMAP_R(0x4A008100)
#define CM_CLKSEL_USB_60MHZ             OMAP_R(0x4A008104)
#define CM_SCALE_FCLK                   OMAP_R(0x4A008108)
#define CM_CORE_DVFS_PERF1              OMAP_R(0x4A008110)
#define CM_CORE_DVFS_PERF2              OMAP_R(0x4A008114)
#define CM_CORE_DVFS_PERF3              OMAP_R(0x4A008118)
#define CM_CORE_DVFS_PERF4              OMAP_R(0x4A00811C)
#define CM_CORE_DVFS_CURRENT            OMAP_R(0x4A008124)
#define CM_IVA_DVFS_PERF_DSP            OMAP_R(0x4A008128)
#define CM_IVA_DVFS_PERF_IVAHD          OMAP_R(0x4A00812C)
#define CM_IVA_DVFS_PERF_ABE            OMAP_R(0x4A008130)
#define CM_IVA_DVFS_CURRENT             OMAP_R(0x4A008138)
#define CM_CLKMODE_DPLL_PER             OMAP_R(0x4A008140)
#define CM_IDLEST_DPLL_PER              OMAP_R(0x4A008144)
#define CM_AUTOIDLE_DPLL_PER            OMAP_R(0x4A008148)
#define CM_CLKSEL_DPLL_PER              OMAP_R(0x4A00814C)
#define CM_DIV_M2_DPLL_PER              OMAP_R(0x4A008150)
#define CM_DIV_M3_DPLL_PER              OMAP_R(0x4A008154)
#define CM_DIV_M4_DPLL_PER              OMAP_R(0x4A008158)
#define CM_DIV_M5_DPLL_PER              OMAP_R(0x4A00815C)
#define CM_DIV_M6_DPLL_PER              OMAP_R(0x4A008160)
#define CM_DIV_M7_DPLL_PER              OMAP_R(0x4A008164)
#define CM_SSC_DELTAMSTEP_DPLL_PER      OMAP_R(0x4A008168)
#define CM_SSC_MODFREQDIV_DPLL_PER      OMAP_R(0x4A00816C)
#define CM_CLKMODE_DPLL_USB             OMAP_R(0x4A008180)
#define CM_IDLEST_DPLL_USB              OMAP_R(0x4A008184)
#define CM_AUTOIDLE_DPLL_USB            OMAP_R(0x4A008188)
#define CM_CLKSEL_DPLL_USB              OMAP_R(0x4A00818C)
#define CM_DIV_M2_DPLL_USB              OMAP_R(0x4A008190)
#define CM_SSC_DELTAMSTEP_DPLL_USB      OMAP_R(0x4A0081A8)
#define CM_SSC_MODFREQDIV_DPLL_USB      OMAP_R(0x4A0081AC)
#define CM_CLKDCOLDO_DPLL_USB           OMAP_R(0x4A0081B4)

//
// ALWAYS_ON_CM2 Registers
//
#define CM_ALWON_CLKSTCTRL              OMAP_R(0x4A008600)
#define CM_ALWON_SR_MPU_CLKCTRL         OMAP_R(0x4A008628)
#define CM_ALWON_SR_IVA_CLKCTRL         OMAP_R(0x4A008630)
#define CM_ALWON_SR_CORE_CLKCTRL        OMAP_R(0x4A008638)
#define CM_ALWON_USBPHY_CLKCTRL         OMAP_R(0x4A008640)

//
// CORE_CM2 Registers
//
#define CM_L3_1_CLKSTCTRL               OMAP_R(0x4A008700)
#define CM_L3_1_DYNAMICDEP              OMAP_R(0x4A008708)
#define CM_L3_1_L3_1_CLKCTRL            OMAP_R(0x4A008720)
#define CM_L3_2_CLKSTCTRL               OMAP_R(0x4A008800)
#define CM_L3_2_DYNAMICDEP              OMAP_R(0x4A008808)
#define CM_L3_2_L3_2_CLKCTRL            OMAP_R(0x4A008820)
#define CM_L3_2_GPMC_CLKCTRL            OMAP_R(0x4A008828)
#define CM_L3_2_OCMC_RAM_CLKCTRL        OMAP_R(0x4A008830)
#define CM_MPU_M3_CLKSTCTRL             OMAP_R(0x4A008900)
#define CM_MPU_M3_STATICDEP             OMAP_R(0x4A008904)
#define CM_MPU_M3_DYNAMICDEP            OMAP_R(0x4A008908)
#define CM_MPU_M3_MPU_M3_CLKCTRL        OMAP_R(0x4A008920)
#define CM_SDMA_CLKSTCTRL               OMAP_R(0x4A008A00)
#define CM_SDMA_STATICDEP               OMAP_R(0x4A008A04)
#define CM_SDMA_DYNAMICDEP              OMAP_R(0x4A008A08)
#define CM_SDMA_SDMA_CLKCTRL            OMAP_R(0x4A008A20)
#define CM_MEMIF_CLKSTCTRL              OMAP_R(0x4A008B00)
#define CM_MEMIF_DMM_CLKCTRL            OMAP_R(0x4A008B20)
#define CM_MEMIF_EMIF_FW_CLKCTRL        OMAP_R(0x4A008B28)
#define CM_MEMIF_EMIF_1_CLKCTRL         OMAP_R(0x4A008B30)
#define CM_MEMIF_EMIF_2_CLKCTRL         OMAP_R(0x4A008B38)
#define CM_MEMIF_DLL_CLKCTRL            OMAP_R(0x4A008B40)
#define CM_C2C_CLKSTCTRL                OMAP_R(0x4A008C00)
#define CM_C2C_STATICDEP                OMAP_R(0x4A008C04)
#define CM_C2C_DYNAMICDEP               OMAP_R(0x4A008C08)
#define CM_C2C_C2C_CLKCTRL              OMAP_R(0x4A008C20)
#define CM_C2C_C2C_FW_CLKCTRL           OMAP_R(0x4A008C30)
#define CM_L4CFG_CLKSTCTRL              OMAP_R(0x4A008D00)
#define CM_L4CFG_DYNAMICDEP             OMAP_R(0x4A008D08)
#define CM_L4CFG_L4_CFG_CLKCTRL         OMAP_R(0x4A008D20)
#define CM_L4CFG_SPINLOCK_CLKCTRL       OMAP_R(0x4A008D28)
#define CM_L4CFG_MAILBOX_CLKCTRL        OMAP_R(0x4A008D30)
#define CM_L4CFG_SAR_ROM_CLKCTRL        OMAP_R(0x4A008D38)
#define CM_L3INSTR_CLKSTCTRL            OMAP_R(0x4A008E00)
#define CM_L3INSTR_L3_3_CLKCTRL         OMAP_R(0x4A008E20)
#define CM_L3INSTR_L3_INSTR_CLKCTRL     OMAP_R(0x4A008E28)
#define CM_L3INSTR_OCP_WP1_CLKCTRL      OMAP_R(0x4A008E40)

//
// IVAHD_CM2 Registers
//
#define CM_IVAHD_CLKSTCTRL              OMAP_R(0x4A008F00)
#define CM_IVAHD_STATICDEP              OMAP_R(0x4A008F04)
#define CM_IVAHD_DYNAMICDEP             OMAP_R(0x4A008F08)
#define CM_IVAHD_IVAHD_CLKCTRL          OMAP_R(0x4A008F20)
#define CM_IVAHD_SL2_CLKCTRL            OMAP_R(0x4A008F28)

//
// CAM_CM2 Registers
//
#define CM_CAM_CLKSTCTRL                OMAP_R(0x4A009000)
#define CM_CAM_STATICDEP                OMAP_R(0x4A009004)
#define CM_CAM_DYNAMICDEP               OMAP_R(0x4A009008)
#define CM_CAM_ISS_CLKCTRL              OMAP_R(0x4A009020)
#define CM_CAM_FDIF_CLKCTRL             OMAP_R(0x4A009028)

//
// DSS_CM2 Registers
//
#define CM_DSS_CLKSTCTRL                OMAP_R(0x4A009100)
#define CM_DSS_STATICDEP                OMAP_R(0x4A009104)
#define CM_DSS_DYNAMICDEP               OMAP_R(0x4A009108)
#define CM_DSS_DSS_CLKCTRL              OMAP_R(0x4A009120)

//
// SGX_CM2 Registers
//
#define CM_SGX_CLKSTCTRL                OMAP_R(0x4A009200)
#define CM_SGX_STATICDEP                OMAP_R(0x4A009204)
#define CM_SGX_DYNAMICDEP               OMAP_R(0x4A009208)
#define CM_SGX_SGX_CLKCTRL              OMAP_R(0x4A009220)

//
// L3INIT_CM2 Registers
//
#define CM_L3INIT_CLKSTCTRL             OMAP_R(0x4A009300)
#define CM_L3INIT_STATICDEP             OMAP_R(0x4A009304)
#define CM_L3INIT_DYNAMICDEP            OMAP_R(0x4A009308)
#define CM_L3INIT_HSMMC1_CLKCTRL        OMAP_R(0x4A009328)
#define CM_L3INIT_HSMMC2_CLKCTRL        OMAP_R(0x4A009330)
#define CM_L3INIT_HSI_CLKCTRL           OMAP_R(0x4A009338)
#define CM_L3INIT_HSUSBHOST_CLKCTRL     OMAP_R(0x4A009358)
#define CM_L3INIT_HSUSBOTG_CLKCTRL      OMAP_R(0x4A009360)
#define CM_L3INIT_HSUSBTLL_CLKCTRL      OMAP_R(0x4A009368)
#define CM_L3INIT_FSUSB_CLKCTRL         OMAP_R(0x4A0093D0)
#define CM_L3INIT_USBPHY_CLKCTRL        OMAP_R(0x4A0093E0)

//
// L4PER_CM2 Registers
//
#define CM_L4PER_CLKSTCTRL              OMAP_R(0x4A009400)
#define CM_L4PER_DYNAMICDEP             OMAP_R(0x4A009408)
#define CM_L4PER_GPTIMER10_CLKCTRL      OMAP_R(0x4A009428)
#define CM_L4PER_GPTIMER11_CLKCTRL      OMAP_R(0x4A009430)
#define CM_L4PER_GPTIMER2_CLKCTRL       OMAP_R(0x4A009438)
#define CM_L4PER_GPTIMER3_CLKCTRL       OMAP_R(0x4A009440)
#define CM_L4PER_GPTIMER4_CLKCTRL       OMAP_R(0x4A009448)
#define CM_L4PER_GPTIMER9_CLKCTRL       OMAP_R(0x4A009450)
#define CM_L4PER_ELM_CLKCTRL            OMAP_R(0x4A009458)
#define CM_L4PER_GPIO2_CLKCTRL          OMAP_R(0x4A009460)
#define CM_L4PER_GPIO3_CLKCTRL          OMAP_R(0x4A009468)
#define CM_L4PER_GPIO4_CLKCTRL          OMAP_R(0x4A009470)
#define CM_L4PER_GPIO5_CLKCTRL          OMAP_R(0x4A009478)
#define CM_L4PER_GPIO6_CLKCTRL          OMAP_R(0x4A009480)
#define CM_L4PER_HDQ1W_CLKCTRL          OMAP_R(0x4A009488)
#define CM_L4PER_I2C1_CLKCTRL           OMAP_R(0x4A0094A0)
#define CM_L4PER_I2C2_CLKCTRL           OMAP_R(0x4A0094A8)
#define CM_L4PER_I2C3_CLKCTRL           OMAP_R(0x4A0094B0)
#define CM_L4PER_I2C4_CLKCTRL           OMAP_R(0x4A0094B8)
#define CM_L4PER_L4PER_CLKCTRL          OMAP_R(0x4A0094C0)
#define CM_L4PER_MCBSP4_CLKCTRL         OMAP_R(0x4A0094E0)
#define CM_L4PER_MCSPI1_CLKCTRL         OMAP_R(0x4A0094F0)
#define CM_L4PER_MCSPI2_CLKCTRL         OMAP_R(0x4A0094F8)
#define CM_L4PER_MCSPI3_CLKCTRL         OMAP_R(0x4A009500)
#define CM_L4PER_MCSPI4_CLKCTRL         OMAP_R(0x4A009508)
#define CM_L4PER_MMCSD3_CLKCTRL         OMAP_R(0x4A009520)
#define CM_L4PER_MMCSD4_CLKCTRL         OMAP_R(0x4A009528)
#define CM_L4PER_SLIMBUS2_CLKCTRL       OMAP_R(0x4A009538)
#define CM_L4PER_UART1_CLKCTRL          OMAP_R(0x4A009540)
#define CM_L4PER_UART2_CLKCTRL          OMAP_R(0x4A009548)
#define CM_L4PER_UART3_CLKCTRL          OMAP_R(0x4A009550)
#define CM_L4PER_UART4_CLKCTRL          OMAP_R(0x4A009558)
#define CM_L4PER_MMCSD5_CLKCTRL         OMAP_R(0x4A009560)
#define CM_L4SEC_CLKSTCTRL              OMAP_R(0x4A009580)
#define CM_L4SEC_STATICDEP              OMAP_R(0x4A009584)
#define CM_L4SEC_DYNAMICDEP             OMAP_R(0x4A009588)
#define CM_L4SEC_AES1_CLKCTRL           OMAP_R(0x4A0095A0)
#define CM_L4SEC_AES2_CLKCTRL           OMAP_R(0x4A0095A8)
#define CM_L4SEC_DES3DES_CLKCTRL        OMAP_R(0x4A0095B0)
#define CM_L4SEC_PKA_CLKCTRL            OMAP_R(0x4A0095B8)
#define CM_L4SEC_RNG_CLKCTRL            OMAP_R(0x4A0095C0)
#define CM_L4SEC_SHA2MD5_CLKCTRL        OMAP_R(0x4A0095C8)
#define CM_L4SEC_CRYPTODMA_CLKCTRL      OMAP_R(0x4A0095D8)

//
// RESTORE_CM2 Registers
//
#define CM_L3_1_CLKSTCTRL_RESTORE               OMAP_R(0x4A009E00)
#define CM_L3_2_CLKSTCTRL_RESTORE               OMAP_R(0x4A009E04)
#define CM_L4CFG_CLKSTCTRL_RESTORE              OMAP_R(0x4A009E08)
#define CM_MEMIF_CLKSTCTRL_RESTORE              OMAP_R(0x4A009E0C)
#define CM_L4PER_CLKSTCTRL_RESTORE              OMAP_R(0x4A009E10)
#define CM_L3INIT_CLKSTCTRL_RESTORE             OMAP_R(0x4A009E14)
#define CM_L3INSTR_L3_3_CLKCTRL_RESTORE         OMAP_R(0x4A009E18)
#define CM_L3INSTR_L3_INSTR_CLKCTRL_RESTORE     OMAP_R(0x4A009E1C)
#define CM_L3INSTR_OCP_WP1_CLKCTRL_RESTORE      OMAP_R(0x4A009E20)
#define CM_CM2_PROFILING_CLKCTRL_RESTORE        OMAP_R(0x4A009E24)
#define CM_C2C_STATICDEP_RESTORE                OMAP_R(0x4A009E28)
#define CM_L3_1_DYNAMICDEP_RESTORE              OMAP_R(0x4A009E2C)
#define CM_L3_2_DYNAMICDEP_RESTORE              OMAP_R(0x4A009E30)
#define CM_C2C_DYNAMICDEP_RESTORE               OMAP_R(0x4A009E34)
#define CM_L4CFG_DYNAMICDEP_RESTORE             OMAP_R(0x4A009E38)
#define CM_L4PER_DYNAMICDEP_RESTORE             OMAP_R(0x4A009E3C)
#define CM_L4PER_GPIO2_CLKCTRL_RESTORE          OMAP_R(0x4A009E40)
#define CM_L4PER_GPIO3_CLKCTRL_RESTORE          OMAP_R(0x4A009E44)
#define CM_L4PER_GPIO4_CLKCTRL_RESTORE          OMAP_R(0x4A009E48)
#define CM_L4PER_GPIO5_CLKCTRL_RESTORE          OMAP_R(0x4A009E4C)
#define CM_L4PER_GPIO6_CLKCTRL_RESTORE          OMAP_R(0x4A009E50)
#define CM_L3INIT_HSUSBHOST_CLKCTRL_RESTORE     OMAP_R(0x4A009E54)
#define CM_L3INIT_HSUSBTLL_CLKCTRL_RESTORE      OMAP_R(0x4A009E58)
#define CM_SDMA_STATICDEP_RESTORE               OMAP_R(0x4A009E5C)

//
// INSTR_CM2 Registers
//
#define CMI2_IDENTIFICATION             OMAP_R(0x4A009F00)
#define CMI2_SYS_CONFIG                 OMAP_R(0x4A009F10)
#define CMI2_STATUS                     OMAP_R(0x4A009F14)
#define CMI2_CONFIGURATION              OMAP_R(0x4A009F24)
#define CMI2_CLASS_FILTERING            OMAP_R(0x4A009F28)
#define CMI2_TRIGGERING                 OMAP_R(0x4A009F2C)
#define CMI2_SAMPLING                   OMAP_R(0x4A009F30)

///////////////////////////////////////////////////////////////
//                 OMAP 4430 SCRM Registers
///////////////////////////////////////////////////////////////
#define REVISION_SCRM                   OMAP_R(0x4A00A000)
#define CLKSETUPTIME                    OMAP_R(0x4A00A100)
#define PMICSETUPTIME                   OMAP_R(0x4A00A104)
#define ALTCLKSRC                       OMAP_R(0x4A00A110)
#define C2CCLKM                         OMAP_R(0x4A00A11C)
#define EXTCLKREQ                       OMAP_R(0x4A00A200)
#define ACCCLKREQ                       OMAP_R(0x4A00A204)
#define PWRREQ                          OMAP_R(0x4A00A208)
#define AUXCLKREQ0                      OMAP_R(0x4A00A210)
#define AUXCLKREQ1                      OMAP_R(0x4A00A214)
#define AUXCLKREQ2                      OMAP_R(0x4A00A218)
#define AUXCLKREQ3                      OMAP_R(0x4A00A21C)
#define AUXCLKREQ4                      OMAP_R(0x4A00A220)
#define AUXCLKREQ5                      OMAP_R(0x4A00A224)
#define C2CCLKREQ                       OMAP_R(0x4A00A234)
#define AUXCLK0                         OMAP_R(0x4A00A310)
#define AUXCLK1                         OMAP_R(0x4A00A314)
#define AUXCLK2                         OMAP_R(0x4A00A318)
#define AUXCLK3                         OMAP_R(0x4A00A31C)
#define AUXCLK4                         OMAP_R(0x4A00A320)
#define AUXCLK5                         OMAP_R(0x4A00A324)
#define RSTTIME_REG                     OMAP_R(0x4A00A400)
#define C2CRSTCTRL                      OMAP_R(0x4A00A41C)
#define EXTPWRONRSTCTRL                 OMAP_R(0x4A00A420)
#define EXTWARMRSTST_REG                OMAP_R(0x4A00A510)
#define APEWARMRSTST_REG                OMAP_R(0x4A00A514)
#define C2CWARMRSTST_REG                OMAP_R(0x4A00A51C)

///////////////////////////////////////////////////////////////
//                 OMAP 4430 SR Registers
///////////////////////////////////////////////////////////////

//
// SR_MPU
//
#define SR_MPU_SRCONFIG                 OMAP_R(0x4A0D9000)
#define SR_MPU_SRSTATUS                 OMAP_R(0x4A0D9004)
#define SR_MPU_SENVAL                   OMAP_R(0x4A0D9008)
#define SR_MPU_SENMIN                   OMAP_R(0x4A0D900C)
#define SR_MPU_SENMAX                   OMAP_R(0x4A0D9010)
#define SR_MPU_SENAVG                   OMAP_R(0x4A0D9014)
#define SR_MPU_AVGWEIGHT                OMAP_R(0x4A0D9018)
#define SR_MPU_NVALUERECIPROCAL         OMAP_R(0x4A0D901C)
#define SR_MPU_IRQSTATUS_RAW            OMAP_R(0x4A0D9024)
#define SR_MPU_IRQSTATUS                OMAP_R(0x4A0D9028)
#define SR_MPU_IRQENABLE_SET            OMAP_R(0x4A0D902C)
#define SR_MPU_IRQENABLE_CLR            OMAP_R(0x4A0D9030)
#define SR_MPU_SENERROR                 OMAP_R(0x4A0D9034)
#define SR_MPU_ERRCONFIG                OMAP_R(0x4A0D9038)

//
// SR_IVA
//
#define SR_IVA_SRCONFIG                 OMAP_R(0x4A0DB000)
#define SR_IVA_SRSTATUS                 OMAP_R(0x4A0DB004)
#define SR_IVA_SENVAL                   OMAP_R(0x4A0DB008)
#define SR_IVA_SENMIN                   OMAP_R(0x4A0DB00C)
#define SR_IVA_SENMAX                   OMAP_R(0x4A0DB010)
#define SR_IVA_SENAVG                   OMAP_R(0x4A0DB014)
#define SR_IVA_AVGWEIGHT                OMAP_R(0x4A0DB018)
#define SR_IVA_NVALUERECIPROCAL         OMAP_R(0x4A0DB01C)
#define SR_IVA_IRQSTATUS_RAW            OMAP_R(0x4A0DB024)
#define SR_IVA_IRQSTATUS                OMAP_R(0x4A0DB028)
#define SR_IVA_IRQENABLE_SET            OMAP_R(0x4A0DB02C)
#define SR_IVA_IRQENABLE_CLR            OMAP_R(0x4A0DB030)
#define SR_IVA_SENERROR                 OMAP_R(0x4A0DB034)
#define SR_IVA_ERRCONFIG                OMAP_R(0x4A0DB038)

//
// SR_CORE
//
#define SR_CORE_SRCONFIG                OMAP_R(0x4A0DD000)
#define SR_CORE_SRSTATUS                OMAP_R(0x4A0DD004)
#define SR_CORE_SENVAL                  OMAP_R(0x4A0DD008)
#define SR_CORE_SENMIN                  OMAP_R(0x4A0DD00C)
#define SR_CORE_SENMAX                  OMAP_R(0x4A0DD010)
#define SR_CORE_SENAVG                  OMAP_R(0x4A0DD014)
#define SR_CORE_AVGWEIGHT               OMAP_R(0x4A0DD018)
#define SR_CORE_NVALUERECIPROCAL        OMAP_R(0x4A0DD01C)
#define SR_CORE_IRQSTATUS_RAW           OMAP_R(0x4A0DD024)
#define SR_CORE_IRQSTATUS               OMAP_R(0x4A0DD028)
#define SR_CORE_IRQENABLE_SET           OMAP_R(0x4A0DD02C)
#define SR_CORE_IRQENABLE_CLR           OMAP_R(0x4A0DD030)
#define SR_CORE_SENERROR                OMAP_R(0x4A0DD034)
#define SR_CORE_ERRCONFIG               OMAP_R(0x4A0DD038)