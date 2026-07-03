// FUN_140d3e310 @ 140d3e310
// callees:
//   -> 1400047c0 FUN_1400047c0
//   -> 140168dc0 FUN_140168dc0
//   -> 140168eb0 FUN_140168eb0


void FUN_140d3e310(longlong param_1,short param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < (short)param_3))
      && (((int)(short)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < (short)param_4)))) &&
     (((int)(short)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (puVar2 = *(uint **)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
                             ((longlong)(short)param_3 >> 4) * 8) + (longlong)(short)param_4 * 8),
       puVar2 != (uint *)0x0)))))) {
    *puVar2 = *puVar2 | 0xc;
    puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
    *puVar2 = *puVar2 | 5;
  }
  uVar5 = (int)param_2 & 0x8000000f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
  }
  if (uVar5 == 0) {
    sVar3 = param_2 + -1;
    puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3,param_4);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = *puVar2 | 0xc;
    }
    uVar4 = (int)(short)param_3 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    if (uVar4 == 0) {
      puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3 - 1);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = *puVar2 | 0xc;
      }
    }
    if (uVar4 == 0xf) {
      puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3 + 1,param_4);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = *puVar2 | 0xc;
      }
    }
  }
  if (uVar5 == 0xf) {
    sVar3 = param_2 + 1;
    puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3,param_4);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = *puVar2 | 0xc;
    }
    uVar4 = (int)(short)param_3 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    if (uVar4 == 0) {
      puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3 - 1);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = *puVar2 | 0xc;
      }
    }
    if (uVar4 == 0xf) {
      puVar2 = (uint *)FUN_1400047c0(param_1,sVar3,param_3 + 1,param_4);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = *puVar2 | 0xc;
      }
    }
  }
  uVar4 = (int)(short)param_3 & 0x8000000f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
  }
  if (uVar4 == 0) {
    puVar2 = (uint *)FUN_1400047c0(param_1,param_2,param_3 - 1,param_4);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = *puVar2 | 0xc;
    }
  }
  if (uVar4 == 0xf) {
    puVar2 = (uint *)FUN_1400047c0(param_1,param_2,param_3 + 1,param_4);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = *puVar2 | 0xc;
    }
  }
  cVar1 = FUN_140168dc0(param_1,param_2,param_3,param_4);
  if ('\x06' < cVar1) {
    cVar1 = FUN_140168eb0(param_1,param_2,param_3,param_4);
    if ('\x02' < cVar1) goto LAB_140d3e5bf;
  }
  sVar3 = param_4 + 1;
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < (short)param_3))
     && ((((int)(short)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < sVar3)) &&
         (((int)sVar3 < *(int *)(param_1 + 0x1160ec) &&
          ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
           (puVar2 = *(uint **)(*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8
                                   ) + ((longlong)(short)param_3 >> 4) * 8) + (longlong)sVar3 * 8),
           puVar2 != (uint *)0x0)))))))) {
    *puVar2 = *puVar2 | 0xc;
    puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
    *puVar2 = *puVar2 | 5;
  }
LAB_140d3e5bf:
  if (0 < (short)param_4) {
    puVar2 = (uint *)FUN_1400047c0(param_1,param_2,param_3,param_4 - 1);
    if ((puVar2 != (uint *)0x0) &&
       ((puVar2[(longlong)(int)uVar5 * 0x10 + (longlong)(int)uVar4 + 0xa5] & 0x400000) != 0)) {
      *puVar2 = *puVar2 | 0xc;
      puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
      *puVar2 = *puVar2 | 5;
    }
  }
  return;
}

