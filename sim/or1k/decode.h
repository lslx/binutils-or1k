/* Decode header for or1k32bef.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU simulators.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef OR1K32BEF_DECODE_H
#define OR1K32BEF_DECODE_H

extern const IDESC *or1k32bef_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void or1k32bef_init_idesc_table (SIM_CPU *);
extern void or1k32bef_sem_init_idesc_table (SIM_CPU *);
extern void or1k32bef_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family or1k32bef.  */
typedef enum or1k32bef_insn_type {
  OR1K32BEF_INSN_X_INVALID, OR1K32BEF_INSN_X_AFTER, OR1K32BEF_INSN_X_BEFORE, OR1K32BEF_INSN_X_CTI_CHAIN
 , OR1K32BEF_INSN_X_CHAIN, OR1K32BEF_INSN_X_BEGIN, OR1K32BEF_INSN_L_J, OR1K32BEF_INSN_L_JAL
 , OR1K32BEF_INSN_L_JR, OR1K32BEF_INSN_L_JALR, OR1K32BEF_INSN_L_BNF, OR1K32BEF_INSN_L_BF
 , OR1K32BEF_INSN_L_TRAP, OR1K32BEF_INSN_L_SYS, OR1K32BEF_INSN_L_RFE, OR1K32BEF_INSN_L_NOP_IMM
 , OR1K32BEF_INSN_L_NOP, OR1K32BEF_INSN_L_MOVHI, OR1K32BEF_INSN_L_MFSPR, OR1K32BEF_INSN_L_MTSPR
 , OR1K32BEF_INSN_L_LWZ, OR1K32BEF_INSN_L_LWS, OR1K32BEF_INSN_L_LBZ, OR1K32BEF_INSN_L_LBS
 , OR1K32BEF_INSN_L_LHZ, OR1K32BEF_INSN_L_LHS, OR1K32BEF_INSN_L_SW, OR1K32BEF_INSN_L_SB
 , OR1K32BEF_INSN_L_SH, OR1K32BEF_INSN_L_SLL, OR1K32BEF_INSN_L_SLLI, OR1K32BEF_INSN_L_SRL
 , OR1K32BEF_INSN_L_SRLI, OR1K32BEF_INSN_L_SRA, OR1K32BEF_INSN_L_SRAI, OR1K32BEF_INSN_L_ROR
 , OR1K32BEF_INSN_L_RORI, OR1K32BEF_INSN_L_ADD, OR1K32BEF_INSN_L_SUB, OR1K32BEF_INSN_L_AND
 , OR1K32BEF_INSN_L_OR, OR1K32BEF_INSN_L_XOR, OR1K32BEF_INSN_L_ADDC, OR1K32BEF_INSN_L_MUL
 , OR1K32BEF_INSN_L_MULU, OR1K32BEF_INSN_L_DIV, OR1K32BEF_INSN_L_DIVU, OR1K32BEF_INSN_L_FF1
 , OR1K32BEF_INSN_L_FL1, OR1K32BEF_INSN_L_ADDI, OR1K32BEF_INSN_L_ANDI, OR1K32BEF_INSN_L_ORI
 , OR1K32BEF_INSN_L_XORI, OR1K32BEF_INSN_L_MULI, OR1K32BEF_INSN_L_ADDIC, OR1K32BEF_INSN_L_SFGTU
 , OR1K32BEF_INSN_L_SFGEU, OR1K32BEF_INSN_L_SFLTU, OR1K32BEF_INSN_L_SFLEU, OR1K32BEF_INSN_L_SFGTS
 , OR1K32BEF_INSN_L_SFGES, OR1K32BEF_INSN_L_SFLTS, OR1K32BEF_INSN_L_SFLES, OR1K32BEF_INSN_L_SFGTUI
 , OR1K32BEF_INSN_L_SFGEUI, OR1K32BEF_INSN_L_SFLTUI, OR1K32BEF_INSN_L_SFLEUI, OR1K32BEF_INSN_L_SFGTSI
 , OR1K32BEF_INSN_L_SFGESI, OR1K32BEF_INSN_L_SFLTSI, OR1K32BEF_INSN_L_SFLESI, OR1K32BEF_INSN_L_SFEQ
 , OR1K32BEF_INSN_L_SFEQI, OR1K32BEF_INSN_L_SFNE, OR1K32BEF_INSN_L_SFNEI, OR1K32BEF_INSN__MAX
} OR1K32BEF_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family or1k32bef.  */
typedef enum or1k32bef_sfmt_type {
  OR1K32BEF_SFMT_EMPTY, OR1K32BEF_SFMT_L_J, OR1K32BEF_SFMT_L_JAL, OR1K32BEF_SFMT_L_JR
 , OR1K32BEF_SFMT_L_JALR, OR1K32BEF_SFMT_L_BNF, OR1K32BEF_SFMT_L_TRAP, OR1K32BEF_SFMT_L_RFE
 , OR1K32BEF_SFMT_L_NOP_IMM, OR1K32BEF_SFMT_L_NOP, OR1K32BEF_SFMT_L_MOVHI, OR1K32BEF_SFMT_L_MFSPR
 , OR1K32BEF_SFMT_L_MTSPR, OR1K32BEF_SFMT_L_LWZ, OR1K32BEF_SFMT_L_LBZ, OR1K32BEF_SFMT_L_LHZ
 , OR1K32BEF_SFMT_L_SW, OR1K32BEF_SFMT_L_SB, OR1K32BEF_SFMT_L_SH, OR1K32BEF_SFMT_L_SLL
 , OR1K32BEF_SFMT_L_SLLI, OR1K32BEF_SFMT_L_ADD, OR1K32BEF_SFMT_L_FF1, OR1K32BEF_SFMT_L_ADDI
 , OR1K32BEF_SFMT_L_SFGTU, OR1K32BEF_SFMT_L_SFGTUI, OR1K32BEF_SFMT_L_SFGTSI
} OR1K32BEF_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int or1k32bef_model_or1200_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void or1k32bef_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void or1k32bef_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* OR1K32BEF_DECODE_H */