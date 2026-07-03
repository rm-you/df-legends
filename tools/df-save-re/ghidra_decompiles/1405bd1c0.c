// FUN_1405bd1c0 @ 1405bd1c0
// callees:


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405bd1c0(longlong param_1)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 1;
  sVar2 = *(short *)(param_1 + 10);
  sVar3 = *(short *)(param_1 + 0xe);
  sVar4 = *(short *)(param_1 + 0xc);
  if (((((-1 < sVar2) && (sVar2 < DAT_141d69554)) && (-1 < sVar4)) &&
      ((sVar4 < DAT_141d69558 && (-1 < sVar3)))) &&
     ((sVar3 < DAT_141d6955c &&
      ((DAT_141d69520 != 0 &&
       (lVar5 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_141d69520 + ((longlong)sVar2 >> 4) * 8) +
                   ((longlong)sVar4 >> 4) * 8) + (longlong)sVar3 * 8), lVar5 != 0)))))) {
    puVar1 = (uint *)(lVar5 + 0x84);
    *puVar1 = *puVar1 | 1;
    return;
  }
  _DAT_141d6dbc4 = _DAT_141d6dbc4 | 1;
  return;
}

