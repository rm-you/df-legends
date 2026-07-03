// FUN_14029a920 @ 14029a920
// callees:
//   -> 14000d840 FUN_14000d840


int FUN_14029a920(longlong param_1,undefined8 param_2,short param_3,short param_4,ushort param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = DAT_141d6dd50;
  iVar6 = 1;
  iVar5 = (int)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 2) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar1 = *(longlong *)(param_1 + 0x68);
    do {
      if ((*(int *)(lVar1 + lVar7 * 4) == 1) &&
         (((param_3 == -1 ||
           ((((-1 < param_3 &&
              ((ulonglong)(longlong)param_3 < (ulonglong)(DAT_141d6dd58 - lVar3 >> 3))) &&
             (-1 < param_4)) &&
            ((lVar2 = *(longlong *)(lVar3 + (longlong)param_3 * 8),
             (ulonglong)(longlong)param_4 <
             (ulonglong)(*(longlong *)(lVar2 + 0x180) - *(longlong *)(lVar2 + 0x178) >> 3) &&
             (cVar4 = FUN_14000d840(*(longlong *)
                                     (*(longlong *)(lVar2 + 0x178) + (longlong)param_4 * 8) + 0x6a8,
                                    0x45), cVar4 != '\0')))))) && ((param_5 & 3) == 0)))) {
        iVar6 = iVar6 + (*(int *)(*(longlong *)(param_1 + 0x110) + lVar7 * 4) + 0x1f +
                         *(int *)(*(longlong *)(param_1 + 0x128) + lVar7 * 4) >> 5);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return iVar6;
}

