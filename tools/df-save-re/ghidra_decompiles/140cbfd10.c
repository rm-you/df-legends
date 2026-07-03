// FUN_140cbfd10 @ 140cbfd10
// callees:
//   -> 140c21380 FUN_140c21380


void FUN_140cbfd10(longlong param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  sVar1 = *(short *)(param_1 + 300);
  sVar2 = *(short *)(param_1 + 0xa4);
  if (((-1 < sVar2) &&
      ((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar1)) {
    lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
    if (((((ulonglong)(longlong)sVar1 <
           (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar1 * 8), lVar4 != 0)) &&
        ((*(uint *)(param_1 + 0x810) & 0x100000) == 0)) &&
       ((((*(uint *)(param_1 + 0x80c) & 0x100000) != 0 || (*(int *)(lVar4 + 0x6b0) < 0x14)) ||
        ((*(byte *)(*(longlong *)(lVar4 + 0x6a8) + 0x13) & 0x80) == 0)))) {
      piVar5 = (int *)(param_1 + 0x5e4 + (longlong)param_2 * 0x1c);
      iVar3 = *piVar5;
      FUN_140c21380(piVar5,param_3,*(undefined4 *)(lVar4 + 0x1404 + (longlong)param_2 * 0x10));
      if ((param_2 == 0) && (*(int *)(param_1 + 0x5e4) != iVar3)) {
        *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
      }
    }
  }
  return;
}

