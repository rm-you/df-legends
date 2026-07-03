// FUN_14015bcb0 @ 14015bcb0
// callees:


void FUN_14015bcb0(longlong param_1,short *param_2,short *param_3,short param_4,short param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar2 = ((int)*(short *)(param_1 + 0x88) + (int)param_4) / 0x30 + DAT_141d69560;
  *param_2 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4);
  iVar2 = ((int)*(short *)(param_1 + 0x8a) + (int)param_5) / 0x30 + DAT_141d69564;
  *param_3 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4);
  uVar1 = *(uint *)(param_1 + 0x294 + ((longlong)param_4 * 0x10 + (longlong)param_5) * 4);
  bVar4 = (uVar1 >> 0x11 & 1) != 0;
  if ((uVar1 >> 0x12 & 1) != 0) {
    bVar4 = bVar4 | 2;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    bVar4 = bVar4 | 4;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    bVar4 = bVar4 | 8;
  }
  iVar2 = (int)*(char *)((longlong)(char)bVar4 + 0x1d94 + param_1);
  iVar3 = iVar2 / 3 + (iVar2 >> 0x1f) +
          (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  iVar2 = iVar2 + iVar3 * -3;
  if (iVar2 == 0) {
    *param_2 = *param_2 + -1;
  }
  if (iVar2 == 2) {
    *param_2 = *param_2 + 1;
  }
  if (iVar3 == 0) {
    *param_3 = *param_3 + -1;
  }
  if (iVar3 == 2) {
    *param_3 = *param_3 + 1;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  if (*(int *)(DAT_141d6cfd0 + 0xa0) <= (int)*param_2) {
    *param_2 = *(short *)(DAT_141d6cfd0 + 0xa0) + -1;
  }
  if (*(int *)(DAT_141d6cfd0 + 0xa4) <= (int)*param_3) {
    *param_3 = *(short *)(DAT_141d6cfd0 + 0xa4) + -1;
  }
  return;
}

