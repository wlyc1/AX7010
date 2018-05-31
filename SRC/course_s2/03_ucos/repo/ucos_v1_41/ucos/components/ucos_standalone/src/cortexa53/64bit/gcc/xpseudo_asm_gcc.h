/******************************************************************************
*
* Copyright (C) 2014 - 2015 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xpseudo_asm_gcc.h
*
* This header file contains macros for using inline assembler code. It is
* written specifically for the GNU compiler.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who      Date     Changes
* ----- -------- -------- -----------------------------------------------
* 5.00 	pkp		 05/21/14 First release
* </pre>
*
******************************************************************************/

#ifndef XPSEUDO_ASM_GCC_H  /* prevent circular inclusions */
#define XPSEUDO_ASM_GCC_H  /* by using protection macros */

/***************************** Include Files ********************************/

#include "xil_types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Constant Definitions ****************************/

/**************************** Type Definitions ******************************/

/***************** Macros (Inline Functions) Definitions ********************/

/* necessary for pre-processor */
#define stringify(s)	tostring(s)
#define tostring(s)	#s

/* pseudo assembler instructions */
#define mfcpsr()	({u32 rval; \
			   asm volatile("mrs %0,  DAIF" : "=r" (rval));\
			  rval;\
			 })

#define mtcpsr(v) asm ("msr DAIF, %0" : : "r" (v))

#define cpsiei()	//__asm__ __volatile__("cpsie	i\n")
#define cpsidi()	//__asm__ __volatile__("cpsid	i\n")

#define cpsief()	//__asm__ __volatile__("cpsie	f\n")
#define cpsidf()	//__asm__ __volatile__("cpsid	f\n")



#define mtgpr(rn, v)	/*__asm__ __volatile__(\
			  "mov r" stringify(rn) ", %0 \n"\
			  : : "r" (v)\
			)*/

#define mfgpr(rn)	/*({u32 rval; \
			  __asm__ __volatile__(\
			    "mov %0,r" stringify(rn) "\n"\
			    : "=r" (rval)\
			  );\
			  rval;\
			 })*/

/* memory synchronization operations */

/* Instruction Synchronization Barrier */
#define isb() asm ("isb sy")

/* Data Synchronization Barrier */
#define dsb() asm("dsb sy")

/* Data Memory Barrier */
#define dmb() asm("dmb sy")


/* Memory Operations */
#define ldr(adr)	({u32 rval; \
			  __asm__ __volatile__(\
			    "ldr	%0,[%1]"\
			    : "=r" (rval) : "r" (adr)\
			  );\
			  rval;\
			 })

#define ldrb(adr)	({u8 rval; \
			  __asm__ __volatile__(\
			    "ldrb	%0,[%1]"\
			    : "=r" (rval) : "r" (adr)\
			  );\
			  rval;\
			 })

#define str(adr, val)	__asm__ __volatile__(\
			  "str	%0,[%1]\n"\
			  : : "r" (val), "r" (adr)\
			)

#define strb(adr, val)	__asm__ __volatile__(\
			  "strb	%0,[%1]\n"\
			  : : "r" (val), "r" (adr)\
			)

/* Count leading zeroes (clz) */
#define clz(arg)	({u8 rval; \
			  __asm__ __volatile__(\
			    "clz	%0,%1"\
			    : "=r" (rval) : "r" (arg)\
			  );\
			  rval;\
			 })
#define mtcpdc(reg,val)	asm("dc " #reg ",%0"  : : "r" (val))
#define mtcpic(reg,val)	asm("ic " #reg ",%0"  : : "r" (val))

#define mtcpicall(reg)	asm("ic " #reg)
#define mtcptlbi(reg)	asm("tlbi " #reg)
#define mtcpat(reg,val)	asm("at " #reg ",%0"  : : "r" (val))
/* CP15 operations */
#define mfcp(reg)	({u32 rval;\
			asm("mrs	%0, " #reg : "=r" (rval));\
			rval;\
			})

#define mtcp(reg,val)	asm("msr " #reg ",%0"  : : "r" (val))

/************************** Variable Definitions ****************************/

/************************** Function Prototypes *****************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* XPSEUDO_ASM_GCC_H */
