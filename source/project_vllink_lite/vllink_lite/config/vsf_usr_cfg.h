//! \note Top Level Application Configuration 

#ifndef __TOP_APP_CFG_H__
#define __TOP_APP_CFG_H__

/*============================ INCLUDES ======================================*/

#ifdef __GNUC__
#	include "compile_definitions.h"
#endif

/*============================ MACROS ========================================*/

#define VSF_CFG_USER_HEADER             "../vsf_private/user_vsf.h"

//#define ASSERT(...)                     if (!(__VA_ARGS__)) {while(1);};
#define ASSERT(...)

#define VSF_OS_CFG_PRIORITY_NUM                         1
#define VSF_OS_CFG_MAIN_MODE                            VSF_OS_CFG_MAIN_MODE_IDLE

#define VSF_KERNEL_CFG_SUPPORT_SYNC                     ENABLED
#   define VSF_KERNEL_CFG_SUPPORT_SYNC_IRQ              ENABLED
#   define VSF_KERNEL_CFG_SUPPORT_BITMAP_EVENT          DISABLED
#   define VSF_KERNEL_CFG_SUPPORT_MSG_QUEUE             DISABLED
#define VSF_KERNEL_CFG_EDA_SUPPORT_PT                   DISABLED
#define VSF_KERNEL_CFG_EDA_SUPPORT_TIMER                DISABLED
#   define VSF_KERNEL_CFG_CALLBACK_TIMER                DISABLED
#define VSF_KERNEL_CFG_EDA_SUPPORT_SUB_CALL             ENABLED
#define VSF_KERNEL_CFG_EDA_SUPPORT_FSM                  ENABLED

#define VSF_KERNEL_CFG_ALLOW_KERNEL_BEING_PREEMPTED     DISABLED
#   define VSF_KERNEL_CFG_SUPPORT_DYNAMIC_PRIOTIRY      DISABLED
#   define VSF_OS_CFG_EVTQ_BITSIZE                      4

#define VSF_USE_HEAP                                    ENABLED
#   define VSF_HEAP_CFG_MCB_MAGIC_EN                    DISABLED
#   define VSF_HEAP_SIZE                                0x1000

#define VSF_KERNEL_CFG_SUPPORT_MSG_QUEUE                DISABLED
#define VSF_USE_KERNEL_SIMPLE_SHELL                     ENABLED
#define VSF_KERNEL_CFG_SUPPORT_THREAD                   DISABLED

//#define VSF_OS_CFG_EVTQ_POOL_SIZE                     16
//#define VSF_OS_CFG_DEFAULT_TASK_FRAME_POOL_SIZE       16
//#define VSF_OS_CFG_ADD_EVTQ_TO_IDLE                   DISABLED
//#define VSF_OS_CFG_MAIN_STACK_SIZE                    2048

#define VSF_USE_USB_DEVICE                              ENABLED
#   define VSF_USE_USB_DEVICE_MSC                       ENABLED
#define VSF_USE_FS                                      ENABLED
#   define VSF_USE_MEMFS                                ENABLED
#   define VSF_USE_FATFS                                ENABLED
#define VSF_USE_MAL                                     ENABLED
#   define VSF_USE_MEM_MAL                              ENABLED
#   define VSF_USE_FAKEFAT32_MAL                        ENABLED
#define VSF_USE_SCSI                                    ENABLED
#   define VSF_USE_MAL_SCSI                             ENABLED

#define VSF_USE_SERVICE_VSFSTREAM                       ENABLED

/*============================ INCLUDES ======================================*/

#include "proj_cfg.h"
#include "brd_cfg.h"

/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/


#endif
/* EOF */
